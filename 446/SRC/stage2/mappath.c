#include <lv2/lv2.h>
#include <lv2/libc.h>
#include <lv2/memory.h>
#include <lv2/patch.h>
#include <lv2/syscall.h>
#include <lv2/io.h>
#include <lv2/error.h>
#include "common.h"
#include "mappath.h"
#include "modulespatch.h"
#include "syscall8.h"

#define MAX_TABLE_ENTRIES 20

#ifndef MAX
#define MAX(x, y) ((x >= y) ? x : y)
#endif	/* !defined(MAX) */

typedef struct _MapEntry
{
	char *oldpath;
	char *newpath;
	uint16_t oldpath_len;
	uint16_t newpath_len;
	uint32_t flags;
} MapEntry;

MapEntry map_table[MAX_TABLE_ENTRIES];

int LAST_TABLE_ENTRY = -1;

// TODO: map_path and open_path_hook should be mutexed...

int map_path(char *oldpath, char *newpath, uint32_t flags)
{
	uint16_t oldpath_len = strlen(oldpath);

	if (!oldpath || oldpath_len == 0)
		return -1;

	DPRINTF("Map path: %s -> %s\n", oldpath, newpath);

	if (newpath && strcmp(oldpath, newpath) == 0)
		newpath = NULL;

	uint16_t newpath_len = strlen(newpath);

	if (strcmp(oldpath, "/dev_bdvd") == 0)
	{
		condition_apphome = (newpath != NULL);
	}

	int i, firstfree = -1, last_used_entry = -1;

	for (i = 0; i < MAX_TABLE_ENTRIES; i++)
	{
		if (map_table[i].oldpath_len)
		{
			if (strcmp(oldpath, map_table[i].oldpath) == 0)
			{
				if (newpath_len)
				{
					// update existing mapping (if newpath is not null)
					map_table[i].flags = (map_table[i].flags&FLAG_COPY) | (flags&(~FLAG_COPY));
					if(condition_apphome) map_table[i].flags |= FLAG_APP_HOME; else map_table[i].flags &= ~FLAG_APP_HOME;

					map_table[i].newpath_len = newpath_len;

					strncpy(map_table[i].newpath, newpath, MAX_PATH-1);
					map_table[i].newpath[MAX_PATH-1] = 0;

				}
				else
				{
					// release existing mapping (if newpath is null)
					if (map_table[i].flags & FLAG_COPY)
						dealloc(map_table[i].oldpath, 0x27);

					dealloc(map_table[i].newpath, 0x27);
					map_table[i].oldpath = NULL;
					map_table[i].newpath = NULL;
					map_table[i].oldpath_len = 0;
					map_table[i].newpath_len = 0;
					map_table[i].flags = 0;
				}

				return 0;
			}

			last_used_entry = i;
		}
		else if (firstfree < 0)
		{
			firstfree = i;
		}
	}

	if (firstfree < 0)
		return EKRESOURCE; // all mappings are in use

	if (!newpath || newpath_len == 0)
		return 0;          // creating a null mapping

	// add new mapping
	map_table[firstfree].flags = flags;
	if(condition_apphome) map_table[firstfree].flags |= FLAG_APP_HOME; else map_table[firstfree].flags &= ~FLAG_APP_HOME;

	map_table[firstfree].oldpath_len = oldpath_len;

	if (flags & FLAG_COPY)
	{
		map_table[firstfree].oldpath = alloc(oldpath_len + 1, 0x27);
		strncpy(map_table[firstfree].oldpath, oldpath, oldpath_len);
		map_table[firstfree].oldpath[oldpath_len] = 0;
	}
	else
	{
		map_table[firstfree].oldpath = oldpath;
	}

	map_table[firstfree].newpath_len = newpath_len;

	map_table[firstfree].newpath = alloc(MAX_PATH, 0x27);
	strncpy(map_table[firstfree].newpath, newpath, MAX_PATH-1);
	map_table[firstfree].newpath[MAX_PATH-1] = 0;

	LAST_TABLE_ENTRY = MAX(firstfree, last_used_entry);

	return 0;
}

int map_path_user(char *oldpath, char *newpath, uint32_t flags)
{
	char *oldp, *newp;

	DPRINTF("map_path_user, called by process %s: %s -> %s\n", get_process_name(get_current_process_critical()), oldpath, newpath);

	if (oldpath == 0)
		return -1;

	int ret = pathdup_from_user(get_secure_user_ptr(oldpath), &oldp);
	if (ret != 0)
		return ret;

	if (newpath == 0)
	{
		newp = NULL;
	}
	else
	{
		ret = pathdup_from_user(get_secure_user_ptr(newpath), &newp);
		if (ret != 0)
		{
			dealloc(oldp, 0x27);
			return ret;
		}
	}

	ret = map_path(oldp, newp, flags | FLAG_COPY);

	dealloc(oldp, 0x27);
	if (newp)
		dealloc(newp, 0x27);

	return ret;
}

LV2_SYSCALL2(int, sys_map_path, (char *oldpath, char *newpath))
{
	extend_kstack(0);
	return map_path_user(oldpath, newpath, 0);
}

int sys_map_paths(char *paths[], char *new_paths[], unsigned int num)
{
	uint32_t *u_paths = (uint32_t *)get_secure_user_ptr(paths);
	uint32_t *u_new_paths = (uint32_t *)get_secure_user_ptr(new_paths);
	int unmap = 0;
	int ret = 0;

	if (!u_paths || num == 0)
	{
		unmap = 1;
	}
	else
	{
		if (!u_new_paths)
			return EINVAL;

		for (unsigned int i = 0; i < num; i++)
		{
			ret = map_path_user((char *)(uint64_t)u_paths[i], (char *)(uint64_t)u_new_paths[i], FLAG_TABLE);
			if (ret != 0)
			{
				unmap = 1;
				break;
			}
		}
	}

	if (unmap)
	{
		for (unsigned int i = 0; i < MAX_TABLE_ENTRIES; i++)
		{
			if (map_table[i].flags & FLAG_TABLE)
			{
				if (map_table[i].flags & FLAG_COPY)
					dealloc(map_table[i].oldpath, 0x27);

				dealloc(map_table[i].newpath, 0x27);
				map_table[i].oldpath = NULL;
				map_table[i].newpath = NULL;
				map_table[i].oldpath_len = 0;
				map_table[i].newpath_len = 0;
				map_table[i].flags = 0;
			}
		}

		LAST_TABLE_ENTRY = -1;
	}

	return ret;
}

LV2_HOOKED_FUNCTION_POSTCALL_2(void, open_path_hook, (char *path0, int mode))
{
	/*if(path0[7]=='v')// && map_table[0].newpath)
	{
		if(!map_table[0].newpath) map_table[0].newpath = alloc(0x400, 0x27);
		strcpy(map_table[0].newpath, (char*)"/dev_hdd0/GAMES/BLES01674");
		strcpy(map_table[0].newpath+25, path0+9);
		DPRINTF(">: [%s]\n", map_table[0].newpath);
		set_patched_func_param(1, (uint64_t)map_table[0].newpath);
	}*/


	if (path0[0]=='/')
	{
		char *path=path0;
		if(path[1]=='/') path++; //if(path[1]=='/') path++;

		if (path[14] == 'U' && ((strcmp(path, "/dev_bdvd/PS3_UPDATE/PS3UPDAT.PUP") == 0) /*|| (strcmp(path, "/dev_bdvd/PS3/UPDATE/PS3UPDAT.PUP") == 0)*/))
		{
			char not_update[40];
			sprintf(not_update, "/dev_bdvd/PS3_NOT_UPDATE/PS3UPDAT.PUP");
			set_patched_func_param(1, (uint64_t)not_update);

			DPRINTF("Update from disc blocked!\n");
		}
		else //if(path[7]=='v' || path[7]=='m') /* /dev_bdvd or /app_home * /
		{
			//DPRINTF("?: [%s]\n", path);

			//if(path[1]=='/') DPRINTF("!!! This will usually error out!\n");//path++;
			//if(path[0]=='/')

			for (int i = LAST_TABLE_ENTRY; i >= 0; i--)
			{
				if (map_table[i].oldpath_len && strncmp(path, map_table[i].oldpath, map_table[i].oldpath_len) == 0)
				{
					strcpy(map_table[i].newpath + map_table[i].newpath_len, path + map_table[i].oldpath_len);
					set_patched_func_param(1, (uint64_t)map_table[i].newpath);

					//DPRINTF("=: [%s]\n", map_table[i].newpath);
					break;
				}
			}
		}

		//DPRINTF("open_path %s\n", path);
	}
}

int sys_aio_copy_root(char *src, char *dst)
{
	src = get_secure_user_ptr(src);
	dst = get_secure_user_ptr(dst);

	// Begin original function implementation
	if (!src)
		return EFAULT;

	if (src[0] != '/')
		return EINVAL;

	unsigned int len, dest_len;

	len = strlen(src);

	if (len >= 0x420 || len <= 1)
		return EINVAL;

	strcpy(dst, src);

	for (dest_len = 2; dest_len < len; dest_len++)
	{
		if (dst[dest_len] == 0)
			break;

		if (dst[dest_len] == '/')
		{
			dst[dest_len] = 0;
			break;
		}
	}

	if (dest_len >= 0x20)
		return EINVAL;

	// Here begins custom part of the implementation
	if (condition_apphome && strcmp(dst, "/dev_bdvd") == 0) // if dev_bdvd and jb game mounted
	{
		// find /dev_bdvd
		for (unsigned int i = 0; i < LAST_TABLE_ENTRY; i++)
		{
			if (map_table[i].flags & FLAG_APP_HOME)
			{
				for (unsigned int j = 1; j < map_table[i].newpath_len; j++)
				{
					dst[j] = map_table[i].newpath[j];

					if (dst[j] == 0)
						break;

					if (dst[j] == '/')
					{
						dst[j] = 0;
						break;
					}
				}

				DPRINTF("AIO: root replaced by %s\n", dst);
				break;
			}
		}
	}

	return 0;
}

void unhook_all_map_path(void)
{
	suspend_intr();
	unhook_function_with_postcall(open_path_symbol, open_path_hook, 2);
	resume_intr();
}

void map_path_patches(int syscall)
{
	hook_function_with_postcall(open_path_symbol, open_path_hook, 2);

	if (syscall)
		create_syscall2(SYS_MAP_PATH, sys_map_path);
}

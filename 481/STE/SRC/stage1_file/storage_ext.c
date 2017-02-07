#include <lv2/lv2.h>
#include <lv2/libc.h>
#include <lv2/memory.h>
#include <lv2/storage.h>
#include <lv2/io.h>
#include <lv2/thread.h>
#include <lv2/synchronization.h>
#include <lv2/object.h>
#include <lv2/time.h>
#include <lv2/security.h>
#include <lv2/patch.h>
#include <lv2/syscall.h>
#include <lv2/error.h>
#include <lv2/symbols.h>
#include <lv1/lv1.h>
#include <lv1/lv1call.h>
#include <lv1/stor.h>
#include <lv1/patch.h>
#include "storage_ext.h"

#ifdef DEBUG
#define THREAD_NAME	"DiscemuDispatchThread"
#else
#define THREAD_NAME	""
#endif

typedef struct _ReadDiscCmd
{
	uint64_t start_sector;
	uint32_t sector_count;
	uint8_t *buf;
} ReadDiscCmd;

static mutex_t mutex;
static event_port_t command_port, result_port;
static event_queue_t command_queue, result_queue;

static event_port_t proxy_command_port;
static event_queue_t proxy_result_queue;

static int emu_ps3_rec = 0; // Support for burned PS3 DVD/BD Discs by deank
static volatile int loop = 0;

unsigned int real_disctype; /* Real disc in the drive */
unsigned int effective_disctype; /* The type of disc we want it to be, and the one faked in storage event. */
unsigned int fake_disctype; /* If no zero, get device type command will fake disc type to this. */

//

LV2_EXPORT int storage_internal_get_device_object(void *object, device_handle_t handle, void **dev_object);

int process_read_disc_cmd(ReadDiscCmd *cmd)
{
	lv1_stor_wrapper_var var;
	u64 dma_lpar;
	void *dma;
	int ret;

	// reasons to use lv1 calls here over lv2 storage functions
	// 1: this function may be called when lv2 storage functions haven't yet received the bdvd ready event, and thus, they don't work.
	// 2: this will read the real disc even with iso mounted, it may be useful in the future.

	ret = page_allocate_auto(NULL, 4096, 0x2F, &dma);
	memset(dma, 0x5B, 4096);

	if (ret == 0)
	{
		ret = kernel_ea_to_lpar_addr(dma, &dma_lpar);
		if (ret == 0)
		{
			suspend_intr();
			uint64_t state = spin_lock_irqsave();

			ret =  lv1_stor_wrapper_open(LV1_BDVD_DEV_ID, dma, dma_lpar, 12, &var);
			if (ret == 0)
			{
				ret = lv1_stor_wrapper_read(&var, 0, cmd->start_sector, cmd->sector_count, 0x2, cmd->buf);
				lv1_stor_wrapper_close(&var);
			}

			spin_unlock_irqrestore(state);
			resume_intr();
		}

		page_free(NULL, dma, 0x2F);
	}

	return ret;
}

static int read_real_disc_sector (void *buf, uint64_t lba, uint32_t size, int retries)
{
	ReadDiscCmd cmd;
	int ret = -1;

	cmd.buf = buf;
	cmd.start_sector = lba;
	cmd.sector_count = size;

	#ifdef DEBUG
	//DPRINTF("Read sector %lx\n", lba);
	#endif

	for (int i = 0; i < retries && ret != 0; i++)
	{
		if (0/*!loop*/)
		{
			event_t event;

			event_port_send(command_port, CMD_READ_DISC, (uint64_t)&cmd, 0);
			if (event_queue_receive(result_queue, &event, 0) == 0)
			{
				ret = (int)(int64_t)event.data1;
			}

		}
		else
		{
			ret = process_read_disc_cmd(&cmd);
		}

		if (ret == 0)
		{
			// Even when we cannot really read the disc, we are reported success, do a lame check here:
			if (*(uint32_t *)buf == 0x5B5B5B5B)
				ret = -1;
		}
	}

	return ret;
}

int is_psx(int check_ps2)
{
	uint8_t *buf;
	int result;
	int ret = 0;

	if (page_allocate_auto(NULL, 2048, 0x2F, (void **)&buf) == 0)
	{
		result = read_real_disc_sector(buf, 0x10, 1, 3);

		if (result == 0)
		{
			// Check if it is a burned PS3 disk (deank)
			if(check_ps2==3)
			{
				ret = (memcmp(buf+1, "CD001", 5) == 0 && memcmp(buf+0x28, "PS3VOLUME", 9) == 0);
				if(!ret)
				{
					result = read_real_disc_sector(buf, 0x01, 1, 3);
					ret = (memcmp(buf, "PlayStation3", 12) == 0);
				}
				page_free(NULL, buf, 0x2F);
				return ret;
			}
		}
		page_free(NULL, buf, 0x2F);
	}

	return ret;
}

void process_disc_insert(uint32_t disctype)
{
	real_disctype = disctype;
	effective_disctype = real_disctype;
	fake_disctype = 0;
	emu_ps3_rec = 0;	
	
		if(real_disctype && real_disctype != DEVICE_TYPE_PS3_BD && fake_disctype == 0 && is_psx(3))
		{
			fake_disctype = effective_disctype = DEVICE_TYPE_PS3_BD;
			emu_ps3_rec=1;
		}
}

LV2_PATCHED_FUNCTION(int, device_event, (event_port_t event_port, uint64_t event, uint64_t param, uint64_t device))
{
	int lock = !loop;
	#ifdef DEBUG
	DPRINTF("Storage event: %lx  %lx  %lx\n", event, param, device);
	#endif

	if (device == BDVD_DRIVE)
	{

		if (event == 3)
		{
			//DPRINTF("Disc Insert\n");
			if (lock)
				mutex_lock(mutex, 0);

			process_disc_insert(param>>32);
			param = (uint64_t)(effective_disctype)<<32;

			if (lock)
				mutex_unlock(mutex);
		}
		else if (event == 4)
		{
			if (lock)
				mutex_lock(mutex, 0);

			real_disctype = 0;
			effective_disctype = 0;
			fake_disctype = 0;

			if (lock)
				mutex_unlock(mutex);
		}
	}

	return event_port_send(event_port, event, param, device);
}

LV2_HOOKED_FUNCTION_COND_POSTCALL_2(int, emu_disc_auth, (uint64_t func, uint64_t param))
{

	if (func == 0x5007)
	{
		if (param == 0x43)
		{
			return 0;
		}

		if (emu_ps3_rec  && real_disctype != DEVICE_TYPE_PS3_BD)
		{
			static int inloop = 0;

			if (!inloop)
			{
				inloop = 1;
				call_hooked_function_2(emu_disc_auth, func, param); // Recursive!
				return 0; /* return 0 regardless of result */

			}
			else
			{
				inloop = 0;
			}
		}
	}

	return DO_POSTCALL;
}


void storage_ext_init(void)
{
	thread_t dispatch_thread;

	mutex_create(&mutex, SYNC_PRIORITY, SYNC_NOT_RECURSIVE);
	event_port_create(&command_port, EVENT_PORT_LOCAL);
	event_port_create(&result_port, EVENT_PORT_LOCAL);
	event_queue_create(&command_queue, SYNC_PRIORITY, 1, 1);
	event_queue_create(&result_queue, SYNC_PRIORITY, 1, 1);
	event_port_connect(command_port, command_queue);
	event_port_connect(result_port, result_queue);
}

void storage_ext_patches(void)
{
	patch_jump(device_event_port_send_call, device_event);
	hook_function_with_cond_postcall(get_syscall_address(864), emu_disc_auth, 2);
}


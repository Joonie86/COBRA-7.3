#ifndef __STORAGE_EXT_H__
#define __STORAGE_EXT_H__

#include <lv2/io.h>
#include <lv2/synchronization.h>

enum EMU_TYPE
{
	EMU_OFF = 0,
	EMU_PS3,
	EMU_PS2_DVD,
	EMU_PS2_CD,
	EMU_PSX,
	EMU_BD,
	EMU_DVD,
	EMU_MAX,
};

enum STORAGE_COMMAND
{
	CMD_READ_ISO,
	CMD_READ_DISC,	
	CMD_READ_CD_ISO_2352,
	CMD_FAKE_STORAGE_EVENT,
	CMD_GET_PSX_VIDEO_MODE
};

void storage_ext_init(void);
void storage_ext_patches(void);


#endif /* __STORAGE_EXT_H__ */


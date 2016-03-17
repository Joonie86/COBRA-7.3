#ifndef __SYSCALL8_H__
#define __SYSCALL8_H__

// Since version 7.0, any opcode added should be an odd number.
// Also, it should be kept under 0xA000
// If function is to be used to make a patched module call cobra payload,
// a number below 0x8000 is suggested, so that the patch can assign the opcode
// with a single instruction

#define SYSCALL8_OPCODE_DISABLE_COBRA				0x0000
#define SYSCALL8_OPCODE_ENABLE_COBRA				0x0001

#define SYSCALL8_DISABLE_COBRA_CAPABILITY			0x0002
#define SYSCALL8_DISABLE_COBRA_STATUS				0x0003
#define SYSCALL8_DISABLE_COBRA_OK			0x5555

#define SYSCALL8_OPCODE_GET_VERSION					0x7000
#define SYSCALL8_OPCODE_GET_VERSION2				0x7001

#define SYSCALL8_OPCODE_GET_DISC_TYPE				0x7020
#define SYSCALL8_OPCODE_READ_PS3_DISC				0x7021
#define SYSCALL8_OPCODE_FAKE_STORAGE_EVENT			0x7022
#define SYSCALL8_OPCODE_GET_EMU_STATE				0x7023
#define SYSCALL8_OPCODE_MOUNT_PS3_DISCFILE			0x7024
#define SYSCALL8_OPCODE_MOUNT_DVD_DISCFILE			0x7025
#define SYSCALL8_OPCODE_MOUNT_BD_DISCFILE			0x7026
#define SYSCALL8_OPCODE_MOUNT_PSX_DISCFILE			0x7027
#define SYSCALL8_OPCODE_MOUNT_PS2_DISCFILE			0x7028
#define SYSCALL8_OPCODE_MOUNT_DISCFILE_PROXY		0x6808
#define SYSCALL8_OPCODE_UMOUNT_DISCFILE				0x702C
#define SYSCALL8_OPCODE_MOUNT_ENCRYPTED_IMAGE		0x702D

#define SYSCALL8_OPCODE_GET_ACCESS					0x8097
#define SYSCALL8_OPCODE_REMOVE_ACCESS				0x8654

#define SYSCALL8_OPCODE_READ_COBRA_CONFIG			0x7050
#define SYSCALL8_OPCODE_WRITE_COBRA_CONFIG			0x7051

#define SYSCALL8_OPCODE_SET_PSP_UMDFILE				0x9003
#define SYSCALL8_OPCODE_SET_PSP_DECRYPT_OPTIONS		0x9002
#define SYSCALL8_OPCODE_READ_PSP_HEADER				0x1028
#define SYSCALL8_OPCODE_READ_PSP_UMD				0x1029
#define SYSCALL8_OPCODE_PSP_PRX_PATCH				0x204C
#define SYSCALL8_OPCODE_PSP_POST_SAVEDATA_INITSTART		0x3008
#define SYSCALL8_OPCODE_PSP_POST_SAVEDATA_SHUTDOWNSTART	0x3009
#define SYSCALL8_OPCODE_PSP_CHANGE_EMU					0x9752

#define SYSCALL8_OPCODE_COBRA_USB_COMMAND			0x7714

#define SYSCALL8_OPCODE_AIO_COPY_ROOT				0x6637
#define SYSCALL8_OPCODE_MAP_PATHS					0x7964

#define SYSCALL8_OPCODE_VSH_SPOOF_VERSION			0x2C0F

#define SYSCALL8_OPCODE_LOAD_VSH_PLUGIN				0x1EE7
#define SYSCALL8_OPCODE_UNLOAD_VSH_PLUGIN			0x364F

#define SYSCALL8_OPCODE_DRM_GET_DATA				0x6A11

#define SYSCALL8_OPCODE_SEND_POWEROFF_EVENT			0x6CDD

#ifdef DEBUG
// These debug opcode changed to odd numbers in version 7.0 to minmize crashes with lv1 peek apps
#define SYSCALL8_OPCODE_DUMP_STACK_TRACE			0x5003
#define SYSCALL8_OPCODE_GENERIC_DEBUG				0x5005
#define SYSCALL8_OPCODE_PSP_SONY_BUG				0x5007
#endif

#endif /* __SYSCALL8_H__ */


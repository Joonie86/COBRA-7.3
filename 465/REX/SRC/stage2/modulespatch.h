#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// BIG WARNING: self offsets need to add 0x10000 for address shown in IDA, but not sprxs!

#if defined(FIRMWARE_4_65) || defined(FIRMWARE_4_65DEX) // Ported by Joonie as of 12/05/2014 

#define VSH_DEX_HASH			0xa001d151002e4b14 //
#define VSH_CEX_HASH			0xa002421e002e07c1 // 4.66 Spoofed
//#define VSH_CEX_HASH			0xa002421e002e15e0 // 4.65 Original
#define BASIC_PLUGINS_HASH		0xb59880160001fec1 //
#define EXPLORE_PLUGIN_HASH		0xacf4af2b000ed047 //
#define EXPLORE_CATEGORY_GAME_HASH	0x9cb337a200056fad //  
#define BDP_DISC_CHECK_PLUGIN_HASH	0xb8b7a5f9000031a0 //
#define PS1_EMU_HASH			0x7a6cbdcf0009aa39 //
#define PS1_NETEMU_HASH			0x7a300d52000be207 //
#define GAME_EXT_PLUGIN_HASH		0xe274af7b0001e7c3 //
#define PSP_EMULATOR_HASH		0x7be641f500023794 //
#define EMULATOR_API_HASH		0xa9f5b37a0001bb3c //
//#define PEMUCORELIB_HASH		0xf349a563000c0d66 // 4.65 ORIGINAL
#define PEMUCORELIB_HASH		0xf349a563000c0d6c // Patched by Habib, Supports PGD Decryption
#define EMULATOR_DRM_HASH		0xa324dc4a00005399 //
#define EMULATOR_DRM_DATA_HASH		0x75c390860001b75f //
#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x57bbc3b800003212 //
#define LIBFS_EXTERNAL_HASH		0x5bc7bce800006477 //

/* vsh */ // REBUG REX 4.65.2 as of 12/5/2014

#define dex_vsh_text_size		0x6C0000 // /* memsz of first program header aligned to 0x10000 */
#define dex_ps2tonet_patch		0xCA170 //
#define dex_ps2tonet_size_patch	0xCA164 //
#define dex_game_update_offset		0x277E4C //
#define dex_psp_drm_patch1		0x2496AC //
#define dex_psp_drm_patch2		0x24A14C //
#define dex_psp_drm_patch3		0x249D88 //
#define dex_psp_drm_patch4		0x24A594 //
#define dex_psp_drm_patchA		0x2497C8 //
#define dex_psp_drm_patchB		0x240A68 //
#define dex_psp_drm_patchC		0x249200 //
#define dex_psp_drm_patchD		0x2497B0 //
#define dex_psp_drm_patchE		0x2497B4 //
#define dex_psp_drm_patchF		0x24A180 //
#define dex_vmode_patch_offset	0x44CA1C // 0x44C90C BAD // PSX Region patch

#define cex_vsh_text_size	                0x6B0000 // /* memsz of first program header aligned to 0x10000 */
//#define elf1_func1                      0x5EE660 // *** [Kakaroto's sig1 patch allowing iPF]
//#define elf1_func1_offset               0x00 //
//#define elf1_func2                      0x244BB8 // ***
//#define elf1_func2_offset               0x14 //
#define cex_game_update_offset          	0x270624 //***
#define cex_ps2tonet_patch          	0xC4C24 // "60638202 480000444BFF"
#define cex_ps2tonet_size_patch         0xC4C18 // "38A004F0786400203860000060638202"
#define cex_psp_drm_patch1           	0x241E84 // ***
#define cex_psp_drm_patch2          	0x242924 // ***
#define cex_psp_drm_patch3          	0x242560 // ***
#define cex_psp_drm_patch4          	0x242D6C // ***
#define cex_psp_drm_patchA          	0x241FA0 // ***
#define cex_psp_drm_patchB          	0x242840 // ***
#define cex_psp_drm_patchC          	0x2419D8 // ***
#define cex_psp_drm_patchD          	0x241F88 //***
#define cex_psp_drm_patchE          	0x241F8C //***
#define cex_psp_drm_patchF          	0x242958 //***
#define cex_vmode_patch_offset          	0x444E28 // or 444D18 BAD "

/* Spoof is not needed due to REX's static spoof */
//#define revision_offset          	0x65CE70 // 
//#define revision_offset2          	0x6FEE98 // /* In data section */
//#define spoof_version_patch          	0xB8E28 // 
//#define psn_spoof_version_patch         0x1A39E0 //

/* basic_plugins */// 
//#define ps1emu_type_check_offset	0x1F638 // CEX
//#define pspemu_path_offset		0x4A810 // CEX
//#define psptrans_path_offset		0x4B440 // CEX
#define ps1emu_type_check_offset	0x200E0 // DEX
#define pspemu_path_offset		0x4B9F0 // DEX
#define psptrans_path_offset		0x4C568 // DEX

/* explore_plugin *///
//#define app_home_offset			0x251040 // CEX
//#define ps2_nonbw_offset		0xDD978 // CEX
#define app_home_offset			0x251BF0 // DEX // 
#define ps2_nonbw_offset       0xDDD88 // DEX

/* explore_category_game *///DONE
//#define ps2_nonbw_offset2		0x68354 // CEX
#define ps2_nonbw_offset2		0x68294 // DEX

/* bdp_disccheck_plugin */ // 
#define dvd_video_region_check_offset	0x152C //

/* ps1_emu */ //
#define ps1_emu_get_region_offset	0x3E74 //

/* ps1_netemu */ //
#define ps1_netemu_get_region_offset	0xA440C //

/* game_ext_plugin */// 
//#define sfo_check_offset		 0x23F30 // CEX
//#define ps2_nonbw_offset3		 0x17004 // CEX
//#define ps_region_error_offset 0x68C4 // CEX
#define sfo_check_offset		0x2414C // DEX
#define ps2_nonbw_offset3		0x172F4 // DEX
#define ps_region_error_offset		0x6880 // DEX

/* psp_emulator */ //DONE
#define psp_set_psp_mode_offset		0x1C18 //

/* emulator_api */ //DONE
#define psp_read			0x102D8 //
#define psp_read_header			0x1125C //
#define psp_drm_patch5			0x11080 //
#define psp_drm_patch6			0x110B0 //
#define psp_drm_patch7			0x110C8 //
#define psp_drm_patch8			0x110CC //
#define psp_drm_patch9			0x1120C //
#define psp_drm_patch11			0x11210 //
#define psp_drm_patch12			0x11220 //
#define psp_product_id_patch1		0x11320 //
#define psp_product_id_patch3		0x115F8 //
#define umd_mutex_offset		(0x64480+0x38C) //FIXED!!

/* pemucorelib */ // DONE
#define psp_eboot_dec_patch		0x5E6BC //
#define psp_prx_patch			0x577D8 //
#define psp_savedata_bind_patch1	0x7A4BC //
#define psp_savedata_bind_patch2	0x7A514  //
#define psp_savedata_bind_patch3	0x7A030 //
#define psp_extra_savedata_patch	0x87540 // *4.55 = 0x8753C // 
#define psp_prometheus_patch		0x12EA28 //
#define prx_patch_call_lr		0x5892C //

/* emulator_drm */ //DONE
#define psp_drm_tag_overwrite		0x4C68 //
#define psp_drm_key_overwrite		(0x27600-0xBE80) //

/* libsysutil_savedata_psp */ 
#define psp_savedata_patch1		0x46CC
#define psp_savedata_patch2		0x46A4
#define psp_savedata_patch3		0x4504
#define psp_savedata_patch4		0x453C
#define psp_savedata_patch5		0x4550
#define psp_savedata_patch6		0x46B8

/* libfs (external */ // The same as 4.55
#define aio_copy_root_offset		0xD658 //

#endif /* FIRMWARE */


typedef struct
{
	uint32_t offset;
	uint32_t data;
	uint8_t *condition;
} SprxPatch;

extern uint8_t condition_ps2softemu;
extern uint8_t condition_apphome;
extern uint8_t condition_psp_iso;
extern uint8_t condition_psp_dec;
extern uint8_t condition_psp_keys;
extern uint8_t condition_psp_change_emu;
extern uint8_t condition_psp_prometheus;
//extern uint8_t psx_type;
//extern uint8_t psx_type_orig;
extern uint64_t vsh_check;

//extern uint8_t block_peek;

extern process_t vsh_process;
extern uint8_t safe_mode;

/* Functions for kernel */
void modules_patch_init(void);
//void do_spoof_patches(void);  Spoof is not needed due to REX's static spoof 
void load_boot_plugins(void);
int prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int prx_unload_vsh_plugin(unsigned int slot);

/* Syscalls */
//int sys_vsh_spoof_version(char *version_str);  //Spoof is not needed due to REX's static spoof 
int sys_prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int sys_prx_unload_vsh_plugin(unsigned int slot);
int sys_thread_create_ex(sys_ppu_thread_t *thread, void *entry, uint64_t arg, int prio, uint64_t stacksize, uint64_t flags, const char *threadname);

// PS3Mapi v1.2.1
int ps3mapi_unload_vsh_plugin(char* name); 
void unhook_all_modules(void);
int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename);

#endif /* __MODULESPATCH_H__ */


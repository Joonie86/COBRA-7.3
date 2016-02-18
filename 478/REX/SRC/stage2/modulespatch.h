#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// BIG WARNING: self offsets need to add 0x10000 for address shown in IDA, but not sprxs!

#if defined(FIRMWARE_4_78) || defined(FIRMWARE_4_78DEX) // Ported by Joonie as of 1/24/2016 

#define VSH_DEX_HASH			0xa03fb615002e3eb1 //
#define VSH_CEX_HASH			0xa002dc02002e26db // Jooni3's ,
#define BDP_DISC_CHECK_PLUGIN_HASH	0xb8b7a5f9000031a0 // same as 4.66
#define BASIC_PLUGINS_HASH		0xb5988dba00020162 //
#define EXPLORE_PLUGIN_HASH		0xacf4af2b000eccfd //
#define EXPLORE_CATEGORY_GAME_HASH	0x9cb3396e00056ce1 //  same as 4.70
#define PS1_EMU_HASH			0x7a6cbdbf0009aa43 //
#define PS1_NETEMU_HASH 		0x7a300d52000be288 // same as 4.75
#define GAME_EXT_PLUGIN_HASH		0xe274af7b0001e6e8 //
#define PSP_EMULATOR_HASH		0x7be641f500023793 // same as 4.76
#define PEMUCORELIB_HASH		0xf349a563000c0d66 // same as 4.75
#define EMULATOR_API_HASH		0xa9f5b37a0001bb45 // same as 4.75
#define EMULATOR_DRM_HASH		0xa324dc4a00005399 // same as 4.66
#define EMULATOR_DRM_DATA_HASH		0x75c390860001b75f // same as 4.66
#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x57bbc3b800003212 // same as 4.66
#define LIBFS_EXTERNAL_HASH		0x5bc7bce800006477 // same as 4.66


/* vsh */ // REBUG REX 4.78.1 as of 1/24/2016

#define dex_vsh_text_size		0x6C0000 // /* memsz of first program header aligned to 0x10000 */
#define elf1_func1 			0x5F2D30 // NPDRM fself fix / Disabling PL3 patches in vsh
#define elf1_func1_offset 		0x00 //
#define elf1_func2 			0x24D430 // NPDRM fself fix / Disabling PL3 patches in vsh
#define elf1_func2_offset 		0x14 //*/
#define dex_ps2tonet_patch		0xCA060 // 
#define dex_ps2tonet_size_patch	        0xCA054 // 
#define dex_psp_drm_patch1		0x24A49C // 0x249FA4 (4.76) 
#define dex_psp_drm_patch2		0x24AF3C // 0x24AA44 (4.76) 
#define dex_psp_drm_patch3		0x24AB78 // 0x24A680 (4.76)
#define dex_psp_drm_patch4		0x24B384 // 0x24AE8C (4.76) 
#define dex_psp_drm_patchA		0x24A5B8 // 0x24A0C0 (4.76) 
#define dex_psp_drm_patchB		0x24AE58 // Fixed, thanks to Rancid-o :) 
#define dex_psp_drm_patchC		0x249FF0 // 0x249AF8 (4.76) 
#define dex_psp_drm_patchD		0x24A5A0 // 0x24A0A8 (4.76)   
#define dex_psp_drm_patchE		0x24A5A4 // 0x24A0AC (4.76)  
#define dex_psp_drm_patchF		0x24AF70 // 0x24AA78 (4.76)  
#define dex_vmode_patch_offset	        0x44AA50 // 0x44D7E0 (4.76) // PSX Region patch
//#define dex_enable_dlna_patch   0xC0368 // Enable DLNA on DEBUG VSH
//#define dex_game_update_offset		0x2790E0 // 0x278BE8  *4.76) // 

/* vsh */ // REBUG LITE 4.78.1 as of 1/20/2016

// 4.78 CEX's Offsets
#define cex_vsh_text_size		0x6B0000 // /* memsz of first program header aligned to 0x10000 */
#define cex_ps2tonet_patch		0xC4B14 // 4.66CEX =0xC4C24 // "60638202 480000444BFF"
#define cex_ps2tonet_size_patch 	0xC4B08 // 4.66CEX = 0xC4C18 // "38A004F0786400203860000060638202"
#define cex_psp_drm_patch1		0x242C74 // 0x24277C // 
#define cex_psp_drm_patch2		0x243714 // 0x24321C // 
#define cex_psp_drm_patch3		0x243350 // 0x242E58 // 
#define cex_psp_drm_patch4		0x243B5C // 0x243664 // 
#define cex_psp_drm_patchA		0x242D90 // 0x242898 // 
#define cex_psp_drm_patchB		0x243630 // 0x243138 // 
#define cex_psp_drm_patchC		0x2427C8 // 0x2422D0 // 
#define cex_psp_drm_patchD		0x242D78 // 0x242880 //
#define cex_psp_drm_patchE		0x242D7C // 0x242884 //
#define cex_psp_drm_patchF		0x243748 // 0x243250 // 
#define cex_vmode_patch_offset		0x442E5C //0x445BEC // 

/* Spoof is not needed due to REX's static spoof */
//#define revision_offset          	0x65CE70 // 
//#define revision_offset2          	0x6FEE98 // /* In data section */
//#define spoof_version_patch          	0xB8E28 // 
//#define psn_spoof_version_patch         0x1A39E0 //

/* basic_plugins */// 
#define ps1emu_type_check_offset	0x20234 // Same as 4.70 //DEX Disabled by default
#define pspemu_path_offset		0x4BBC8 //  DEX *Search /dev_bdvd/PS3_GM01"
#define psptrans_path_offset		0x4C830 //  DEX *Search /dev_flash/pspemu/psp_translator.self"


/* explore_plugin */// 4.78 DEX
#define app_home_offset		0x2514B0 //*aApp_homePs3_ga:.string "/app_home/PS3_GAME"* 
#define ps2_nonbw_offset       0xDDDC4 //*aStoragemedi_25@h # "StorageMedia:StorageMedia.hybrid"*

/* explore_category_game */// 4.75 DEX
#define ps2_nonbw_offset2		0x68264 // 0x68294 // DEX lis       *r4, aStoragemedia_4@ha # "StorageMedia:StorageMedia.hybrid"*

/* bdp_disccheck_plugin */ //  the same as 4.46
#define dvd_video_region_check_offset	0x152C // 
//#define dvd_video_region_check1_offset  0x1500 //
//#define dvd_F44_panic_offset 0xF44 //

/* ps1_emu */ // same as 4.66
#define ps1_emu_get_region_offset	0x3E74 // 

/* ps1_netemu */ // same as 4.66
#define ps1_netemu_get_region_offset	0xA440C // 

/* game_ext_plugin */// 
#define sfo_check_offset		0x240EC // 0x2414C // DEX *lis       r3, aPage_game_ma_1@ha # "page_game_main"*
#define ps2_nonbw_offset3		0x172F4 // DEX Same as 4.66 *rlwinm    r0, r0, 0,26,26*
#define ps_region_error_offset		0x6880 // DEX  Same as 4.66
/* Disable the check for the current video setting */
//#define ps_video_error_offset		0x31A50 // li %r3, 0 // experimental, disabled due to its issue with remote play 


/* psp_emulator */ //  4.75 CEX 
#define psp_set_psp_mode_offset 	0x1C18 // the same as 4.70

/* emulator_api */ // the same as 4.66 - 4.75
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
#define umd_mutex_offset		(0x64480+0x38C) //

/* pemucorelib */ // same as 4.66
#define psp_eboot_dec_patch		0x5E6BC // same
#define psp_prx_patch			0x577D8 //
#define psp_savedata_bind_patch1	0x7A4BC //
#define psp_savedata_bind_patch2	0x7A514  //
#define psp_savedata_bind_patch3	0x7A030 //
#define psp_extra_savedata_patch	0x87540 // *4.55 = 0x8753C // 
#define psp_prometheus_patch		0x12EA28 //
#define prx_patch_call_lr		0x5892C //

/* emulator_drm */ // same as 4.66 - 4.75
#define psp_drm_tag_overwrite		0x4C68 //
#define psp_drm_key_overwrite		(0x27600-0xBE80) //

/* libsysutil_savedata_psp */ //same as 4.66 - 4.75
#define psp_savedata_patch1		0x46CC
#define psp_savedata_patch2		0x46A4
#define psp_savedata_patch3		0x4504
#define psp_savedata_patch4		0x453C
#define psp_savedata_patch5		0x4550
#define psp_savedata_patch6		0x46B8

/* libfs (external */ // The same as 4.55 - 4.75
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
extern uint64_t vsh_check;
//extern uint8_t condition_game_ext_psx;

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


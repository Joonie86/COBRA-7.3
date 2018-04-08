#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// BIG WARNING: self offsets need to add 0x10000 for address shown in IDA, but not sprxs!

#if defined(FIRMWARE_4_82DEH)  // Ported by Joonie as of 4/7/2018 

#define VSH_DECR_HASH			0xb6b6d000002e8000 // Jooni3's ,
#define VSH_DEX_HASH			0xb6b6d000002e6000 // REX 4.82
#define BDP_DISC_CHECK_PLUGIN_HASH	0xb8b7a5f9000031a0 // same as 4.66
#define EXPLORE_PLUGIN_HASH		0xacf4af2b000ecc8a //
#define EXPLORE_CATEGORY_GAME_HASH	0x9cb3396e00056ce9 //  
#define PS1_EMU_HASH			0x7a6cb5c70009affa //
#define PS1_NETEMU_HASH 		0x7a304962000be883 //
#define GAME_EXT_PLUGIN_HASH		0xe274af7b0001e5db //
#define PSP_EMULATOR_HASH		0x7be641f500023793 // same as 4.76
#define PEMUCORELIB_HASH		0xf349a563000c0d6c // 
#define EMULATOR_API_HASH		0xa9f5b37a0001bb45 // same as 4.75
#define EMULATOR_DRM_HASH		0xa324dc4a00005399 // same as 4.66
#define EMULATOR_DRM_DATA_HASH		0x75c390860001b75f // same as 4.66
#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x57bbc3b800003212 // same as 4.66
#define LIBFS_EXTERNAL_HASH		0x5bc7bce800006477 // same as 4.66


// 4.82 DEH's Offsets


#define decr_vsh_text_size		0x6C0000 //  memsz of first program header aligned to 0x10000 
#define decr_ps2tonet_patch		0xC9898 // "6063820248000044 4BFED1A538A00040"
#define decr_ps2tonet_size_patch 	0xC988C // "38A004F0786400203860000060638202"
#define decr_psp_drm_patch1		0x24CE60
#define decr_psp_drm_patch2		0x24D900 // 
#define decr_psp_drm_patch3		0x24D53C // 
#define decr_psp_drm_patch4		0x24DD48 //
#define decr_psp_drm_patchA		0x24CF7C //
#define decr_psp_drm_patchB		0x24D81C //
#define decr_psp_drm_patchC		0x24C9B4 //
#define decr_psp_drm_patchD		0x24CF64 //
#define decr_psp_drm_patchE		0x24CF68 //
#define decr_psp_drm_patchF		0x24D934 //
#define decr_vmode_patch_offset		0x44D448 //

#define dex_vsh_text_size		0x6C0000 // /* memsz of first program header aligned to 0x10000 */
#define dex_ps2tonet_patch		0xCA380 // 
#define dex_ps2tonet_size_patch         0xCA374 // 
#define dex_psp_drm_patch1		0x24A7E8 //  
#define dex_psp_drm_patch2		0x24B288 //  
#define dex_psp_drm_patch3		0x24AEC4 //  
#define dex_psp_drm_patch4		0x24B6D0 //  
#define dex_psp_drm_patchA		0x24A904 //  
#define dex_psp_drm_patchB		0x24B1A4 //  
#define dex_psp_drm_patchC		0x24A33C //  
#define dex_psp_drm_patchD		0x24A8EC //    
#define dex_psp_drm_patchE		0x24A8F0 //    
#define dex_psp_drm_patchF		0x24B2BC //   
#define dex_vmode_patch_offset	        0x44ADD0 //  PSX Video Mode patch

/* explore_plugin */// 4.82 DEX
#define app_home_offset		0x2514C0 //*aApp_homePs3_ga:.string "/app_home/PS3_GAME"* 
#define ps2_nonbw_offset       0xDDDC4 //*aStoragemedi_25@h # "StorageMedia:StorageMedia.hybrid"*

/* explore_category_game */// 4.78 - 4.82 DEX
#define ps2_nonbw_offset2		0x68264 // 0x68294 // DEX lis       *r4, aStoragemedia_4@ha # "StorageMedia:StorageMedia.hybrid"*

/* bdp_disccheck_plugin */ //  the same as 4.46
#define dvd_video_region_check_offset	0x152C // 

/* ps1_emu */ // same as 4.66
#define ps1_emu_get_region_offset	0x3E74 // 

/* ps1_netemu */ // same as 4.66
#define ps1_netemu_get_region_offset	0xA440C // 

/* game_ext_plugin */// 4.82 DEX
#define sfo_check_offset		0x23DAC // DEX *lis       r3, aPage_game_ma_1@ha # "page_game_main"*
#define ps2_nonbw_offset3		0x172F0 // DEX *rlwinm    r0, r0, 0,26,26*
#define ps_region_error_offset		0x687C // DEX 
/* Disable the check for the current video setting */
//#define ps_video_error_offset		0x3171C // li %r3, 0  disabled due to its issue with remote play on vita


/* psp_emulator */ //  4.81 CEX 
#define psp_set_psp_mode_offset 	0x1C18 // the same as 4.70

/* emulator_api */ // the same as 4.66 - 4.81
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

/* pemucorelib */ // 4.66-4.82 CEX
#define psp_eboot_dec_patch		0x5E6BC // same
#define psp_prx_patch			0x577D8 //
#define psp_savedata_bind_patch1	0x7A4BC //
#define psp_savedata_bind_patch2	0x7A514  //
#define psp_savedata_bind_patch3	0x7A030 //
#define psp_extra_savedata_patch	0x87540 // *4.55 = 0x8753C // 
#define psp_prometheus_patch		0x12EA28 //
#define prx_patch_call_lr		0x5892C //

/* emulator_drm */ // same as 4.66 - 4.82 CEX
#define psp_drm_tag_overwrite		0x4C68 //
#define psp_drm_key_overwrite		(0x27600-0xBE80) //

/* libsysutil_savedata_psp */ //same as 4.66 - 4.82 
#define psp_savedata_patch1		0x46CC
#define psp_savedata_patch2		0x46A4
#define psp_savedata_patch3		0x4504
#define psp_savedata_patch4		0x453C
#define psp_savedata_patch5		0x4550
#define psp_savedata_patch6		0x46B8

/* libfs (external */ // The same as 4.55 - 4.82
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
void load_boot_plugins(void);
int prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int prx_unload_vsh_plugin(unsigned int slot);

/* Syscalls */
int sys_prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int sys_prx_unload_vsh_plugin(unsigned int slot);
int sys_thread_create_ex(sys_ppu_thread_t *thread, void *entry, uint64_t arg, int prio, uint64_t stacksize, uint64_t flags, const char *threadname);

// PS3Mapi v1.2.1
int ps3mapi_unload_vsh_plugin(char* name); 
void unhook_all_modules(void);
int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename);

#endif /* __MODULESPATCH_H__ */

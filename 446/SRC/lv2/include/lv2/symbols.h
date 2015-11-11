/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__

#if defined(FIRMWARE_3_41)

#define TOC						0x33E720

#define create_kernel_object_symbol			0x10790
#define destroy_kernel_object_symbol			0x100F4
#define destroy_shared_kernel_object_symbol		0xFA68
#define open_kernel_object_symbol			0x10DE0 
#define open_shared_kernel_object_symbol		0x10BF0
#define close_kernel_object_handle_symbol		0x10210

#define alloc_symbol					0x62088
#define dealloc_symbol					0x624C8
#define copy_to_user_symbol				0xE050
#define copy_from_user_symbol				0xE26C
#define copy_to_process_symbol				0xE108
#define copy_from_process_symbol			0xDF18
#define page_allocate_symbol				0x5DBDC
#define page_free_symbol				0x5D640
#define page_export_to_proc_symbol			0x5DD78
#define kernel_ea_to_lpar_addr_symbol			0x6D8DC

#define memcpy_symbol					0x7C01C
#define memset_symbol					0x4D144
#define memcmp_symbol					0x4C454
#define memchr_symbol					0x4C404
#define printf_symbol					0x28A654
#define printfnull_symbol				0x28F050
#define sprintf_symbol					0x4E56C
#define snprintf_symbol					0x4E4D8
#define strcpy_symbol					0x4D2F0
#define strncpy_symbol					0x4D3B8
#define strlen_symbol					0x4D318
#define strcat_symbol					0x4D220
#define strcmp_symbol					0x4D29C
#define strncmp_symbol					0x4D344
#define strchr_symbol					0x4D258
#define strrchr_symbol					0x4D428

#define spin_lock_irqsave_ex_symbol			0x288738
#define spin_unlock_irqrestore_ex_symbol		0x28870C

#define ppu_thread_create_symbol			0x126A8
#define ppu_thread_exit_symbol				0x12760
#define ppu_thread_join_symbol				0x127B4
#define ppu_thread_delay_symbol				0x26B9C

#define mutex_create_symbol				0x11E1C
#define mutex_destroy_symbol				0x11DB4
#define mutex_lock_symbol				0x11DAC
#define mutex_lock_ex_symbol				0x1BF2C
#define mutex_trylock_symbol				0x11DA8
#define mutex_unlock_symbol				0x11DA4

#define cond_create_symbol				0x11F88
#define cond_destroy_symbol				0x11F38
#define cond_wait_symbol				0x11F30
#define cond_wait_ex_symbol				0x1D518
#define cond_signal_symbol				0x11F0C
#define cond_signal_all_symbol				0x11EE8

#define semaphore_initialize_symbol			0x2EFC4
#define semaphore_wait_ex_symbol			0x2ECD0
#define semaphore_trywait_symbol			0x2E8B4
#define semaphore_post_ex_symbol			0x2EA00

#define event_port_create_symbol			0x11858	
#define event_port_destroy_symbol			0x11CC0
#define event_port_connect_symbol			0x11D38
#define event_port_disconnect_symbol			0x11C64
#define event_port_send_symbol				0x11850
#define event_port_send_ex_symbol			0x295FC

#define event_queue_create_symbol			0x11B60
#define event_queue_destroy_symbol			0x11AE8
#define event_queue_receive_symbol			0x1192C
#define event_queue_tryreceive_symbol			0x119F8

#define cellFsOpen_symbol				0x2AB290
#define cellFsClose_symbol				0x2AB0F8
#define cellFsRead_symbol				0x2AB234
#define cellFsWrite_symbol				0x2AB1A0
#define cellFsLseek_symbol				0x2AA9F4
#define cellFsStat_symbol				0x2AAAAC
#define cellFsUtime_symbol				0x2ACBF4
#define cellFsUnlink_internal_symbol			0x1AF648
#define cellFsUtilMount_symbol				0x2AA810
#define cellFsUtilUmount_symbol				0x2AA7E4
#define cellFsUtilNewfs_symbol				0x2ABD7C

#define pathdup_from_user_symbol			0x1b3b3c
#define	open_path_symbol				0x2aafc8
#define open_fs_object_symbol				0x198B6C
#define close_fs_object_symbol				0x197D54		

#define storage_get_device_info_symbol			0x293A18
#define storage_get_device_config_symbol		0x2936E8
#define storage_open_symbol				0x292F3C
#define storage_close_symbol				0x2934D8
#define storage_read_symbol				0x29245C
#define storage_write_symbol				0x29232C
#define storage_send_device_command_symbol		0x292598
#define storage_map_io_memory_symbol			0x2938D4
#define storage_unmap_io_memory_symbol			0x2937A0
#define new_medium_listener_object_symbol		0x9497C
#define delete_medium_listener_object_symbol		0x961B4
#define set_medium_event_callbacks_symbol		0x96518

#define cellUsbdRegisterLdd_symbol			0xd22d8
#define cellUsbdUnregisterLdd_symbol			0xd22c8
#define cellUsbdScanStaticDescriptor_symbol		0xd2998
#define cellUsbdOpenPipe_symbol				0xd29c4
#define cellUsbdClosePipe_symbol			0xd29b4
#define cellUsbdControlTransfer_symbol			0xd292c
#define cellUsbdBulkTransfer_symbol			0xD28D8

#define decrypt_func_symbol				0x4e81c

#define extend_kstack_symbol				0x6D834

#define get_pseudo_random_number_symbol			0x272C24

#define syscall_table_symbol				0x2EB128
#define syscall_call_offset				0x28FB34

#define read_bdvd0_symbol				0x1C00EC
#define read_bdvd1_symbol				0x1C26EC
#define read_bdvd2_symbol				0x1CF8A8

#define storage_internal_get_device_object_symbol	0x291DE4

/* Calls, jumps */
#define device_event_port_send_call			0x29BD48

#define ss_pid_call_1					0x25EC18	

#define read_module_header_call				0x7CAC0
#define read_module_body_call				0x5354

/* Rtoc entries */

#define io_rtoc_entry_1					0x540
#define io_sub_rtoc_entry_1				-0x7ee0

#define decrypt_rtoc_entry_1 				0xf08
#define decrypt_rtoc_entry_2 				-0x6a00

#define storage_rtoc_entry_1				0x1c88

#define device_event_rtoc_entry_1			0x1EF8

#define time_rtoc_entry_1				-0x76F0
#define time_rtoc_entry_2				-0x76F8

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset		0x3ba890
#define patch_func1			0x0490AC
#define patch_func1_offset 		0x34
#define patch_func2 			0x04F07C
#define patch_func2_offset 		0x2C
#define patch_func4 			0x04ed18
#define patch_func4_offset 		0x0
#define patch_func5 			0x0505d0
#define patch_func5_offset 		0x0
#define patch_func6 			0x0234d0
#define patch_func6_offset		0x0
#define patch_func7 			0x0e83d4
#define patch_func7_offset 		0x0
#define patch_func8 			0x057214 //lv2open update patch
#define patch_func8_offset1 		0xA4 //lv2open update patch
#define patch_func8_offset2 		0x208 //lv2open update patch
#define patch_func9 			0x4F840 // must upgrade error
#define patch_func9_offset 		0x3EC
#define mem_base2			0x050b3c

#elif defined(FIRMWARE_3_55)

#define TOC						0x330540

#define create_kernel_object_symbol			0x11DE4
#define destroy_kernel_object_symbol			0x11748
#define destroy_shared_kernel_object_symbol		0x110BC
#define open_kernel_object_symbol			0x12434
#define open_shared_kernel_object_symbol		0x12244
#define close_kernel_object_handle_symbol		0x11864

#define alloc_symbol					0x60B78	
#define dealloc_symbol					0x60FB4
#define copy_to_user_symbol				0xF6A4
#define copy_from_user_symbol				0xF8C0
#define copy_to_process_symbol				0xF75C
#define copy_from_process_symbol			0xF56C
#define page_allocate_symbol				0x5C6E8
#define page_free_symbol				0x5C14C
#define page_export_to_proc_symbol			0x5C884
#define page_unexport_from_proc_symbol			0x5C040
#define kernel_ea_to_lpar_addr_symbol			0x6C3E0
#define process_ea_to_lpar_addr_ex_symbol		0x739F4
#define set_pte_symbol					0x5A6E4
#define panic_symbol					0x290770

#define memcpy_symbol					0x7C3A4
#define memset_symbol					0x4E4D8
#define memcmp_symbol					0x4D7E8
#define memchr_symbol					0x4D798
#define printf_symbol					0x29285C
#define printfnull_symbol				0x2972CC
#define sprintf_symbol					0x4F900
#define snprintf_symbol					0x4F86C
#define strcpy_symbol					0x4E684
#define strncpy_symbol					0x4E74C
#define strlen_symbol					0x4E6AC
#define strcat_symbol					0x4E5B4
#define strcmp_symbol					0x4E630
#define strncmp_symbol					0x4E6D8
#define strchr_symbol					0x4E5EC
#define strrchr_symbol					0x4E7BC

#define spin_lock_irqsave_ex_symbol			0x290940
#define spin_unlock_irqrestore_ex_symbol		0x290914

#define create_process_common_symbol			0x28E7E8
#define create_process_base_symbol			0x28DEA4
#define load_process_symbol				0x43BC
#define process_kill_symbol				0x28E5F4

#define ppu_thread_create_symbol			0x13CFC
#define ppu_thread_exit_symbol				0x13DB4
#define ppu_thread_join_symbol				0x13E08
#define ppu_thread_delay_symbol				0x28518
#define create_kernel_thread_symbol			0x24864
#define create_user_thread_symbol			0x24FA0
#define create_user_thread2_symbol			0x24DC4
#define start_thread_symbol				0x23A90
#define run_thread_symbol				0x232C0 /* temp name */
#define register_thread_symbol				0x28AC00
#define allocate_user_stack_symbol			0x28B3E8
#define deallocate_user_stack_symbol			0x28B350

#define mutex_create_symbol				0x13470
#define mutex_destroy_symbol				0x13408
#define mutex_lock_symbol				0x13400
#define mutex_lock_ex_symbol				0x1D8A0
#define mutex_trylock_symbol				0x133FC
#define mutex_unlock_symbol				0x133F8

#define cond_create_symbol				0x135DC
#define cond_destroy_symbol				0x1358C
#define cond_wait_symbol				0x13584
#define cond_wait_ex_symbol				0x1EE8C
#define cond_signal_symbol				0x13560
#define cond_signal_all_symbol				0x1353C

#define semaphore_initialize_symbol			0x30940
#define semaphore_wait_ex_symbol			0x30648
#define semaphore_trywait_symbol			0x30230
#define semaphore_post_ex_symbol			0x3037C

#define event_port_create_symbol			0x12EAC
#define event_port_destroy_symbol			0x13314
#define event_port_connect_symbol			0x1338C
#define event_port_disconnect_symbol			0x132B8
#define event_port_send_symbol				0x12EA4
#define event_port_send_ex_symbol			0x2AF78

#define event_queue_create_symbol			0x131B4
#define event_queue_destroy_symbol			0x1313C
#define event_queue_receive_symbol			0x12F80
#define event_queue_tryreceive_symbol			0x1304C

#define cellFsOpen_symbol				0x2B353C
#define cellFsClose_symbol				0x2B33A4
#define cellFsRead_symbol				0x2B34E0
#define cellFsWrite_symbol				0x2B344C
#define cellFsLseek_symbol				0x2B2CA0
#define cellFsStat_symbol				0x2B2D58
#define cellFsUtime_symbol				0x2B4C7C
#define cellFsUnlink_internal_symbol			0x189774

#define cellFsUtilMount_symbol				0x2B2ABC
#define cellFsUtilUmount_symbol				0x2B2A90
#define cellFsUtilNewfs_symbol				0x2B4028

#define pathdup_from_user_symbol			0x18DC68
#define	open_path_symbol				0x2B3274
#define open_fs_object_symbol				0x172C50
#define close_fs_object_symbol				0x171E38

#define storage_get_device_info_symbol			0x29BC9C
#define storage_get_device_config_symbol		0x29B96C
#define storage_open_symbol				0x29B1C0
#define storage_close_symbol				0x29B75C
#define storage_read_symbol				0x29A6D8
#define storage_write_symbol				0x29A5A8
#define storage_send_device_command_symbol		0x29A814
#define storage_map_io_memory_symbol			0x29BB58
#define storage_unmap_io_memory_symbol			0x29BA24
#define new_medium_listener_object_symbol		0x94CB0
#define delete_medium_listener_object_symbol		0x964E8
#define set_medium_event_callbacks_symbol		0x9684C

#define cellUsbdRegisterLdd_symbol			0x2835E8
#define cellUsbdUnregisterLdd_symbol			0x283598
#define cellUsbdScanStaticDescriptor_symbol		0x2846D0
#define cellUsbdOpenPipe_symbol				0x284780
#define cellUsbdClosePipe_symbol			0x284730
#define cellUsbdControlTransfer_symbol			0x284634
#define cellUsbdBulkTransfer_symbol			0x2845B4

#define decrypt_func_symbol				0x1C34C
#define lv1_call_99_wrapper_symbol			0x323C
#define modules_verification_symbol			0x79D80
#define authenticate_program_segment_symbol		0x7AFB4

#define prx_load_module_symbol				0x86404
#define prx_start_module_symbol				0x85140
#define prx_stop_module_symbol				0x864A8
#define prx_unload_module_symbol			0x84E74
#define prx_get_module_info_symbol			0x848FC
#define prx_get_module_id_by_address_symbol		0x8480C
#define prx_get_module_id_by_name_symbol		0x8485C
#define prx_get_module_list_symbol			0x8497C
#define load_module_by_fd_symbol			0x85AA4
#define parse_sprx_symbol				0x83868
#define open_prx_object_symbol				0x7CF54
#define close_prx_object_symbol				0x7D864
#define lock_prx_mutex_symbol				0x847B4
#define unlock_prx_mutex_symbol				0x847C0

#define extend_kstack_symbol				0x6C338

#define get_pseudo_random_number_symbol			0x24CD94
#define md5_reset_symbol				0x161800
#define md5_update_symbol				0x1622A0
#define md5_final_symbol				0x162420
#define ss_get_open_psid_symbol				0x24F15C
#define update_mgr_read_eeprom_symbol			0x249170
#define update_mgr_write_eeprom_symbol			0x2490B8

#define ss_params_get_update_status_symbol		0x50DB4		

#define syscall_table_symbol				0x346570
#define syscall_call_offset				0x297DB0

#define read_bdvd0_symbol				0x19A218
#define read_bdvd1_symbol				0x19C818
#define read_bdvd2_symbol				0x1A99C0

#define storage_internal_get_device_object_symbol	0x29A060

/* Calls, jumps */
#define device_event_port_send_call			0x2A3FCC

#define ss_pid_call_1					0x238D00	

#define read_module_header_call				0x7CE48
#define read_module_body_call				0x59CC
#define load_module_by_fd_call1				0x862A0

#define shutdown_copy_params_call			0x9940

#define fsloop_open_call				0x2B36D4
#define fsloop_close_call				0x2B3724
#define fsloop_read_call				0x2B3764

/* Patches */
#define shutdown_patch_offset				0x992C
#define module_sdk_version_patch_offset			0x28A430
#define module_add_parameter_to_parse_sprxpatch_offset	0x85B7C		

#define user_thread_prio_patch				0x20140
#define user_thread_prio_patch2				0x2014C

/* Rtoc entries */

#define io_rtoc_entry_1					-0x1d8
#define io_sub_rtoc_entry_1				-0x7ee0

#define decrypt_rtoc_entry_2 				-0x5B80
#define decrypter_data_entry				-0x7F50

#define storage_rtoc_entry_1				0x1DC0

#define device_event_rtoc_entry_1			0x2030

#define time_rtoc_entry_1				-0x75D8
#define time_rtoc_entry_2				-0x75E0

#define thread_rtoc_entry_1				-0x7658

#define process_rtoc_entry_1				-0x77C0

/* Permissions */
#define permissions_func_symbol				0xE7F0 /* before it was patch_func5+patch_func5_offset */
#define permissions_exception1 				0x24E44 /* before it was patch_func6+patch6_func6_offset */
#define permissions_exception2				0xC1DD0	/* before it was patch_func7+patch7_func7_offset */	
#define permissions_exception3				0x20214 /* Added in v 3.0 */

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset		0x3c2f00 
#define patch_func2 			0x7A7C4
#define patch_func2_offset 		0x2C
#define patch_func8 			0x55D20 //lv2open update patch
#define patch_func8_offset1 		0xA4 //lv2open update patch
#define patch_func8_offset2 		0x208 //lv2open update patch
#define patch_func9 			0x7AB90 // must upgrade error
#define patch_func9_offset 		0x3EC
#define mem_base2			0xEF48

/* vars */
#define open_psid_buf_symbol		0x45218C
#define thread_info_symbol		0x35E0A8

#elif defined(FIRMWARE_3_60_DBG)

#define TOC						0x352CA0

#define alloc_symbol					0x66F00
#define dealloc_symbol					0x6733C
#define copy_to_user_symbol				0xFD04
#define copy_from_user_symbol				0xFF20
#define copy_to_process_symbol				0xFDBC
#define copy_from_process_symbol			0xFBCC
#define page_allocate_symbol				0x62A70
#define page_free_symbol				0x624D4
#define page_export_to_proc_symbol			0x62C0C
#define kernel_ea_to_lpar_addr_symbol			0x72998
#define process_ea_to_lpar_addr_ex_symbol		0x7A538
#define set_pte_symbol					0x60A6C
#define panic_symbol					0x298D40

#define memcpy_symbol					0x81704
#define memset_symbol					0x5190C
#define memcmp_symbol					0x50C1C
#define memchr_symbol					0x50BCC
#define printf_symbol					0x29B080
#define printfnull_symbol				0x29FB04
#define sprintf_symbol					0x52D34
#define snprintf_symbol					0x52CA0
#define strcpy_symbol					0x51AB8
#define strncpy_symbol					0x51B80
#define strlen_symbol					0x51AE0
#define strcat_symbol					0x519E8
#define strcmp_symbol					0x51A64
#define strncmp_symbol					0x51B0C
#define strchr_symbol					0x51A20
#define strrchr_symbol					0x51BF0

#define spin_lock_irqsave_ex_symbol			0x298F10
#define spin_unlock_irqrestore_ex_symbol		0x298EE4

#define process_kill_symbol				0x295B88

#define ppu_thread_create_symbol			0x14364
#define ppu_thread_exit_symbol				0x1441C
#define ppu_thread_join_symbol				0x14470
#define ppu_thread_delay_symbol				0x2A100

#define mutex_create_symbol				0x13AD8
#define mutex_destroy_symbol				0x13A70
#define mutex_lock_symbol				0x13A68
#define mutex_lock_ex_symbol				0x1F02C
#define mutex_trylock_symbol				0x13A64
#define mutex_unlock_symbol				0x13A60

#define event_port_create_symbol			0x13514
#define event_port_destroy_symbol			0x1397C
#define event_port_connect_symbol			0x139F4
#define event_port_disconnect_symbol			0x13920
#define event_port_send_symbol				0x1350C
#define event_port_send_ex_symbol			0x2CCE0

#define event_queue_create_symbol			0x1381C
#define event_queue_destroy_symbol			0x137A4
#define event_queue_receive_symbol			0x135E8
#define event_queue_tryreceive_symbol			0x136B4

#define cellFsOpen_symbol				0x2CCC28
#define cellFsClose_symbol				0x2CCA90
#define cellFsRead_symbol				0x2CCBCC
#define cellFsWrite_symbol				0x2CCB38
#define cellFsLseek_symbol				0x2CC38C
#define cellFsStat_symbol				0x2CC444
#define cellFsUtime_symbol				0x2CE508
#define cellFsUnlink_internal_symbol			0x18EF54
#define cellFsUtilMount_symbol				0x2CC13C
#define cellFsUtilUmount_symbol				0x2CC110
#define cellFsUtilNewfs_symbol				0x2CD98C

#define pathdup_from_user_symbol			0x193F08
#define	open_path_symbol				0x2CC960
#define open_fs_object_symbol				0x178790
#define close_fs_object_symbol				0x177764

#define authenticate_program_segment_symbol		0x5DBF4

#define syscall_table_symbol				0x368C70
#define syscall_call_offset				0x2A05E8

/* Rtoc entries */
#define decrypter_data_entry				-0x7F18

#elif defined(FIRMWARE_3_70_DBG)

#define TOC						0x359540

#define alloc_symbol					0x674B4
#define dealloc_symbol					0x678F0
#define copy_to_user_symbol				0xFEA0
#define copy_from_user_symbol				0x100BC
#define copy_to_process_symbol				0xFF58
#define copy_from_process_symbol			0xFD68
#define page_allocate_symbol				0x63024
#define page_free_symbol				0x62A88
#define page_export_to_proc_symbol			0x631C0
#define kernel_ea_to_lpar_addr_symbol			0x72F4C
#define process_ea_to_lpar_addr_ex_symbol		0x7AAEC
#define set_pte_symbol					0x61020
#define panic_symbol					0x29E380

#define memcpy_symbol					0x81CB8
#define memset_symbol					0x51C00
#define memcmp_symbol					0x50F10
#define memchr_symbol					0x50EC0
#define printf_symbol					0x2A06C0
#define printfnull_symbol				0x2A5144
#define sprintf_symbol					0x53028
#define snprintf_symbol					0x52F94
#define strcpy_symbol					0x51DAC
#define strncpy_symbol					0x51E74
#define strlen_symbol					0x51DD4
#define strcat_symbol					0x51CDC
#define strcmp_symbol					0x51D58
#define strncmp_symbol					0x51E00
#define strchr_symbol					0x51D14
#define strrchr_symbol					0x51EE4

#define spin_lock_irqsave_ex_symbol			0x29E550
#define spin_unlock_irqrestore_ex_symbol		0x29E524

#define process_kill_symbol				0x29B1C8

#define ppu_thread_create_symbol			0x14500
#define ppu_thread_exit_symbol				0x145B8
#define ppu_thread_join_symbol				0x1460C
#define ppu_thread_delay_symbol				0x2A39C

#define mutex_create_symbol				0x13C74
#define mutex_destroy_symbol				0x13C0C
#define mutex_lock_symbol				0x13C04
#define mutex_lock_ex_symbol				0x1F2C8
#define mutex_trylock_symbol				0x13C00
#define mutex_unlock_symbol				0x13BFC

#define event_port_create_symbol			0x136B0
#define event_port_destroy_symbol			0x13B18
#define event_port_connect_symbol			0x13B90
#define event_port_disconnect_symbol			0x13ABC
#define event_port_send_symbol				0x136A8
#define event_port_send_ex_symbol			0x2CF7C

#define event_queue_create_symbol			0x139B8
#define event_queue_destroy_symbol			0x13940
#define event_queue_receive_symbol			0x13784
#define event_queue_tryreceive_symbol			0x13850

#define cellFsOpen_symbol				0x2D244C
#define cellFsClose_symbol				0x2D22B4
#define cellFsRead_symbol				0x2D23F0
#define cellFsWrite_symbol				0x2D235C
#define cellFsLseek_symbol				0x2D1BB0
#define cellFsStat_symbol				0x2D1C68
#define cellFsUtime_symbol				0x2D3D2C
#define cellFsUnlink_internal_symbol			0x1951D4
#define cellFsUtilMount_symbol				0x2D1924
#define cellFsUtilUmount_symbol				0x2D18F8
#define cellFsUtilNewfs_symbol				0x2D31B0

#define pathdup_from_user_symbol			0x19B9F8
#define	open_path_symbol				0x2D2184
#define open_fs_object_symbol				0x17AC98
#define close_fs_object_symbol				0x179C68

#define authenticate_program_segment_symbol		0x5E1A8

#define syscall_table_symbol				0x36F668
#define syscall_call_offset				0x2A5C28

/* Rtoc entries */
#define decrypter_data_entry				-0x7F10

#elif defined(FIRMWARE_3_74_DBG)

#define TOC						0x359550

#define alloc_symbol					0x674B8
#define dealloc_symbol					0x678F4
#define copy_to_user_symbol				0xFEA4
#define copy_from_user_symbol				0x100C0
#define copy_to_process_symbol				0xFF5C
#define copy_from_process_symbol			0xFD6C
#define page_allocate_symbol				0x63028
#define page_free_symbol				0x62A8C
#define page_export_to_proc_symbol			0x631C4
#define kernel_ea_to_lpar_addr_symbol			0x72F50
#define process_ea_to_lpar_addr_ex_symbol		0x7AAF0
#define set_pte_symbol					0x61024
#define panic_symbol					0x29E38C

#define memcpy_symbol					0x81CBC
#define memset_symbol					0x51C04
#define memcmp_symbol					0x50F14
#define memchr_symbol					0x50EC4
#define printf_symbol					0x2A06CC
#define printfnull_symbol				0x2A5150
#define sprintf_symbol					0x5302C
#define snprintf_symbol					0x52F98
#define strcpy_symbol					0x51DB0
#define strncpy_symbol					0x51E78
#define strlen_symbol					0x51DD8
#define strcat_symbol					0x51CE0
#define strcmp_symbol					0x51D5C
#define strncmp_symbol					0x51E04
#define strchr_symbol					0x51D18
#define strrchr_symbol					0x51EE8

#define spin_lock_irqsave_ex_symbol			0x29E55C
#define spin_unlock_irqrestore_ex_symbol		0x29E530

#define process_kill_symbol				0x29B1D4

#define ppu_thread_create_symbol			0x14504
#define ppu_thread_exit_symbol				0x145BC
#define ppu_thread_join_symbol				0x14610
#define ppu_thread_delay_symbol				0x2A3A0

#define mutex_create_symbol				0x13C78
#define mutex_destroy_symbol				0x13C10
#define mutex_lock_symbol				0x13C08
#define mutex_lock_ex_symbol				0x1F2CC
#define mutex_trylock_symbol				0x13C04
#define mutex_unlock_symbol				0x13C00

#define event_port_create_symbol			0x136B4
#define event_port_destroy_symbol			0x13B1C
#define event_port_connect_symbol			0x13B94
#define event_port_disconnect_symbol			0x13AC0
#define event_port_send_symbol				0x136AC
#define event_port_send_ex_symbol			0x2CF80

#define event_queue_create_symbol			0x139BC
#define event_queue_destroy_symbol			0x13944
#define event_queue_receive_symbol			0x13788
#define event_queue_tryreceive_symbol			0x13854

#define cellFsOpen_symbol				0x2D2458
#define cellFsClose_symbol				0x2D22C0
#define cellFsRead_symbol				0x2D23FC
#define cellFsWrite_symbol				0x2D2368
#define cellFsLseek_symbol				0x2D1BBC
#define cellFsStat_symbol				0x2D1C74
#define cellFsUtime_symbol				0x2D3D38
#define cellFsUnlink_internal_symbol			0x1951DC
#define cellFsUtilMount_symbol				0x2D1930
#define cellFsUtilUmount_symbol				0x2D1904
#define cellFsUtilNewfs_symbol				0x2D31BC

#define pathdup_from_user_symbol			0x19BA00
#define	open_path_symbol				0x2D2190
#define open_fs_object_symbol				0x17ACA0
#define close_fs_object_symbol				0x179C70

#define authenticate_program_segment_symbol		0x5E1AC

#define extend_kstack_symbol				0x72EA8

#define syscall_table_symbol				0x36F668
#define syscall_call_offset				0x2A5C34

/* Rtoc entries */
#define decrypter_data_entry				-0x7F10

#elif defined(FIRMWARE_4_00_DBG)

#define TOC						0x35B940

#define alloc_symbol					0x6777C
#define dealloc_symbol					0x67BB8
#define copy_to_user_symbol				0xFEA0
#define copy_from_user_symbol				0x100BC
#define copy_to_process_symbol				0xFF58
#define copy_from_process_symbol			0xFD68
#define page_allocate_symbol				0x632EC
#define page_free_symbol				0x62D50
#define page_export_to_proc_symbol			0x63488
#define kernel_ea_to_lpar_addr_symbol			0x73214
#define process_ea_to_lpar_addr_ex_symbol		0x7ADB4
#define set_pte_symbol					0x612E8
#define panic_symbol					0x29EEB4

#define memcpy_symbol					0x81F80
#define memset_symbol					0x51DB4
#define memcmp_symbol					0x510C4
#define memchr_symbol					0x51074
#define printf_symbol					0x2A1204
#define printfnull_symbol				0x2A5C88
#define sprintf_symbol					0x531DC
#define snprintf_symbol					0x53148
#define strcpy_symbol					0x51F60
#define strncpy_symbol					0x52028
#define strlen_symbol					0x51F88
#define strcat_symbol					0x51E90
#define strcmp_symbol					0x51F0C
#define strncmp_symbol					0x51FB4
#define strchr_symbol					0x51EC8
#define strrchr_symbol					0x52098

#define spin_lock_irqsave_ex_symbol			0x29F084
#define spin_unlock_irqrestore_ex_symbol		0x29F058

#define process_kill_symbol				0x29BCFC

#define ppu_thread_create_symbol			0x14500
#define ppu_thread_exit_symbol				0x145B8
#define ppu_thread_join_symbol				0x1460C
#define ppu_thread_delay_symbol				0x2A3B0

#define mutex_create_symbol				0x13C74
#define mutex_destroy_symbol				0x13C0C
#define mutex_lock_symbol				0x13C04
#define mutex_lock_ex_symbol				0x1F2DC
#define mutex_trylock_symbol				0x13C00
#define mutex_unlock_symbol				0x13BFC

#define event_port_create_symbol			0x136B0
#define event_port_destroy_symbol			0x13B18
#define event_port_connect_symbol			0x13B90
#define event_port_disconnect_symbol			0x13ABC
#define event_port_send_symbol				0x136A8
#define event_port_send_ex_symbol			0x2CF90

#define event_queue_create_symbol			0x139B8
#define event_queue_destroy_symbol			0x13940
#define event_queue_receive_symbol			0x13784
#define event_queue_tryreceive_symbol			0x13850

#define cellFsOpen_symbol				0x2D3648
#define cellFsClose_symbol				0x2D34B0
#define cellFsRead_symbol				0x2D35EC
#define cellFsWrite_symbol				0x2D3558
#define cellFsLseek_symbol				0x2D2DAC
#define cellFsStat_symbol				0x2D2E64
#define cellFsUtime_symbol				0x2D4F28
#define cellFsUnlink_internal_symbol			0x193E3C
#define cellFsUtilMount_symbol				0x2D2B20
#define cellFsUtilUmount_symbol				0x2D2AF4
#define cellFsUtilNewfs_symbol				0x2D43AC

#define pathdup_from_user_symbol			0x19C1F8
#define	open_path_symbol				0x2D3380
#define open_fs_object_symbol				0x17B234
#define close_fs_object_symbol				0x17A204

#define authenticate_program_segment_symbol		0x5E468

#define extend_kstack_symbol				0x7316C

#define syscall_table_symbol				0x371AE8
#define syscall_call_offset				0x2A676C

/* Rtoc entries */
#define decrypter_data_entry				-0x7F10

#elif defined(FIRMWARE_4_10_DBG)

#define TOC						0x35C410

#define alloc_symbol					0x6777C
#define dealloc_symbol					0x67BB8
#define copy_to_user_symbol				0xFEA0
#define copy_from_user_symbol				0x100BC
#define copy_to_process_symbol				0xFF58
#define copy_from_process_symbol			0xFD68
#define page_allocate_symbol				0x632EC
#define page_free_symbol				0x62D50
#define page_export_to_proc_symbol			0x63488
#define kernel_ea_to_lpar_addr_symbol			0x73214
#define process_ea_to_lpar_addr_ex_symbol		0x7ADB4
#define set_pte_symbol					0x612E8
#define panic_symbol					0x29F1F0

#define memcpy_symbol					0x81F80
#define memset_symbol					0x51DB4
#define memcmp_symbol					0x510C4
#define memchr_symbol					0x51074
#define printf_symbol					0x2A1540
#define printfnull_symbol				0x2A5FC4
#define sprintf_symbol					0x531DC
#define snprintf_symbol					0x53148
#define strcpy_symbol					0x51F60
#define strncpy_symbol					0x52028
#define strlen_symbol					0x51F88
#define strcat_symbol					0x51E90
#define strcmp_symbol					0x51F0C
#define strncmp_symbol					0x51FB4
#define strchr_symbol					0x51EC8
#define strrchr_symbol					0x52098

#define spin_lock_irqsave_ex_symbol			0x29F3C0
#define spin_unlock_irqrestore_ex_symbol		0x29F394

#define process_kill_symbol				0x29C040

#define ppu_thread_create_symbol			0x14500
#define ppu_thread_exit_symbol				0x145B8
#define ppu_thread_join_symbol				0x1460C
#define ppu_thread_delay_symbol				0x2A3B0

#define mutex_create_symbol				0x13C74
#define mutex_destroy_symbol				0x13C0C
#define mutex_lock_symbol				0x13C04
#define mutex_lock_ex_symbol				0x1F2DC
#define mutex_trylock_symbol				0x13C00
#define mutex_unlock_symbol				0x13BFC

#define event_port_create_symbol			0x136B0
#define event_port_destroy_symbol			0x13B18
#define event_port_connect_symbol			0x13B90
#define event_port_disconnect_symbol			0x13ABC
#define event_port_send_symbol				0x136A8
#define event_port_send_ex_symbol			0x2CF90

#define event_queue_create_symbol			0x139B8
#define event_queue_destroy_symbol			0x13940
#define event_queue_receive_symbol			0x13784
#define event_queue_tryreceive_symbol			0x13850

#define cellFsOpen_symbol				0x2D3988
#define cellFsClose_symbol				0x2D37F0
#define cellFsRead_symbol				0x2D392C
#define cellFsWrite_symbol				0x2D3898
#define cellFsLseek_symbol				0x2D30EC
#define cellFsStat_symbol				0x2D31A4
#define cellFsUtime_symbol				0x2D5268
#define cellFsUnlink_internal_symbol			0x1ADCF0
#define cellFsUtilMount_symbol				0x2D2E60
#define cellFsUtilUmount_symbol				0x2D2E34
#define cellFsUtilNewfs_symbol				0x2D46EC

#define pathdup_from_user_symbol			0x1B60AC
#define	open_path_symbol				0x2D36C0
#define open_fs_object_symbol				0x195100
#define close_fs_object_symbol				0x1940D0

#define authenticate_program_segment_symbol		0x5E468

#define extend_kstack_symbol				0x7316C

#define syscall_table_symbol				0x372560
#define syscall_call_offset				0x2A6AA8

/* Rtoc entries */
#define decrypter_data_entry				-0x7F10

#elif defined(FIRMWARE_4_30)

#define TOC						0x348200

#define create_kernel_object_symbol			0x11F98
#define destroy_kernel_object_symbol			0x118FC
#define destroy_shared_kernel_object_symbol		0x11270
#define open_kernel_object_symbol			0x125E8
#define open_shared_kernel_object_symbol		0x123F8
#define close_kernel_object_handle_symbol		0x11A18

#define alloc_symbol					0x64028	
#define dealloc_symbol					0x64464
#define copy_to_user_symbol				0xF858
#define copy_from_user_symbol				0xFA74
#define copy_to_process_symbol				0xF910
#define copy_from_process_symbol			0xF720
#define page_allocate_symbol				0x5FB98
#define page_free_symbol				0x5F5FC
#define page_export_to_proc_symbol			0x5FD34
#define page_unexport_from_proc_symbol			0x5F4F0
#define kernel_ea_to_lpar_addr_symbol			0x6F91C
#define process_ea_to_lpar_addr_ex_symbol		0x76F30
#define set_pte_symbol					0x5DB94
#define panic_symbol					0x29DDF0

#define memcpy_symbol					0x7E0FC
#define memset_symbol					0x4E544
#define memcmp_symbol					0x4D854
#define memchr_symbol					0x4D804
#define printf_symbol					0x29FEEC
#define printfnull_symbol				0x2A495C
#define sprintf_symbol					0x4F96C
#define snprintf_symbol					0x4F8D8
#define strcpy_symbol					0x4E6F0
#define strncpy_symbol					0x4E7B8
#define strlen_symbol					0x4E718
#define strcat_symbol					0x4E620
#define strcmp_symbol					0x4E69C
#define strncmp_symbol					0x4E744
#define strchr_symbol					0x4E658
#define strrchr_symbol					0x4E828

#define spin_lock_irqsave_ex_symbol			0x29DFC0
#define spin_unlock_irqrestore_ex_symbol		0x29DF94

#define create_process_common_symbol			0x29BDBC
#define create_process_base_symbol			0x29B478
#define load_process_symbol				0x5004
#define process_kill_symbol				0x29BBC8

#define ppu_thread_create_symbol			0x13EB0
#define ppu_thread_exit_symbol				0x13F68
#define ppu_thread_join_symbol				0x13FBC
#define ppu_thread_delay_symbol				0x28550
#define create_kernel_thread_symbol			0x248D4
#define create_user_thread_symbol			0x25010
#define create_user_thread2_symbol			0x24E34
#define start_thread_symbol				0x23B00
#define run_thread_symbol				0x23330 /* temp name */
#define register_thread_symbol				0x2981D4
#define allocate_user_stack_symbol			0x2989BC
#define deallocate_user_stack_symbol			0x298924

#define mutex_create_symbol				0x13624
#define mutex_destroy_symbol				0x135BC
#define mutex_lock_symbol				0x135B4
#define mutex_lock_ex_symbol				0x1D910
#define mutex_trylock_symbol				0x135B0
#define mutex_unlock_symbol				0x135AC

#define cond_create_symbol				0x13790
#define cond_destroy_symbol				0x13740
#define cond_wait_symbol				0x13738
#define cond_wait_ex_symbol				0x1EEFC
#define cond_signal_symbol				0x13714
#define cond_signal_all_symbol				0x136F0

#define semaphore_initialize_symbol			0x30A00
#define semaphore_wait_ex_symbol			0x30708
#define semaphore_trywait_symbol			0x302F0
#define semaphore_post_ex_symbol			0x3043C

#define event_port_create_symbol			0x13060
#define event_port_destroy_symbol			0x134C8
#define event_port_connect_symbol			0x13540
#define event_port_disconnect_symbol			0x1346C
#define event_port_send_symbol				0x13058
#define event_port_send_ex_symbol			0x2AFB0

#define event_queue_create_symbol			0x13368
#define event_queue_destroy_symbol			0x132F0
#define event_queue_receive_symbol			0x13134
#define event_queue_tryreceive_symbol			0x13200

#define cellFsOpen_symbol				0x2C3F9C
#define cellFsClose_symbol				0x2C3E04
#define cellFsRead_symbol				0x2C3F40
#define cellFsWrite_symbol				0x2C3EAC
#define cellFsLseek_symbol				0x2C3534
#define cellFsStat_symbol				0x2C37B8
#define cellFsUtime_symbol				0x2C51D4
#define cellFsUnlink_internal_symbol			0x1AA184

#define cellFsUtilMount_symbol				0x2C3314
#define cellFsUtilUmount_symbol				0x2C32E8
#define cellFsUtilNewfs_symbol				0x2C4C6C

#define pathdup_from_user_symbol			0x1B1DC4
#define	open_path_symbol				0x2C3CD4
#define open_fs_object_symbol				0x1913E8
#define close_fs_object_symbol				0x1903B8

#define storage_get_device_info_symbol			0x2A932C
#define storage_get_device_config_symbol		0x2A8FFC
#define storage_open_symbol				0x2A8850
#define storage_close_symbol				0x2A8DEC
#define storage_read_symbol				0x2A7D68
#define storage_write_symbol				0x2A7C38
#define storage_send_device_command_symbol		0x2A7EA4
#define storage_map_io_memory_symbol			0x2A91E8
#define storage_unmap_io_memory_symbol			0x2A90B4
#define new_medium_listener_object_symbol		0x96B3C
#define delete_medium_listener_object_symbol		0x98374
#define set_medium_event_callbacks_symbol		0x986D8

#define cellUsbdRegisterLdd_symbol			0x290B30
#define cellUsbdUnregisterLdd_symbol			0x290AE0
#define cellUsbdScanStaticDescriptor_symbol		0x291D30
#define cellUsbdOpenPipe_symbol				0x291DE0
#define cellUsbdClosePipe_symbol			0x291D90
#define cellUsbdControlTransfer_symbol			0x291C94
#define cellUsbdBulkTransfer_symbol			0x291C14

#define decrypt_func_symbol				0x3470C
#define lv1_call_99_wrapper_symbol			0x4FD80
#define modules_verification_symbol			0x598D8
#define authenticate_program_segment_symbol		0x5AD14

#define prx_load_module_symbol				0x88294
#define prx_start_module_symbol				0x86F60
#define prx_stop_module_symbol				0x88338
#define prx_unload_module_symbol			0x86C94
#define prx_get_module_info_symbol			0x8671C
#define prx_get_module_id_by_address_symbol		0x8662C
#define prx_get_module_id_by_name_symbol		0x8667C
#define prx_get_module_list_symbol			0x8679C
#define load_module_by_fd_symbol			0x878C4
#define parse_sprx_symbol				0x85648
#define open_prx_object_symbol				0x7ECB8
#define close_prx_object_symbol				0x7F5C8
#define lock_prx_mutex_symbol				0x865D4
#define unlock_prx_mutex_symbol				0x865E0

#define extend_kstack_symbol				0x6F874

#define get_pseudo_random_number_symbol			0x2591C8
#define md5_reset_symbol				0x163D60
#define md5_update_symbol				0x164800
#define md5_final_symbol				0x164980
#define ss_get_open_psid_symbol				0x25B590
#define update_mgr_read_eeprom_symbol			0x254DD4
#define update_mgr_write_eeprom_symbol			0x254D1C

#define ss_params_get_update_status_symbol		0x5198C		

#define syscall_table_symbol				0x35DBE0
#define syscall_call_offset				0x2A5440

#define read_bdvd0_symbol				0x1BCD24
#define read_bdvd1_symbol				0x1BE950
#define read_bdvd2_symbol				0x1CBB08

#define storage_internal_get_device_object_symbol	0x2A76F0

#define bt_set_controller_info_internal_symbol		0xF2718 /* just a name... */

/* Calls, jumps */
#define device_event_port_send_call			0x2B16A8

#define ss_pid_call_1					0x2445F8	

#define read_module_header_call				0x7EBAC
#define read_module_body_call				0x671C
#define load_module_by_fd_call1				0x88130

#define shutdown_copy_params_call			0xAABC

#define fsloop_open_call				0x2C4134
#define fsloop_close_call				0x2C4184
#define fsloop_read_call				0x2C41C4

/* Patches */
#define shutdown_patch_offset				0xAAA8
#define module_sdk_version_patch_offset			0x297A04
#define module_add_parameter_to_parse_sprxpatch_offset	0x879A0		

#define user_thread_prio_patch				0x201B0
#define user_thread_prio_patch2				0x201BC

/* Rtoc entries */

#define io_rtoc_entry_1					-0x178
#define io_sub_rtoc_entry_1				-0x7EA0

#define decrypt_rtoc_entry_2 				-0x6680
#define decrypter_data_entry				-0x7F10

#define storage_rtoc_entry_1				0x1E40

#define device_event_rtoc_entry_1			0x20B0

#define time_rtoc_entry_1				-0x7640
#define time_rtoc_entry_2				-0x7648

#define thread_rtoc_entry_1				-0x76C0

#define process_rtoc_entry_1				-0x7800

#define bt_rtoc_entry_1					-0x3600

/* Permissions */
#define permissions_func_symbol				0x3560  /* before it was patch_func5+patch_func5_offset */
#define permissions_exception1 				0x24EB4 /* before it was patch_func6+patch6_func6_offset */
#define permissions_exception2				0xC444C	/* before it was patch_func7+patch7_func7_offset */	
#define permissions_exception3				0x20284 /* Added in v 3.0 */

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3DB1C0
#define patch_func2 					0x5A290
#define patch_func2_offset 				0x2C
#define patch_func8 					0x56FF0 //lv2open update patch
#define patch_func8_offset1 				0xA4 //lv2open update patch
#define patch_func8_offset2 				0x208 //lv2open update patch
#define patch_func9 					0x5A74C // must upgrade error
#define patch_func9_offset 				0x470
#define mem_base2					0x3D90

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x3761B0

#elif defined(FIRMWARE_4_46)

#define TOC						0x348DF0

#define create_kernel_object_symbol			0x12014
#define destroy_kernel_object_symbol			0x11978
#define destroy_shared_kernel_object_symbol		0x112EC
#define open_kernel_object_symbol			0x12664
#define open_shared_kernel_object_symbol		0x12474
#define close_kernel_object_handle_symbol		0x11A94

#define alloc_symbol					0x62F78	
#define dealloc_symbol					0x633B4
#define copy_to_user_symbol				0xF85C
#define copy_from_user_symbol				0xFA78
#define copy_to_process_symbol				0xF914
#define copy_from_process_symbol			0xF724
#define page_allocate_symbol				0x5EAE8
#define page_free_symbol				0x5E54C
#define page_export_to_proc_symbol			0x5EC84
#define page_unexport_from_proc_symbol			0x5E440
#define kernel_ea_to_lpar_addr_symbol			0x6E86C
#define process_ea_to_lpar_addr_ex_symbol		0x75E80
#define set_pte_symbol					0x5CAE4
#define map_process_memory_symbol			0x7598C
#define panic_symbol					0x29D730

#define memcpy_symbol					0x7D04C
#define memset_symbol					0x4D494
#define memcmp_symbol					0x4C7A4
#define memchr_symbol					0x4C754
#define printf_symbol					0x2A0800
#define printfnull_symbol				0x2A5270
#define sprintf_symbol					0x4E8BC
#define snprintf_symbol					0x4E828
#define strcpy_symbol					0x4D640
#define strncpy_symbol					0x4D708
#define strlen_symbol					0x4D668
#define strcat_symbol					0x4D570
#define strcmp_symbol					0x4D5EC
#define strncmp_symbol					0x4D694
#define strchr_symbol					0x4D5A8
#define strrchr_symbol					0x4D778

#define spin_lock_irqsave_ex_symbol			0x29D900
#define spin_unlock_irqrestore_ex_symbol		0x29D8D4

#define create_process_common_symbol			0x29B6F8
#define create_process_base_symbol			0x29ADB4
#define load_process_symbol				0x5004
#define process_kill_symbol				0x29B504

#define ppu_thread_create_symbol			0x13F2C
#define ppu_thread_exit_symbol				0x13FE4
#define ppu_thread_join_symbol				0x14038
#define ppu_thread_delay_symbol				0x285CC
#define create_kernel_thread_symbol			0x24950
#define create_user_thread_symbol			0x2508C
#define create_user_thread2_symbol			0x24EB0
#define start_thread_symbol				0x23B7C
#define run_thread_symbol				0x233AC /* temp name */
#define register_thread_symbol				0x297B10
#define allocate_user_stack_symbol			0x2982F8
#define deallocate_user_stack_symbol			0x298260

#define mutex_create_symbol				0x136A0
#define mutex_destroy_symbol				0x13638
#define mutex_lock_symbol				0x13630
#define mutex_lock_ex_symbol				0x1D98C
#define mutex_trylock_symbol				0x1362C
#define mutex_unlock_symbol				0x13628

#define cond_create_symbol				0x1380C
#define cond_destroy_symbol				0x137BC
#define cond_wait_symbol				0x137B4
#define cond_wait_ex_symbol				0x1EF78
#define cond_signal_symbol				0x13790
#define cond_signal_all_symbol				0x1376C

#define semaphore_initialize_symbol			0x30A7C
#define semaphore_wait_ex_symbol			0x30784
#define semaphore_trywait_symbol			0x3036C
#define semaphore_post_ex_symbol			0x304B8

#define event_port_create_symbol			0x130DC
#define event_port_destroy_symbol			0x13544
#define event_port_connect_symbol			0x135BC
#define event_port_disconnect_symbol			0x134E8
#define event_port_send_symbol				0x130D4
#define event_port_send_ex_symbol			0x2B02C

#define event_queue_create_symbol			0x133E4
#define event_queue_destroy_symbol			0x1336C
#define event_queue_receive_symbol			0x131B0
#define event_queue_tryreceive_symbol			0x1327C

#define cellFsOpen_symbol				0x2C4A78
#define cellFsClose_symbol				0x2C48E0
#define cellFsRead_symbol				0x2C4A1C
#define cellFsWrite_symbol				0x2C4988
#define cellFsLseek_symbol				0x2C4010
#define cellFsStat_symbol				0x2C4294
#define cellFsUtime_symbol				0x2C5CB0
#define cellFsUnlink_internal_symbol			0x1AAF70

#define cellFsUtilMount_symbol				0x2C3DF0
#define cellFsUtilUmount_symbol				0x2C3DC4
#define cellFsUtilNewfs_symbol				0x2C5748

#define pathdup_from_user_symbol			0x1B1000
#define	open_path_symbol				0x2C47B0
#define open_fs_object_symbol				0x190420
#define close_fs_object_symbol				0x18F41C

#define storage_get_device_info_symbol			0x2A9C50
#define storage_get_device_config_symbol		0x2A90E0
#define storage_open_symbol				0x2A9660
#define storage_close_symbol				0x2A9450
#define storage_read_symbol				0x2A89C0
#define storage_write_symbol				0x2A8890
#define storage_send_device_command_symbol		0x2A854C
#define storage_map_io_memory_symbol			0x2A9B0C
#define storage_unmap_io_memory_symbol			0x2A99D8
#define new_medium_listener_object_symbol		0x95AF4
#define delete_medium_listener_object_symbol		0x9732C
#define set_medium_event_callbacks_symbol		0x97690

#define cellUsbdRegisterLdd_symbol			0x290444
#define cellUsbdUnregisterLdd_symbol			0x2903F4
#define cellUsbdScanStaticDescriptor_symbol		0x291644
#define cellUsbdOpenPipe_symbol				0x2916F4
#define cellUsbdClosePipe_symbol			0x2916A4
#define cellUsbdControlTransfer_symbol			0x2915A8
#define cellUsbdBulkTransfer_symbol			0x291528

#define decrypt_func_symbol				0x34798
#define lv1_call_99_wrapper_symbol			0x4ECD0
#define modules_verification_symbol			0x58828
#define authenticate_program_segment_symbol		0x59C64

#define prx_load_module_symbol				0x87234
#define prx_start_module_symbol				0x85F00
#define prx_stop_module_symbol				0x872D8
#define prx_unload_module_symbol			0x85C34
#define prx_get_module_info_symbol			0x856BC
#define prx_get_module_id_by_address_symbol		0x855CC
#define prx_get_module_id_by_name_symbol		0x8561C
#define prx_get_module_list_symbol			0x8573C
#define load_module_by_fd_symbol			0x86864
#define parse_sprx_symbol				0x845E8
#define open_prx_object_symbol				0x7DC08
#define close_prx_object_symbol				0x7E518
#define lock_prx_mutex_symbol				0x85574
#define unlock_prx_mutex_symbol				0x85580

#define extend_kstack_symbol				0x6E7C4

#define get_pseudo_random_number_symbol			0x2587A0
#define md5_reset_symbol				0x162DB0
#define md5_update_symbol				0x163850
#define md5_final_symbol				0x1639D0
#define ss_get_open_psid_symbol				0x25AB68
#define update_mgr_read_eeprom_symbol			0x2542AC
#define update_mgr_write_eeprom_symbol			0x2541F4

#define ss_params_get_update_status_symbol		0x508DC		

#define syscall_table_symbol				0x35E860
#define syscall_call_offset				0x2A5D54

#define read_bdvd0_symbol				0x1BBF70
#define read_bdvd1_symbol				0x1BDB9C
#define read_bdvd2_symbol				0x1CAD54

#define storage_internal_get_device_object_symbol	0x2A8004

#define hid_mgr_read_usb_symbol				0x1037EC
#define hid_mgr_read_bt_symbol				0xFD6C4

#define bt_set_controller_info_internal_symbol		0xF1730 /* just a name... */

/* Calls, jumps */
#define device_event_port_send_call			0x2B2184

#define ss_pid_call_1					0x243AD0

#define process_map_caller_call				0x4D24

#define read_module_header_call				0x7DAFC
#define read_module_body_call				0x671C
#define load_module_by_fd_call1				0x870D0

#define shutdown_copy_params_call			0xAABC

#define fsloop_open_call				0x2C4C10
#define fsloop_close_call				0x2C4C60
#define fsloop_read_call				0x2C4CA0

/* Patches */
#define shutdown_patch_offset				0xAAA8
#define module_sdk_version_patch_offset			0x297340
#define module_add_parameter_to_parse_sprxpatch_offset	0x86940		

#define user_thread_prio_patch				0x2022C
#define user_thread_prio_patch2				0x20238

/* Rtoc entries */

#define io_rtoc_entry_1					-0x150
#define io_sub_rtoc_entry_1				-0x7EA0

#define decrypt_rtoc_entry_2 				-0x6688
#define decrypter_data_entry				-0x7F10

#define storage_rtoc_entry_1				0x1E98

#define device_event_rtoc_entry_1			0x2108

#define time_rtoc_entry_1				-0x7640
#define time_rtoc_entry_2				-0x7648

#define thread_rtoc_entry_1				-0x76C0

#define process_rtoc_entry_1				-0x7800

#define bt_rtoc_entry_1					-0x35D8

/* Permissions */
#define permissions_func_symbol				0x3560  /* before it was patch_func5+patch_func5_offset */
#define permissions_exception1 				0x24F30 /* before it was patch_func6+patch6_func6_offset */
#define permissions_exception2				0xC3554	/* before it was patch_func7+patch7_func7_offset */	
#define permissions_exception3				0x20300 /* Added in v 3.0 */

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3DBE40
#define patch_func2 					0x591E0
#define patch_func2_offset 				0x2C
#define patch_func8 					0x55F40 //lv2open update patch
#define patch_func8_offset1 				0xA4 //lv2open update patch
#define patch_func8_offset2 				0x208 //lv2open update patch
#define patch_func9 					0x5969C // must upgrade error
#define patch_func9_offset 				0x470
#define mem_base2					0x3D90

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x376E30

#endif /* FIRMWARE */

#endif /* __FIRMWARE_SYMBOLS_H_S__ */

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

#elif defined(FIRMWARE_4_55) 

#define TOC						0x34E620 //

#define create_kernel_object_symbol			0x12024 //
#define destroy_kernel_object_symbol			0x11988 //
#define destroy_shared_kernel_object_symbol		0x112FC //
#define open_kernel_object_symbol			0x12674 //
#define open_shared_kernel_object_symbol		0x12484 //
#define close_kernel_object_handle_symbol		0x11AA4 //CHECKED TILL HERE!!

#define alloc_symbol					0x643B4 //	
#define dealloc_symbol					0x647F0 //
#define copy_to_user_symbol				0xF86C //
#define copy_from_user_symbol				0xFA88 //
#define copy_to_process_symbol				0xF924 //
#define copy_from_process_symbol			0xF734 //
#define page_allocate_symbol				0x5FF24 // 0X143C+
#define page_free_symbol				0x5F988 //
#define page_export_to_proc_symbol			0x600C0 //
#define page_unexport_from_proc_symbol			0x5F87C //
#define kernel_ea_to_lpar_addr_symbol			0x6FCA8 //
#define process_ea_to_lpar_addr_ex_symbol		0x772BC //
#define set_pte_symbol					0x5DF20 //
#define map_process_memory_symbol			0x76DC8 //
#define panic_symbol					0x277460 //

#define memcpy_symbol					0x7E488 //
#define memset_symbol					0x4D6D8 // FIXED!!
#define memcmp_symbol					0x4C9E8 //
#define memchr_symbol					0x4C998 //
#define printf_symbol					0x27A530 //
#define printfnull_symbol				0x27EFA0 //
#define sprintf_symbol					0x4EB00 //
#define snprintf_symbol					0x4EA6C //
#define strcpy_symbol					0x4D884 //
#define strncpy_symbol					0x4D94C //
#define strlen_symbol					0x4D8AC //
#define strcat_symbol					0x4D7B4 //
#define strcmp_symbol					0x4D830 //
#define strncmp_symbol					0x4D8D8 //
#define strchr_symbol					0x4D7EC //
#define strrchr_symbol					0x4D9BC //CHECKED TILL HERE!

#define spin_lock_irqsave_ex_symbol			0x277630 //
#define spin_unlock_irqrestore_ex_symbol		0x277604 //

#define create_process_common_symbol			0x275430 //
#define create_process_base_symbol			0x274AE0 //
#define load_process_symbol				0x5004 //
#define process_kill_symbol				0x27523C //CHECKED TILL HERE!REALLY/2/18/14!

#define ppu_thread_create_symbol			0x13F3C //
#define ppu_thread_exit_symbol				0x13FF4 //
#define ppu_thread_join_symbol				0x14048 //
#define ppu_thread_delay_symbol				0x28810 //
#define create_kernel_thread_symbol			0x24B94 //
#define create_user_thread_symbol			0x252D0 //
#define create_user_thread2_symbol			0x250F4 //
#define start_thread_symbol				0x23DC0 //
#define run_thread_symbol				0x235F0 // /* temp name */
#define register_thread_symbol				0x27183C //
#define allocate_user_stack_symbol			0x272024 //
#define deallocate_user_stack_symbol			0x271F8C //CHECKED TILL HERE!REALLY2!

#define mutex_create_symbol				0x136B0 //
#define mutex_destroy_symbol				0x13648 //
#define mutex_lock_symbol				0x13640 //
#define mutex_lock_ex_symbol				0x1DBD0 //
#define mutex_trylock_symbol				0x1363C //
#define mutex_unlock_symbol				0x13638 //

#define cond_create_symbol				0x1381C //
#define cond_destroy_symbol				0x137CC //
#define cond_wait_symbol				0x137C4 //
#define cond_wait_ex_symbol				0x1F1BC //
#define cond_signal_symbol				0x137A0 //
#define cond_signal_all_symbol				0x1377C //CHECKED TILL HERE!

#define semaphore_initialize_symbol			0x30CC0 //
#define semaphore_wait_ex_symbol			0x309C8 //
#define semaphore_trywait_symbol			0x305B0 //
#define semaphore_post_ex_symbol			0x306FC //

#define event_port_create_symbol			0x130EC //
#define event_port_destroy_symbol			0x13554 //
#define event_port_connect_symbol			0x135CC //
#define event_port_disconnect_symbol			0x134F8 //
#define event_port_send_symbol				0x130E4 //
#define event_port_send_ex_symbol			0x2B270 //

#define event_queue_create_symbol			0x133F4 //
#define event_queue_destroy_symbol			0x1337C //
#define event_queue_receive_symbol			0x131C0 //
#define event_queue_tryreceive_symbol			0x1328C //CHECKED TILL HERE!

#define cellFsOpen_symbol				0x29FA10 //
#define cellFsClose_symbol				0x29F878 //
#define cellFsRead_symbol				0x29F9B4 //
#define cellFsWrite_symbol				0x29F920 //
#define cellFsLseek_symbol				0x29EFA8 //
#define cellFsStat_symbol				0x29F22C //
#define cellFsUtime_symbol				0x2A0D18 //FIXED AGAIN!!
#define cellFsUnlink_internal_symbol			0x19D638 //FIXED UP!+CHECKED TILL HERE!

#define cellFsUtilMount_symbol				0x29ED88 //
#define cellFsUtilUmount_symbol				0x29ED5C //
#define cellFsUtilNewfs_symbol				0x2A07B0 //

#define pathdup_from_user_symbol			0x1A3730 //
#define	open_path_symbol				0x29F748 //
#define open_fs_object_symbol				0x18BB60 //
#define close_fs_object_symbol				0x18AA9C //

#define storage_get_device_info_symbol			0x283980 //
#define storage_get_device_config_symbol		0x282E10 //
#define storage_open_symbol				0x283390 //
#define storage_close_symbol				0x283180 //
#define storage_read_symbol				0x2826F0 //
#define storage_write_symbol				0x2825C0 //CHECKED TILL HERE!2/19/14
#define storage_send_device_command_symbol		0x28227C //
#define storage_map_io_memory_symbol			0x28383C //
#define storage_unmap_io_memory_symbol			0x283708 //
#define new_medium_listener_object_symbol		0x96F40 //
#define delete_medium_listener_object_symbol		0x98778 //
#define set_medium_event_callbacks_symbol		0x98ADC //CHECKED TILL HERE!!

#define cellUsbdRegisterLdd_symbol			0x26A16C //FIXED!
#define cellUsbdUnregisterLdd_symbol			0x26A11C //
#define cellUsbdScanStaticDescriptor_symbol		0x26B36C //
#define cellUsbdOpenPipe_symbol				0x26B41C //
#define cellUsbdClosePipe_symbol			0x26B3CC //
#define cellUsbdControlTransfer_symbol			0x26B2D0 //
#define cellUsbdBulkTransfer_symbol			0x26B250 //CHECKED TILL HERE!

#define decrypt_func_symbol				0x349DC //
#define lv1_call_99_wrapper_symbol			0x4EF14 //
#define modules_verification_symbol			0x586E8 //SUSPICIOUS! BUT NOW LOOKS LIKE FINE!
#define authenticate_program_segment_symbol		0x5A51C //CHECKED TILL HERE!!

#define prx_load_module_symbol				0x88680 //
#define prx_start_module_symbol				0x8734C //
#define prx_stop_module_symbol				0x88724 //
#define prx_unload_module_symbol			0x87080 //
#define prx_get_module_info_symbol			0x86B08 //
#define prx_get_module_id_by_address_symbol		0x86A18 //
#define prx_get_module_id_by_name_symbol		0x86AB8 //
#define prx_get_module_list_symbol			0x86B88 //
#define load_module_by_fd_symbol			0x87CB0 //
#define parse_sprx_symbol				0x85A34 //
#define open_prx_object_symbol				0x7F054 //
#define close_prx_object_symbol				0x7F964 //
#define lock_prx_mutex_symbol				0x869C0 //
#define unlock_prx_mutex_symbol				0x869CC //CHECKED TILL HERE!

#define extend_kstack_symbol				0x6FC00 //

#define get_pseudo_random_number_symbol			0x2321D4 //
#define md5_reset_symbol				0x163004 //
#define md5_update_symbol				0x163AA4 //
#define md5_final_symbol				0x163C24 //
#define ss_get_open_psid_symbol				0x2346BC //
#define update_mgr_read_eeprom_symbol			0x22DACC //
#define update_mgr_write_eeprom_symbol			0x22DA14 //

#define ss_params_get_update_status_symbol		0x50B20 //		

#define syscall_table_symbol				0x362680 //
#define syscall_call_offset				0x27FA84 //

#define read_bdvd0_symbol				0x1AE6A0 //FIXED!!
#define read_bdvd1_symbol				0x1B02CC //
#define read_bdvd2_symbol				0x1BD454 //CHECKED TILL HERE!!

#define storage_internal_get_device_object_symbol	0x281D34 //CHECKED!!

#define hid_mgr_read_usb_symbol				0x1038F4 //
#define hid_mgr_read_bt_symbol				0xFD7CC //CHECKED TILL HERE!

#define bt_set_controller_info_internal_symbol		0xF1838 // /* just a name... */

/* Calls, jumps */
#define device_event_port_send_call			0x28BEEC //

#define ss_pid_call_1					0x21D2F0 //

#define process_map_caller_call				0x4D24 //

#define read_module_header_call				0x7EF48 //
#define read_module_body_call				0x671C //
#define load_module_by_fd_call1				0x8851C //CHECKED TILL HERE!

#define shutdown_copy_params_call			0xAACC //

#define fsloop_open_call				0x29FBA8 //
#define fsloop_close_call				0x29FBF8 //
#define fsloop_read_call				0x29FC38 //CHECKED TILL HERE!

/* Patches */
#define shutdown_patch_offset				0xAAB8 //
#define module_sdk_version_patch_offset			0x27106C //
#define module_add_parameter_to_parse_sprxpatch_offset	0x87D8C //		

#define user_thread_prio_patch				0x20470 //
#define user_thread_prio_patch2				0x2047C //CHECKED TILL HERE!

/* Rtoc entries || CHECKED!!*/

#define io_rtoc_entry_1					-0x1B8 //
#define io_sub_rtoc_entry_1				-0x7EA0 //

#define decrypt_rtoc_entry_2 				-0x66A8 //
#define decrypter_data_entry				-0x7F10 //

#define storage_rtoc_entry_1				0x1E10 //

#define device_event_rtoc_entry_1			0x2080 //

#define time_rtoc_entry_1				-0x7640 //
#define time_rtoc_entry_2				-0x7648 //

#define thread_rtoc_entry_1				-0x76C0 //

#define process_rtoc_entry_1				-0x7800 //

#define bt_rtoc_entry_1					-0x3640 //

/* Permissions */
#define permissions_func_symbol				0x3560 //  /* before it was patch_func5+patch_func5_offset */
#define permissions_exception1 				0x25174 // /* before it was patch_func6+patch6_func6_offset */
#define permissions_exception2				0xC49D8 //	/* before it was patch_func7+patch7_func7_offset */	
#define permissions_exception3				0x20544 //CHECKED TILL HERE! /* Added in v 3.0 */

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3E17C0 //
#define patch_func2 					0x59990 //
#define patch_func2_offset 				0x2C //
#define patch_func8 					0x56200 // //lv2open update patch
#define patch_func8_offset1 				0xA4 // //lv2open update patch
#define patch_func8_offset2 				0x208 // //lv2open update patch
#define patch_func9 					0x59E4C // // must upgrade error
#define patch_func9_offset 				0x4B8 //FIXED!!
#define mem_base2					0x3D90 //CHECKED KERNEL OFFSETS!

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x37C7B0 //


#elif defined(FIRMWARE_4_66) // Ported by Habib, Joonie, Haxxxen and Aldostools

#define TOC						0x34F960 //

#define create_kernel_object_symbol			0x11FB0 //
#define destroy_kernel_object_symbol			0x11914 //
#define destroy_shared_kernel_object_symbol		0x11288 //
#define open_kernel_object_symbol			0x12600
#define open_shared_kernel_object_symbol		0x12410 //
#define close_kernel_object_handle_symbol		0x11A30 //

#define alloc_symbol					0x6479C //
#define dealloc_symbol					0x64BD8 //
#define copy_to_user_symbol				0xF86C //
#define copy_from_user_symbol				0xFA88 //
#define copy_to_process_symbol				0xF924 //
#define copy_from_process_symbol			0xF734 //
#define page_allocate_symbol				0x6030C //
#define page_free_symbol				0x5FD70 //
#define page_export_to_proc_symbol			0x604A8 //
#define page_unexport_from_proc_symbol			0x5FC64 //
#define kernel_ea_to_lpar_addr_symbol			0x700C4 //
#define process_ea_to_lpar_addr_ex_symbol		0x776D8 //
#define set_pte_symbol                                  0x5E308 // 
#define map_process_memory_symbol			0x771E4 //
#define panic_symbol					0x276258 //

#define memcpy_symbol					0x7E8A4 //
#define memset_symbol					0x4D66C //
#define memcmp_symbol					0x4C97C //
#define memchr_symbol					0x4C92C //
#define printf_symbol					0x27933C //
#define printfnull_symbol				0x27DDB0 //
#define sprintf_symbol					0x4EA94 //
#define snprintf_symbol					0x4EA00 //
#define strcpy_symbol					0x4D818 //
#define strncpy_symbol					0x4D8E0 //
#define strlen_symbol					0x4D840 //
#define strcat_symbol					0x4D748 //
#define strcmp_symbol					0x4D7C4 //
#define strncmp_symbol					0x4D86C //
#define strchr_symbol					0x4D780 //
#define strrchr_symbol					0x4D950 //

#define spin_lock_irqsave_ex_symbol			0x276428 //
#define spin_unlock_irqrestore_ex_symbol		0x2763FC //

#define create_process_common_symbol			0x2741C4 //
#define create_process_base_symbol			0x273880 //
#define load_process_symbol				0x5004 //
#define process_kill_symbol				0x273FD0 //

#define ppu_thread_create_symbol			0x13EC8 //
#define ppu_thread_exit_symbol				0x13F80 //
#define ppu_thread_join_symbol				0x13FD4 //
#define ppu_thread_delay_symbol				0x287A4 //
#define create_kernel_thread_symbol			0x24B20 //
#define create_user_thread_symbol			0x2525C //
#define create_user_thread2_symbol			0x25080 //
#define start_thread_symbol				0x23D4C //
#define run_thread_symbol				0x2357C // /* temp name */
#define register_thread_symbol				0x2705DC //
#define allocate_user_stack_symbol			0x270DC4 //
#define deallocate_user_stack_symbol			0x270D2C //

#define mutex_create_symbol				0x1363C //
#define mutex_destroy_symbol				0x135D4 //
#define mutex_lock_symbol				0x135CC //
#define mutex_lock_ex_symbol				0x1DB5C //
#define mutex_trylock_symbol				0x135C8 //
#define mutex_unlock_symbol				0x135C4 //

#define cond_create_symbol				0x137A8 //
#define cond_destroy_symbol				0x13758 //
#define cond_wait_symbol				0x13750 //
#define cond_wait_ex_symbol				0x1F148 //
#define cond_signal_symbol				0x1372C //
#define cond_signal_all_symbol				0x13708

#define semaphore_initialize_symbol			0x30C54 //
#define semaphore_wait_ex_symbol			0x3095C //
#define semaphore_trywait_symbol			0x30544 //
#define semaphore_post_ex_symbol			0x30690 //

#define event_port_create_symbol			0x13078 //
#define event_port_destroy_symbol			0x134E0 //
#define event_port_connect_symbol			0x13558 //
#define event_port_disconnect_symbol			0x13484 //
#define event_port_send_symbol				0x13070 //
#define event_port_send_ex_symbol			0x2B204 //

#define event_queue_create_symbol			0x13380 //
#define event_queue_destroy_symbol			0x13308 //
#define event_queue_receive_symbol			0x1314C //
#define event_queue_tryreceive_symbol			0x13218 //

#define cellFsOpen_symbol				0x2A0590 //
#define cellFsClose_symbol				0x2A03F8 //
#define cellFsRead_symbol				0x2A0534 //
#define cellFsWrite_symbol				0x2A04A0 //
#define cellFsLseek_symbol				0x29FB28 //
#define cellFsStat_symbol				0x29FDAC //
#define cellFsUtime_symbol                              0x2A1898 // Before it was 0x2A1084 // Thanks Habib!
#define cellFsUnlink_internal_symbol			0x19C4B4 //

#define cellFsUtilMount_symbol				0x29F908 //
#define cellFsUtilUmount_symbol                         0x29F8DC
#define cellFsUtilNewfs_symbol				0x2A1330 //

#define pathdup_from_user_symbol			0x1A23A8 //
#define	open_path_symbol				0x2A02C8 // Thanks Habib!
#define open_fs_object_symbol				0x18A7D8 //
#define close_fs_object_symbol				0x189714 //

#define storage_get_device_info_symbol			0x282790 //
#define storage_get_device_config_symbol		0x281C20 //
#define storage_open_symbol				0x2821A0 //
#define storage_close_symbol				0x281F90 //
#define storage_read_symbol				0x281500 //
#define storage_write_symbol				0x2813D0 //
#define storage_send_device_command_symbol		0x28108C //
#define storage_map_io_memory_symbol			0x28264C //
#define storage_unmap_io_memory_symbol			0x282518 //
#define new_medium_listener_object_symbol		0x9743C //
#define delete_medium_listener_object_symbol		0x98C74 //
#define set_medium_event_callbacks_symbol		0x98FD8 //

#define cellUsbdRegisterLdd_symbol			0x268F0C //
#define cellUsbdUnregisterLdd_symbol			0x268EBC //
#define cellUsbdScanStaticDescriptor_symbol		0x26A10C //
#define cellUsbdOpenPipe_symbol				0x26A1BC //
#define cellUsbdClosePipe_symbol			0x26A16C //
#define cellUsbdControlTransfer_symbol			0x26A070 //
#define cellUsbdBulkTransfer_symbol			0x269FF0 //

#define decrypt_func_symbol				0x34970 //
#define lv1_call_99_wrapper_symbol			0x4EEA8 //
#define modules_verification_symbol			0x58A4C //
#define authenticate_program_segment_symbol		0x5A888 //

#define prx_load_module_symbol				0x88B7C //
#define prx_start_module_symbol				0x87848 //
#define prx_stop_module_symbol				0x88C20 //
#define prx_unload_module_symbol			0x8757C //
#define prx_get_module_info_symbol			0x87004 //
#define prx_get_module_id_by_address_symbol		0x86F14 //
#define prx_get_module_id_by_name_symbol		0x86F64 //
#define prx_get_module_list_symbol			0x87084 //
#define load_module_by_fd_symbol			0x881AC //
#define parse_sprx_symbol				0x85F30 //
#define open_prx_object_symbol				0x7F470 //
#define close_prx_object_symbol				0x7FD80 //
#define lock_prx_mutex_symbol				0x86EBC //
#define unlock_prx_mutex_symbol				0x86EC8 //

#define extend_kstack_symbol				0x7001C //

#define get_pseudo_random_number_symbol			0x230E7C //
#define md5_reset_symbol				0x161C88 //
#define md5_update_symbol				0x162728 //
#define md5_final_symbol				0x1628A8 //
#define ss_get_open_psid_symbol				0x233364 //
#define update_mgr_read_eeprom_symbol			0x22C774 //
#define update_mgr_write_eeprom_symbol			0x22C6BC //

#define ss_params_get_update_status_symbol		0x50AB4 //

#define syscall_table_symbol				0x363A18 //
#define syscall_call_offset				0x27E894 //

#define read_bdvd0_symbol				0x1AD318 //
#define read_bdvd1_symbol				0x1AEF44 //
#define read_bdvd2_symbol				0x1BC0FC //

#define storage_internal_get_device_object_symbol	0x280B44 //

#define hid_mgr_read_usb_symbol				0x1023BC //
#define hid_mgr_read_bt_symbol				0xFC294 //

#define bt_set_controller_info_internal_symbol		0xF0300 /* just a name... *///FIXED!

/* Calls, jumps */
#define device_event_port_send_call			0x28ACFC //

#define ss_pid_call_1					0x21BF98 //

#define process_map_caller_call				0x4D24 //

#define read_module_header_call				0x7F364 //
#define read_module_body_call				0x671C //
#define load_module_by_fd_call1				0x88A18 //

#define shutdown_copy_params_call			0xAACC //

#define fsloop_open_call				0x2A0728 //
#define fsloop_close_call				0x2A0778 //
#define fsloop_read_call				0x2A07B8 //

/* Patches */
#define shutdown_patch_offset				0xAAB8 //
#define module_sdk_version_patch_offset			0x26FE0C //
#define module_add_parameter_to_parse_sprxpatch_offset	0x88288 //

#define user_thread_prio_patch				0x203FC //
#define user_thread_prio_patch2				0x20408 //

/* Rtoc entries */

#define io_rtoc_entry_1					-0x1F0 //
#define io_sub_rtoc_entry_1				-0x7EA0 //

#define decrypt_rtoc_entry_2 				-0x66A0 //
#define decrypter_data_entry				-0x7F10 //

#define storage_rtoc_entry_1				0x1DD8 //

#define device_event_rtoc_entry_1			0x2048 //

#define time_rtoc_entry_1				-0x7640 //
#define time_rtoc_entry_2				-0x7648 //

#define thread_rtoc_entry_1				-0x76C0 //

#define process_rtoc_entry_1				-0x7800 //

#define bt_rtoc_entry_1					-0x3680 //

/* Permissions */
#define permissions_func_symbol				0x3560  /* before it was patch_func5+patch_func5_offset *///
#define permissions_exception1 				0x25100 /* before it was patch_func6+patch6_func6_offset *///
#define permissions_exception2				0xC3210	/* before it was patch_func7+patch7_func7_offset */	//
#define permissions_exception3				0x204D0 /* Added in v 3.0 *///

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3E2BC0 //
#define patch_func2 					0x59CFC //
#define patch_func2_offset 				0x2C //
#define patch_func8 					0x5640C //lv2open update patch // Thanks Habib!
#define patch_func8_offset1 				0xA4 //lv2open update patch //
#define patch_func8_offset2 				0x208 //lv2open update patch //
#define patch_func9 					0x5A1B8 // must upgrade error //
#define patch_func9_offset 				0x4B8 // Thanks Habib!
#define mem_base2					0x3D90 //

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x37DBB0 //

#elif defined(FIRMWARE_4_66DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!

#define TOC						0x375510 //done

#define create_kernel_object_symbol			0x125F8 // bytes matched: 0x44  F821FF617C0802A6FB610078F80100B0E80308007C9B2378FB8100802FA00000
#define destroy_kernel_object_symbol			0x11F5C // bytes matched: 0x78  F821FF717C0802A6FB810070FBA10078FBC10080FBE10088F80100A07C681B78
#define destroy_shared_kernel_object_symbol		0x118D0 // bytes matched: 0x80  5480063E3D6080012B80007F540A2536616B00057D0A1A14409D000C7D6307B4
#define open_kernel_object_symbol			0x12C48 // bytes matched: 0x80  F821FF517C0802A6FBA10098FBC100A0FBE100A8789E8402789FC622789D0620
#define open_shared_kernel_object_symbol		0x12A58 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol		0x12078 // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0

#define alloc_symbol					0x6816C // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol					0x685A8 // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol				0xFEB4 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol				0x100D0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol				0xFF6C // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol			0xFD7C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol				0x63CDC // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol				0x63740 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol			0x63E78 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol			0x63634 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol			0x73C14 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define process_ea_to_lpar_addr_ex_symbol		0x7B7B4 // bytes matched: 0x80  F821FF517C0802A6FB610088F80100C0E96300087CBB2B78FB810090FBC100A0
#define set_pte_symbol					0x61CD8 // bytes matched: 0x70  F821FF217C0802A6FAE100987C771B787C8323787CA42B787D054378F80100F0
#define map_process_memory_symbol			0x7B2C0 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define panic_symbol					0x27E130 // bytes matched: 0x2C  F821FF717C0802A6FB810070FBA10078FBC10080FBE10088F80100A07F8C42E6

#define memcpy_symbol					0x82980 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol					0x51014 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol					0x50324 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define memchr_symbol					0x502D4 // bytes matched: 0x80  2C2500004182003C8803000039200000386300017F802000409E00184800002C
#define printf_symbol					0x281608 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol				0x286090 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol					0x5243C // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol					0x523A8 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol					0x511C0 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol					0x51288 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol					0x511E8 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol					0x510F0 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol					0x5116C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol					0x51214 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol					0x51128 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define strrchr_symbol					0x512F8 // bytes matched: 0x80  392000004800000C38630001419A0020880300007F8020002F000000409EFFEC

#define spin_lock_irqsave_ex_symbol			0x27E300 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol		0x27E2D4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020

#define create_process_common_symbol			0x27B0F8 // bytes matched: 0x80  F821FE517C0802A6FA410140FA610148EA410250EA610248FAC10160FB410180
#define create_process_base_symbol			0x27A790 // bytes matched: 0x18  F821FF117C0802A6FAC100A0FAE100A8FB0100B0FB2100B8
#define load_process_symbol				0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define process_kill_symbol				0x27AEF8 // bytes matched: 0x28  F821FF717C0802A6FBC10080FB810070FBA10078FBE10088F80100A07C7E1B78

#define ppu_thread_create_symbol			0x145FC // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                          0x146B4 // Verified with IDA by Joonie
#define ppu_thread_join_symbol				0x14708 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol				0x2A6E8 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_kernel_thread_symbol			0x267D0 // bytes matched: 0x80  F821FF117C0802A6550B0632F8010100550007FEFB2100B82F800000FB4100C0
#define create_user_thread_symbol			0x26F0C // bytes matched: 0x80  F821FF117C0802A6FB0100B0EB028B60FB8100D0EB810160F8010100FAC100A0
#define create_user_thread2_symbol			0x26D30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol				0x25868 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol				0x2502C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol				0x276F00 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol			0x2776E8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define deallocate_user_stack_symbol			0x277650 // bytes matched: 0x38  F821FF717C0802A6FBA10078F80100A0E80300307CBD2B78FBC100802FA00000

#define mutex_create_symbol				0x13C8C // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                            0x13C24 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A6952FA300003C008001
#define mutex_lock_symbol				0x13C1C // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_lock_ex_symbol				0x1F60C // bytes matched: 0x80  F821FF017C0802A6FB6100D87C7B1B78FB0100C0FB8100E0FBA100E8FBE100F8
#define mutex_trylock_symbol				0x13C18 // bytes matched: 0x14***  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                             0x13C14 // bytes matched: 0x6C  4800B1344800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F8010090

#define cond_create_symbol				0x13DF8 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC100807C9D23787C7E1B783880003638A00000
#define cond_destroy_symbol				0x13DA8 // bytes matched: 0x18  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_symbol				0x13DA0 // bytes matched: 0x18**  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_ex_symbol				0x20BF8 // bytes matched: 0x80  F821FEF17C0802A6FB6100E87C7B1B78FB2100D8FBA100F8FBC10100FBE10108
#define cond_signal_symbol				0x13D7C // bytes matched: 0x18****  E8010080386000007C0803A6382100704E80002038A00000
#define cond_signal_all_symbol				0x13754 // bytes matched: 0x20****  E8010080386000007C0803A6382100704E800020F821FF917C0802A6F8010080

#define semaphore_initialize_symbol			0x34574 // bytes matched: 0x80  F821FF717C0802A6FBA100787C7D1B78E9228F3838630018F80100A0F93D0000
#define semaphore_wait_ex_symbol			0x3427C // bytes matched: 0x38  F821FF117C0802A6FB6100C8FB8100D0FBA100D8FBC100E0FB0100B0FB2100B8
#define semaphore_trywait_symbol			0x33E64 // bytes matched: 0x38  F821FF717C0802A6FBC10080FB810070FBA10078FBE10088F80100A07C7E1B78
#define semaphore_post_ex_symbol			0x33FB0 // bytes matched: 0x80  F821FF417C0802A62F840000FBC100B03FC08001FB8100A0FBE100B8FAC10070

#define event_port_create_symbol			0x136C8 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                       0x13B30 // Verified with IDA by Joonie
#define event_port_connect_symbol			0x13BA8 // bytes matched: 0x30  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol			0x13AD4 // bytes matched: 0x28  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol				0x136C0 // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_send_ex_symbol			0x2D2C8 // bytes matched: 0x44  F821FF517C0802A6FBE100A87C7F1B78FBC100A03BC30018FB2100787FC3F378

#define event_queue_create_symbol			0x139D0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                      0x13958 // bytes matched: 0x34  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol			0x1379C // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define event_queue_tryreceive_symbol			0x13868 // bytes matched: 0x68  F821FF617C0802A63D208001F80100B038000000FBA10088F801007080030088

#define cellFsOpen_symbol				0x2BB2D8 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                              0x2BB140 // Verified with IDA by Joonie
#define cellFsRead_symbol				0x2BB27C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol				0x2BB1E8 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol				0x2BAA3C // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol				0x2BAAF4 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUtime_symbol				0x2BC464 // Verified with IDA
#define cellFsUnlink_internal_symbol			0x1A2840 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100

#define cellFsUtilMount_symbol				0x2BA7B0 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol				0x2BA784 // Verified with IDA by Joonie
#define cellFsUtilNewfs_symbol				0x2BC0FC // bytes matched: 0x1C  F821FF017C0802A6FBA100E83BA10070FB6100D8FBC100F07C9B2378

#define pathdup_from_user_symbol			0x1A8858 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                                0x2BB010 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                           0x190B64 // bytes matched: 0x48****  FB010090FB210098FB4100A0FB6100A8FB8100B0FBE100C8FBA100B87C9A2378
#define close_fs_object_symbol				0x18FAA0 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8

#define storage_get_device_info_symbol			0x295690 // bytes matched: 0x30  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_get_device_config_symbol		0x293D1C // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBA10078
#define storage_open_symbol                             0x2958B8 //  Verified with IDA by Joonie
#define storage_close_symbol                            0x2940A4 //  Verified with IDA by Joonie
#define storage_read_symbol                             0x293020 //  Verified with IDA by Joonie
#define storage_write_symbol                            0x292EF0 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FB0100C0FB2100C8FB4100D0FB6100D8
#define storage_send_device_command_symbol              0x292B40 //  Verified with IDA by Joonie
#define storage_map_io_memory_symbol                    0x29553C //  Verified with IDA by Joonie
#define storage_unmap_io_memory_symbol                  0x2953F8 //  Verified with IDA by Joonie
#define new_medium_listener_object_symbol		0x9CBAC // bytes matched: 0x48****  3880001DF80100A0FBC10080FBA1007838A00000EBDF000038600E002FBE0000
#define delete_medium_listener_object_symbol		0x9E3E4 // bytes matched: 0x40  F821FF817C0802A62C240000FBE100783FE08001FBC10070F80100907C9E2378
#define set_medium_event_callbacks_symbol		0x9E748 // bytes matched: 0x58  F821FF517C0802A6FB410080F80100C038000000FB610088FB8100907C9B2378

#define cellUsbdRegisterLdd_symbol			0x26F3E8 // Verified with IDA by Joonie
#define cellUsbdUnregisterLdd_symbol			0x26F398 // Verified with IDA by Joonie
#define cellUsbdScanStaticDescriptor_symbol		0x2705E8 // Verified with IDA by Joonie
#define cellUsbdOpenPipe_symbol				0x270698 // Verified with IDA by Joonie
#define cellUsbdClosePipe_symbol			0x270648 // Verified with IDA by Joonie
#define cellUsbdControlTransfer_symbol			0x27054C // Verified with IDA by Joonie
#define cellUsbdBulkTransfer_symbol			0x2704CC // Verified with IDA by Joonie

#define decrypt_func_symbol				0x38290 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol			0x52850 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol			0x5C41C // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define authenticate_program_segment_symbol		0x5E258 // Verified with IDA by Joonie

#define prx_load_module_symbol				0x8D280 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol				0x8BF4C // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol				0x8D324 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol			0x8BC80 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol			0x8B678 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_id_by_address_symbol		0x8B588 // bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A04BFFFF8D
#define prx_get_module_id_by_name_symbol		0x8B5D8 // bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A04BFFFF3D
#define prx_get_module_list_symbol			0x8B6F8 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define load_module_by_fd_symbol			0x8C8B0 // bytes matched: 0x64  7D800026F821FF11FAE100A8FB0100B0FB6100C8FAC100A0FB2100B8FB4100C0
#define parse_sprx_symbol				0x8A5A4 // bytes matched: 0x34  F821FF517C0802A6FB810090FBE100A87C7C1B787C9F23783860002038800000
#define open_prx_object_symbol				0x8354C // bytes matched: 0x18  F821FF917C0802A678840020F8010080E863020838E00023
#define close_prx_object_symbol				0x83E5C // bytes matched: 0x80**  2C2300007C0802A6F821FF81FBC10070FBE10078F80100907C7F1B787C9E2378
#define lock_prx_mutex_symbol				0x8B530 // Verified with IDA by Joonie
#define unlock_prx_mutex_symbol				0x8B53C // bytes matched: 0x1C***  F821FF717C0802A6FBA100787C7D1B78F80100A04BFFFFD57FA3EB78

#define extend_kstack_symbol				0x73B6C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78

#define get_pseudo_random_number_symbol                 0x237358 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define md5_reset_symbol				0x168014 // bytes matched: 0x80  3D2067453D60EFCD3D4098BA3C0010323900000061292301616BAB89614ADCFE
#define md5_update_symbol				0x168AB4 // bytes matched: 0x80  F821FF517C0802A654AB1838F80100C080030010FBC100A07D205A147C7E1B78
#define md5_final_symbol				0x168C34 // bytes matched: 0x54  F821FF617C0802A6FBE100987C9F2378FBC100903BC10070FBA1008838A00008
#define ss_get_open_psid_symbol				0x239840 // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A0480000F5
#define update_mgr_read_eeprom_symbol			0x232C38 // bytes matched: 0x80  F821FF317C0802A6FBE100C83BE10070FB8100B0FBA100B87C7C1B787CBD2B78
#define update_mgr_write_eeprom_symbol			0x232B6C // bytes matched: 0x80  F821FF217C0802A6FBE100D83BE10070FB6100B8FBA100C87C7B1B787CBD2B78

#define ss_params_get_update_status_symbol		0x5445C // bytes matched: 0x80  3CA070617C0802A63CC075703CE0737460A5726160C6646160E761742C230000

#define syscall_table_symbol				0x38A120 //done
#define syscall_call_offset				0x286B74 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028

#define read_bdvd0_symbol				0x1B37C8 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol				0x1B53F4 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol				0x1C25AC // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090

#define storage_internal_get_device_object_symbol       0x2925F8 //  Verified with IDA by Joonie

#define hid_mgr_read_usb_symbol				0x107EC0 // bytes matched: 0x74*  7C0802A6F821FF91F80100802F2400003800FFEB812B00002F890000409E0018
#define hid_mgr_read_bt_symbol				0x101D98 // Verified with IDA by Joonie

#define bt_set_controller_info_internal_symbol		0xF5E04 // bytes matched: 0x80  F821FF417C0802A62F85054CF80100D054C0043EFB410090FBA100A8FBC100B0

/* Calls, jumps */
#define device_event_port_send_call			0x29F88C //  Verified with IDA by Joonie

#define ss_pid_call_1					0x222448 // bytes matched: 0x14*  906100703881007838A1008038C100A038610070

#define process_map_caller_call				0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000

#define read_module_header_call				0x83440 // bytes matched: 0x50*  2F8300007C6307B4409E0008E8610070E8010090382100807C0803A64E800020
#define read_module_body_call				0x671C // bytes matched: 0x4C*  2F8300007C7F1B7840DE013CE80100887FBE000040DE0160FBDD0010E81C0018
#define load_module_by_fd_call1				0x8D11C // bytes matched: 0x30  4BFFF795801B000C7C7D1B78E87B00102F800000409DFFBC3BE300183BC00000

#define shutdown_copy_params_call			0xAB4C // bytes matched: 0x18*  2F830000409E005C7FC6F3787FA3EB78388000017F65DB78

#define fsloop_open_call				0x2BB470 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call				0x2BB4C0 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call				0x2BB500 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8

/* Patches */
#define shutdown_patch_offset				0xAB38 // bytes matched: 0x14  600000044182FEFC7F83E3787F64DB787FC5F378
#define module_sdk_version_patch_offset			0x276528 // bytes matched: 0x2C  419D0008386000007C6307B44E800020800400047F804800409EFFEC80040008
#define module_add_parameter_to_parse_sprxpatch_offset	0x8C98C // bytes matched: 0x80  90030198FB4301A8FB4301A0934301B8FB4301C8FB4301C04BFFDC012F830000

#define user_thread_prio_patch				0x21EAC // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2				0x21EB8 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6

/* Rtoc entries */

#define io_rtoc_entry_1					-0xC0 //found at 0x1A5A03 FF40E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1				-0x7EA0 //found at 0x16AD7B 8160E97E8168EB9E8140EBBE8170

#define decrypt_rtoc_entry_2 				-0x65C0 //found at 0x5D1FB 9A404BFFBCAD392000004BFFFFCC2C2400007C0802A6
#define decrypter_data_entry				-0x7F10 //done //UNTOUCHED

#define storage_rtoc_entry_1				0x22B0 //found at 0x292883 22B07C0802A6F821FF51F80100C0FBE100A87C9F23

#define device_event_rtoc_entry_1			0x2638 //found at 0x29F877 263878050620E8CA00387D052B78E92B0000

#define time_rtoc_entry_1				-0x75E0 //done //NOT FOUND
#define time_rtoc_entry_2				-0x75E8 //done //NOT FOUND

#define thread_rtoc_entry_1				-0x7660 //found at 0x21837 89A080090000900100704BFFFFE0

#define process_rtoc_entry_1				-0x77A0 //found at 0x1BC07 88603FC0800163DE0005E87D0000

#define bt_rtoc_entry_1					-0x3558 //found at 0xF480F CAA838A0000048001F617FA4EB78

/* Permissions */
#define permissions_func_symbol				0x3560 // bytes matched: 0x6C  E92280087C0802A6F821FF21FBA100C8FBC100D0FBE100D8E8E900187C9F2378
#define permissions_exception1 				0x26DB0 // bytes matched: 0x38*  5463063E2F830000419E0114EBA28B50EB628B607FA4EB783BE00000E87B0000
#define permissions_exception2				0xC8980 // bytes matched: 0x34*  E80100A0786306207C0803A6382100903863FFFF78630FE07C6300345463D97E
#define permissions_exception3				0x21F80 // bytes matched: 0x78*  5463063E2F830000419E01F8E96289A07D3042A6E8690048E90100B841920258

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x4095C0 // Below IDPS in LV2
#define patch_func2 					0x5D6CC // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset 				0x2C
#define patch_func8 					0x59DDC // Verified with IDA by Joonie
#define patch_func8_offset1 				0xA4 // bytes matched: 0x68  0000000000000000000000000000000000000000000000000000000000000000
#define patch_func8_offset2 				0x208 // bytes matched: 0x80  4800000000000000000000000000000000000000000000000000000000000000
#define patch_func9 					0x5DB88 // bytes matched: 0x68  F821FD017C0802A6FBA102E8787D0660FAA102A82FBD0000FB0102C0FB2102C8
#define patch_func9_offset 				0x438 // Verified with IDA by Joonie
#define mem_base2					0x3D90 // bytes matched: 0x24  F821FEB17C0802A6FB8101307C9C2378388100D8FBE10148FBA10138FBC10140

/* vars */
#define thread_info_symbol                              0x3A45B0// Found by Joonie

#elif defined(FIRMWARE_4_70) 

#define TOC							0x34FB10 //done

#define create_kernel_object_symbol			0x11FAC 
#define destroy_kernel_object_symbol			0x11910
#define destroy_shared_kernel_object_symbol		0x11284 
#define open_kernel_object_symbol			0x125FC
#define open_shared_kernel_object_symbol		0x1240C
#define close_kernel_object_handle_symbol		0x11A2C

#define alloc_symbol					0x64820
#define dealloc_symbol					0x64C5C
#define copy_to_user_symbol				0xF868
#define copy_from_user_symbol				0xFA84
#define copy_to_process_symbol				0xF920
#define copy_from_process_symbol			0xF730
#define page_allocate_symbol				0x60390
#define page_free_symbol					0x5FDF4
#define page_export_to_proc_symbol			0x6052C
#define page_unexport_from_proc_symbol		0x5FCE8 
#define kernel_ea_to_lpar_addr_symbol			0x70148
#define process_ea_to_lpar_addr_ex_symbol		0x7775C
#define set_pte_symbol                                              0x5E38C
#define map_process_memory_symbol			0x77268
#define panic_symbol					0x26D550

#define memcpy_symbol					0x7E928
#define memset_symbol					0x4D668
#define memcmp_symbol					0x4C978
#define memchr_symbol					0x4C928
#define printf_symbol					0x270634
#define printfnull_symbol					0x2750A8
#define sprintf_symbol					0x4EA90
#define snprintf_symbol					0x4E9FC
#define strcpy_symbol					0x4D814
#define strncpy_symbol					0x4D8DC
#define strlen_symbol					0x4D83C
#define strcat_symbol					0x4D744
#define strcmp_symbol					0x4D7C0
#define strncmp_symbol					0x4D868
#define strchr_symbol					0x4D77C
#define strrchr_symbol					0x4D94C

#define spin_lock_irqsave_ex_symbol			0x26D720
#define spin_unlock_irqrestore_ex_symbol		0x26D6F4

#define create_process_common_symbol			0x26B4BC
#define create_process_base_symbol			0x26AB78
#define load_process_symbol				0x5004
#define process_kill_symbol				0x26B2C8

#define ppu_thread_create_symbol			0x13EC4
#define ppu_thread_exit_symbol				0x13F7C
#define ppu_thread_join_symbol				0x13FD0
#define ppu_thread_delay_symbol				0x287A0
#define create_kernel_thread_symbol			0x24B1C
#define create_user_thread_symbol			0x25258
#define create_user_thread2_symbol			0x2507C
#define start_thread_symbol				0x23D48
#define run_thread_symbol					0x23578
#define register_thread_symbol				0x2678D4
#define allocate_user_stack_symbol			0x2680BC
#define deallocate_user_stack_symbol			0x268024

#define mutex_create_symbol				0x13638
#define mutex_destroy_symbol				0x135D0
#define mutex_lock_symbol					0x135C8
#define mutex_lock_ex_symbol				0x1DB58
#define mutex_trylock_symbol				0x135C4
#define mutex_unlock_symbol				0x135C0

#define cond_create_symbol				0x137A4
#define cond_destroy_symbol				0x13754
#define cond_wait_symbol					0x1374C
#define cond_wait_ex_symbol				0x1F144
#define cond_signal_symbol				0x13728
#define cond_signal_all_symbol				0x13704

#define semaphore_initialize_symbol			0x30C50
#define semaphore_wait_ex_symbol			0x30958
#define semaphore_trywait_symbol			0x30540
#define semaphore_post_ex_symbol			0x3068C

#define event_port_create_symbol				0x13074
#define event_port_destroy_symbol			0x134DC
#define event_port_connect_symbol			0x13554
#define event_port_disconnect_symbol			0x13480
#define event_port_send_symbol				0x1306C
#define event_port_send_ex_symbol			0x2B200

#define event_queue_create_symbol			0x1337C
#define event_queue_destroy_symbol			0x13304
#define event_queue_receive_symbol			0x13148
#define event_queue_tryreceive_symbol			0x13214

#define cellFsOpen_symbol				0x297888 
#define cellFsClose_symbol				0x2976F0 
#define cellFsRead_symbol					0x29782C
#define cellFsWrite_symbol					0x297798
#define cellFsLseek_symbol				0x296E20
#define cellFsStat_symbol					0x2970A4 
#define cellFsUtime_symbol 				0x298B90
#define cellFsUnlink_internal_symbol			0x19C644

#define cellFsUtilMount_symbol				0x296C00
#define cellFsUtilUmount_symbol 			0x296BD4
#define cellFsUtilNewfs_symbol				0x298628

#define pathdup_from_user_symbol			0x29C86C
#define	open_path_symbol				0x2975C0 
#define open_fs_object_symbol				0x18A968
#define close_fs_object_symbol				0x1898A4

#define storage_get_device_info_symbol			0x279A88
#define storage_get_device_config_symbol		0x278F18
#define storage_open_symbol				0x279498 
#define storage_close_symbol				0x279288 
#define storage_read_symbol				0x2787F8
#define storage_write_symbol				0x2786C8
#define storage_send_device_command_symbol		0x278384
#define storage_map_io_memory_symbol			0x279944
#define storage_unmap_io_memory_symbol		0x279810
#define new_medium_listener_object_symbol		0x974BC
#define delete_medium_listener_object_symbol		0x98CF4
#define set_medium_event_callbacks_symbol		0x99058

#define cellUsbdRegisterLdd_symbol			0x260208
#define cellUsbdUnregisterLdd_symbol			0x2601B8
#define cellUsbdScanStaticDescriptor_symbol		0x261408 
#define cellUsbdOpenPipe_symbol			0x2614B8 
#define cellUsbdClosePipe_symbol			0x261468
#define cellUsbdControlTransfer_symbol			0x26136C
#define cellUsbdBulkTransfer_symbol			0X2612EC

#define decrypt_func_symbol				0x3496C
#define lv1_call_99_wrapper_symbol			0x4EEA4
#define modules_verification_symbol			0x58AB4
#define authenticate_program_segment_symbol		0x5A90C

#define prx_load_module_symbol				0x88C00
#define prx_start_module_symbol				0x878CC
#define prx_stop_module_symbol				0x88CA4
#define prx_unload_module_symbol			0x87600
#define prx_get_module_info_symbol			0x87088
#define prx_get_module_id_by_address_symbol		0x86F98
#define prx_get_module_id_by_name_symbol		0x86FE8
#define prx_get_module_list_symbol			0x87108
#define load_module_by_fd_symbol			0x88230
#define parse_sprx_symbol					0x85FB4
#define open_prx_object_symbol				0x7F4F4
#define close_prx_object_symbol				0x7FE04
#define lock_prx_mutex_symbol				0x86F40
#define unlock_prx_mutex_symbol				0x86F4C

#define extend_kstack_symbol				0x700A0 

#define get_pseudo_random_number_symbol		0x228178
#define md5_reset_symbol					0x161E18
#define md5_update_symbol				0x1628B8
#define md5_final_symbol					0x162A38
#define ss_get_open_psid_symbol				0x22A660
#define update_mgr_read_eeprom_symbol		0x223A70
#define update_mgr_write_eeprom_symbol		0x2239B8

#define ss_params_get_update_status_symbol		0x50AB0

#define syscall_table_symbol				0x363B60
#define syscall_call_offset					0x275B8C

#define read_bdvd0_symbol				0x1A4614
#define read_bdvd1_symbol				0x1A6240
#define read_bdvd2_symbol				0x1B33F8

#define storage_internal_get_device_object_symbol	0x277E3C

#define hid_mgr_read_usb_symbol			0x10243C
#define hid_mgr_read_bt_symbol				0xFC314

#define bt_set_controller_info_internal_symbol		0xF0380

/* Calls, jumps */
#define device_event_port_send_call			0x281FF4

#define ss_pid_call_1					0x213294

#define process_map_caller_call				0x4D24

#define read_module_header_call				0x7F3E8
#define read_module_body_call				0x671C
#define load_module_by_fd_call1				0x88A9C

#define shutdown_copy_params_call			0xAACC

#define fsloop_open_call					0x297A20
#define fsloop_close_call					0x297A70
#define fsloop_read_call					0x297AB0

/* Patches */
#define shutdown_patch_offset				0xAAB8
#define module_sdk_version_patch_offset		0x267104
#define module_add_parameter_to_parse_sprxpatch_offset	0x8830C

#define user_thread_prio_patch				0x203F8
#define user_thread_prio_patch2				0x20404

#define lic_patch						0x5622c
#define ode_patch						0x2275ec

/* Rtoc entries */

#define io_rtoc_entry_1					-0xDA50 
#define io_sub_rtoc_entry_1				-0x7EA0 
#define decrypt_rtoc_entry_2 				-0x66A0  
#define decrypter_data_entry				-0x7F10 

#define storage_rtoc_entry_1				0x1DD0

#define device_event_rtoc_entry_1			0x2040

#define time_rtoc_entry_1					-0x7640  
#define time_rtoc_entry_2					-0x7648  

#define thread_rtoc_entry_1				-0x76C0  

#define process_rtoc_entry_1				-0x7800 

#define bt_rtoc_entry_1					-0x3680 

/* Permissions */
#define permissions_func_symbol				0x3560 
#define permissions_exception1 				0x250FC
#define permissions_exception2				0xC3290
#define permissions_exception3				0x204CC

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3E2DC0 
#define patch_func2 					0x59D80
#define patch_func2_offset 				0x2C 
#define patch_func8 					0x56408 
#define patch_func8_offset1 				0xA4
#define patch_func8_offset2 				0x208
#define patch_func9 					0x5A23C
#define patch_func9_offset 				0x4B8
#define mem_base2						0x3D90  

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x37DDB0

#elif defined(FIRMWARE_4_70DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!

#define TOC						0x375850 //done

#define create_kernel_object_symbol			0x125F4 //IDA
#define open_shared_kernel_object_symbol		0x12A54 // IDA
#define destroy_kernel_object_symbol			0x11F58 // IDA
#define destroy_shared_kernel_object_symbol		0x118CC //IDA
#define open_kernel_object_symbol			0x12C44 //IDA
#define open_shared_kernel_object_symbol		0x12A54 // IDA
#define close_kernel_object_handle_symbol		0x12074 // IDA

#define alloc_symbol					0x681F0 // IDA
#define dealloc_symbol					0x6862C // IDA
#define copy_to_user_symbol				0xFEB0 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol				0x100CC //IDA
#define copy_to_process_symbol				0xFF68 //IDA
#define copy_from_process_symbol			0xFD78 // /IDA
#define page_allocate_symbol				0x63D60 //  IDA
#define page_free_symbol				0x637C4 //  IDA
#define page_export_to_proc_symbol			0x63EFC // IDA
#define page_unexport_from_proc_symbol			0x636B8 // IDA
#define kernel_ea_to_lpar_addr_symbol			0x73C98 // IDA
#define process_ea_to_lpar_addr_ex_symbol		0x7B838 //  IDA
#define set_pte_symbol					0x61D5C //  IDA
#define map_process_memory_symbol			0x7B344 // IDA
#define panic_symbol					0x275428 // IDA

#define memcpy_symbol					0x82A04 // IDA
#define memset_symbol					0x51010 // IDA
#define memcmp_symbol					0x50320 // IDA
#define memchr_symbol					0x502D0 // IDA
#define printf_symbol					0x278900 //  IDA
#define printfnull_symbol				0x27D388 // IDA
#define sprintf_symbol					0x52438 //  IDA
#define snprintf_symbol					0x523A4 //  IDA
#define strcpy_symbol					0x511BC //  IDA
#define strncpy_symbol					0x51284 //  IDA
#define strlen_symbol					0x511E4 //  IDA
#define strcat_symbol					0x510EC //  IDA
#define strcmp_symbol					0x51168 //  IDA
#define strncmp_symbol					0x51210 //  IDA
#define strchr_symbol					0x51124 //  IDA
#define strrchr_symbol					0x512F4 //  IDA

#define spin_lock_irqsave_ex_symbol			0x2755F8 // Verified with IDA by Joonie
#define spin_unlock_irqrestore_ex_symbol		0x2755CC // Verified with IDA by Joonie

#define create_process_common_symbol			0x2723F0 //  IDA
#define create_process_base_symbol			0x271A88 // IDA
#define load_process_symbol				0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define process_kill_symbol				0x2721F0 // IDA

#define ppu_thread_create_symbol			0x145F8 // IDA
#define ppu_thread_exit_symbol                          0x146B0 // IDA
#define ppu_thread_join_symbol				0x14704 //  IDA
#define ppu_thread_delay_symbol				0x2A6E4 //  IDA
#define create_kernel_thread_symbol			0x267CC // IDA
#define create_user_thread_symbol			0x26F08 // IDA
#define create_user_thread2_symbol			0x26D2C // Verified with IDA by Joonie
#define start_thread_symbol				0x25864 // Verified with IDA by Joonie
#define run_thread_symbol				0x25028 // Verified with IDA by Joonie
#define register_thread_symbol				0x26E1F8 // Verified with IDA by Joonie
#define allocate_user_stack_symbol			0x26E9E0 // Verified with IDA by Joonie
#define deallocate_user_stack_symbol			0x26E948 //  IDA

#define mutex_create_symbol				0x13C88 // Verified with IDA by Joonie
#define mutex_destroy_symbol                            0x13C20 // Verified with IDA by Joonie
#define mutex_lock_symbol				0x13C18 // Verified with IDA by Joonie
#define mutex_lock_ex_symbol				0x1F608 // bytes matched: 0x80  F821FF017C0802A6FB6100D87C7B1B78FB0100C0FB8100E0FBA100E8FBE100F8
#define mutex_trylock_symbol				0x13C14 // bytes matched: 0x68  4800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                             0x13C10 //Verified with IDA by Joonie

#define cond_create_symbol				0x13DF4 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC100807C9D23787C7E1B783880003638A00000
#define cond_destroy_symbol				0x13DA4 // bytes matched: 0x30  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A04800C6A97C7F1B78
#define cond_wait_symbol				0x13D9C // bytes matched: 0x38  38A000004800CE54F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_ex_symbol				0x20BF4 // bytes matched: 0x80  F821FEF17C0802A6FB6100E87C7B1B78FB2100D8FBA100F8FBC10100FBE10108
#define cond_signal_symbol				0x13D78 // bytes matched: 0x5C  F821FF917C0802A6F80100804800CC89E8010080386000007C0803A638210070
#define cond_signal_all_symbol				0x13750 // bytes matched: 0x80  F821FF917C0802A6F80100804801A131E8010080386000007C0803A638210070

#define semaphore_initialize_symbol			0x34570 // bytes matched: 0x80  F821FF717C0802A6FBA100787C7D1B78E9228F3838630018F80100A0F93D0000
#define semaphore_wait_ex_symbol			0x34278 // bytes matched: 0x58  F821FF117C0802A6FB6100C8FB8100D0FBA100D8FBC100E0FB0100B0FB2100B8
#define semaphore_trywait_symbol			0x33E60 // bytes matched: 0x40  F821FF717C0802A6FBC10080FB810070FBA10078FBE10088F80100A07C7E1B78
#define semaphore_post_ex_symbol			0x33FAC // bytes matched: 0x80  F821FF417C0802A62F840000FBC100B03FC08001FB8100A0FBE100B8FAC10070

#define event_port_create_symbol			0x136C4 // Verified with IDA by Joonie
#define event_port_destroy_symbol                       0x13B2C //  Verified with IDA by Joonie
#define event_port_connect_symbol			0x13BA4 // Verified with IDA by Joonie
#define event_port_disconnect_symbol			0x13AD0 // Verified with IDA by Joonie
#define event_port_send_symbol				0x136BC // Verified with IDA by Joonie
#define event_port_send_ex_symbol			0x2D2C4 // bytes matched: 0x44  F821FF517C0802A6FBE100A87C7F1B78FBC100A03BC30018FB2100787FC3F378

#define event_queue_create_symbol			0x139CC //  Verified with IDA by Joonie
#define event_queue_destroy_symbol                      0x13954 //  Verified with IDA by Joonie
#define event_queue_receive_symbol			0x13798 //  Verified with IDA by Joonie
#define event_queue_tryreceive_symbol			0x13864 // bytes matched: 0x80  F821FF617C0802A63D208001F80100B038000000FBA10088F801007080030088

#define cellFsOpen_symbol				0x2B2748 //  Verified with IDA by Joonie
#define cellFsClose_symbol                              0x2B25B0 //   Verified with IDA by Joonie
#define cellFsRead_symbol				0x2B26EC //  Verified with IDA by Joonie
#define cellFsWrite_symbol				0x2B2658 //  Verified with IDA by Joonie
#define cellFsLseek_symbol				0x2B1EAC //  Verified with IDA by Joonie
#define cellFsStat_symbol				0x2B1F64 //  Verified with IDA by Joonie
#define cellFsUtime_symbol				0x2B38D4 // //0x2B1F64 (already found in #define cellFsStat_symbol) 0x2BC464  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol			0x1A29D0 //  Verified with IDA by Joonie

#define cellFsUtilMount_symbol				0x2B1C20 //  Verified with IDA by Joonie
#define cellFsUtilUmount_symbol				0x2B1BF4 //  Verified with IDA by Joonie
#define cellFsUtilNewfs_symbol				0x2B356C //  Verified with IDA by Joonie

#define pathdup_from_user_symbol			0x2B7A0C //  Verified with IDA by Joonie
#define open_path_symbol                                0x2B2480 //  Verified with IDA by Joonie
#define open_fs_object_symbol                           0x190CF4 //  Verified with IDA by Joonie
#define close_fs_object_symbol				0x18FC30 //  Verified with IDA by Joonie

#define storage_get_device_info_symbol			0x28C988 //  Verified with IDA by Joonie
#define storage_get_device_config_symbol		0x28B014 // Verified with IDA by Joonie
#define storage_open_symbol                             0x28CBB0 //  Verified with IDA by Joonie
#define storage_close_symbol                            0x28B39C //  Verified with IDA by Joonie
#define storage_read_symbol                             0x28A318 //  Verified with IDA by Joonie
#define storage_write_symbol                            0x28A1E8 // Verified with IDA by Joonie
#define storage_send_device_command_symbol              0x289E38 //  Verified with IDA by Joonie
#define storage_map_io_memory_symbol                    0x28C834 //  Verified with IDA by Joonie
#define storage_unmap_io_memory_symbol                  0x28C6F0 //  Verified with IDA by Joonie
#define new_medium_listener_object_symbol		0x9CC2C // Verified with IDA by Joonie
#define delete_medium_listener_object_symbol		0x9E464 // Verified with IDA by Joonie
#define set_medium_event_callbacks_symbol		0x9E7C8 // Verified with IDA by Joonie

#define cellUsbdRegisterLdd_symbol			0x2666E4 // IDA
#define cellUsbdUnregisterLdd_symbol			0x266694 // IDA
#define cellUsbdScanStaticDescriptor_symbol		0x2678E4 // IDA
#define cellUsbdOpenPipe_symbol			        0x267994 // IDA
#define cellUsbdClosePipe_symbol			0x267944 // IDA
#define cellUsbdControlTransfer_symbol			0x267848 // IDA
#define cellUsbdBulkTransfer_symbol			0x2677C8 // IDA

#define decrypt_func_symbol				0x3828C //  Verified with IDA by Joonie
#define lv1_call_99_wrapper_symbol			0x5284C //  Verified with IDA by Joonie
#define modules_verification_symbol			0x5C484 //  Verified with IDA by Joonie
#define authenticate_program_segment_symbol		0x5E2DC //  Verified with IDA by Joonie

#define prx_load_module_symbol				0x8D304 //  Verified with IDA by Joonie
#define prx_start_module_symbol				0x8BFD0 //  Verified with IDA by Joonie
#define prx_stop_module_symbol				0x8D3A8 //  Verified with IDA by Joonie
#define prx_unload_module_symbol			0x8BD04 // IDA
#define prx_get_module_info_symbol			0x8B6FC //  Verified with IDA by Joonie
#define prx_get_module_id_by_address_symbol		0x8B60C // IDA
#define prx_get_module_id_by_name_symbol		0x8B65C // IDA
#define prx_get_module_list_symbol			0x8B77C //  Verified with IDA by Joonie
#define load_module_by_fd_symbol			0x8C934 // Verified with IDA by Joonie
#define parse_sprx_symbol				0x8A628 // Verified with IDA by Joonie
#define open_prx_object_symbol				0x835D0 //  Verified with IDA by Joonie
#define close_prx_object_symbol				0x83EE0 // Verified with IDA by Joonie
#define lock_prx_mutex_symbol				0x8B5B4 // Verified with IDA by Joonie
#define unlock_prx_mutex_symbol				0x8B5C0 // Verified with IDA by Joonie

#define extend_kstack_symbol				0x73BF0 // IDA

#define get_pseudo_random_number_symbol                 0x22E654 //  Verified with IDA by Joonie
#define md5_reset_symbol				0x1681A4 //IDA
#define md5_update_symbol				0x168C44 // IDA
#define md5_final_symbol				0x168DC4 // IDA
#define ss_get_open_psid_symbol				0x230B3C //IDA
#define update_mgr_read_eeprom_symbol			0x229F34 // IDA
#define update_mgr_write_eeprom_symbol			0x229E68 // IDA

#define ss_params_get_update_status_symbol		0x54458 // IDA

#define syscall_table_symbol				0x38A368 //done
#define syscall_call_offset				0x27DE6C // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028

#define read_bdvd0_symbol				0x1AAAC4 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol				0x1AC6F0  //  Verified with IDA by Joonie
#define read_bdvd2_symbol				0x1B98A8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090

#define storage_internal_get_device_object_symbol       0x2898F0 //   Verified with IDA by Joonie

#define hid_mgr_read_usb_symbol				0x107F40 // bytes matched: 0x78  E962D1C07C0802A6F821FF91F80100802F2400003800FFEB812B00002F890000
#define hid_mgr_read_bt_symbol				0x101E18 // bytes matched: 0x48  F821FF517C0802A6FB410080EB42CF88F80100C0FB610088FBA10098FBC100A0

#define bt_set_controller_info_internal_symbol		0xF5E84 // bytes matched: 0x80  F821FF417C0802A62F85054CF80100D054C0043EFB410090FBA100A8FBC100B0

/* Calls, jumps */
#define device_event_port_send_call			0x296B84 // IDA

#define ss_pid_call_1					0x219744 //IDA

#define process_map_caller_call				0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000

#define read_module_header_call				0x834C4 // bytes matched: 0x50*  2F8300007C6307B4409E0008E8610070E8010090382100807C0803A64E800020
#define read_module_body_call				0x671C // bytes matched: 0x4C*  2F8300007C7F1B7840DE013CE80100887FBE000040DE0160FBDD0010E81C0018
#define load_module_by_fd_call1				0x8D1A0 // bytes matched: 0x80  4BFFF795801B000C7C7D1B78E87B00102F800000409DFFBC3BE300183BC00000

#define shutdown_copy_params_call			0xAB4C // bytes matched: 0x18*  2F830000409E005C7FC6F3787FA3EB78388000017F65DB78

#define fsloop_open_call				0x2B28E0 //   Verified with IDA by Joonie CellFsOpen
#define fsloop_close_call				0x2B2930 //   Verified with IDA by Joonie CellFsClose
#define fsloop_read_call				0x2B2970 //   Verified with IDA by Joonie CellFsRead

/* Patches */
#define shutdown_patch_offset				0xAB38 // bytes matched: 0x14  600000044182FEFC7F83E3787F64DB787FC5F378
#define module_sdk_version_patch_offset			0x26D820 // bytes matched: 0x2C  419D0008386000007C6307B44E800020800400047F804800409EFFEC80040008
#define module_add_parameter_to_parse_sprxpatch_offset	0x8CA10 // bytes matched: 0x80  90030198FB4301A8FB4301A0934301B8FB4301C8FB4301C04BFFDC012F830000

#define user_thread_prio_patch				0x21EA8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2				0x21EB4 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
// ODE Protection Removal patches
#define lic_patch						0x59BFC
#define ode_patch						0x22DAC8

/* Rtoc entries */

#define io_rtoc_entry_1					-0xD148 //found at 0x2B4BB7 2EB8E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1				-0x7EA0 //found at 0x16AF0B 8160E97E8168EB9E8140EBBE8170

#define decrypt_rtoc_entry_2 				-0x65C0 //found at 0x5D27F 9A404BFFBC25392000004BFFFFCC2C2400007C0802A6
#define decrypter_data_entry				-0x7F10 //done //UNTOUCHED //UNTOUCHED

#define storage_rtoc_entry_1				0x22A8 //found at 0x289B7B 22A87C0802A6F821FF51F80100C0FBE100A87C9F23

#define device_event_rtoc_entry_1			0x2630 //found at 0x296B6F 263078050620E8CA00387D052B78E92B0000

#define time_rtoc_entry_1				-0x75E0 //done //NOT FOUND //NOT FOUND
#define time_rtoc_entry_2				-0x75E8 //done //NOT FOUND //NOT FOUND

#define thread_rtoc_entry_1				-0x7660 //found at 0x21833 89A080090000900100704BFFFFE0

#define process_rtoc_entry_1				-0x77A0 //found at 0x1BC03 88603FC0800163DE0005E87D0000

#define bt_rtoc_entry_1					-0x3558 //found at 0xF488F CAA838A0000048001F617FA4EB78

/* Permissions */
#define permissions_func_symbol				0x3560 // bytes matched: 0x6C  E92280087C0802A6F821FF21FBA100C8FBC100D0FBE100D8E8E900187C9F2378
#define permissions_exception1 				0x26DAC // bytes matched: 0x38*  5463063E2F830000419E0114EBA28B50EB628B607FA4EB783BE00000E87B0000
#define permissions_exception2				0xC8A00 // bytes matched: 0x74*  E80100A0786306207C0803A6382100903863FFFF78630FE07C6300345463D97E
#define permissions_exception3				0x21F7C // bytes matched: 0x80*  5463063E2F830000419E01F8E96289A07D3042A6E8690048E90100B841920258

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x4098C0 // offset found after the first idps on LV2 dump
#define patch_func2 					0x5D750 //   Verified with IDA by Joonie
#define patch_func2_offset 				0x2C
#define patch_func8 					0x59DD8 // Verified with IDA by Joonie
#define patch_func8_offset1 				0xA4 // bytes matched: 0x68  0000000000000000000000000000000000000000000000000000000000000000
#define patch_func8_offset2 				0x208 // bytes matched: 0x80  4800000000000000000000000000000000000000000000000000000000000000
#define patch_func9 					0x5DC0C //Verified with IDA by Joonie
#define patch_func9_offset 				0x438 // bytes matched: 0x7C****  0000000000000000000000000000000000000000000000000000000000000000
#define mem_base2					0x3D90 // bytes matched: 0x24  F821FEB17C0802A6FB8101307C9C2378388100D8FBE10148FBA10138FBC10140

/* vars */
#define thread_info_symbol                              0x3A48B0 // Found by Joonie

#endif /* FIRMWARE */

#endif /* __FIRMWARE_SYMBOLS_H_S__ */

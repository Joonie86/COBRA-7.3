/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __PS2EMU_SYMBOLS_H_S__
#define __PS2EMU_SYMBOLS_H_S__

#if defined(FIRMWARE_3_41)

#if defined(PS2HWEMU)

#define TOC					0x4E9A28

#define cdvd_send_atapi_command_symbol		0x21FC4

#define ufs_open_symbol				0x4DF14
#define ufs_close_symbol			0x4E658
#define ufs_read_symbol				0x4DA00
#define ufs_write_symbol			0x4DAF4
#define ufs_fstat_symbol			0x4E95C

#define zeroalloc_symbol			0xFDDE8
#define malloc_symbol				0xFDD00
#define free_symbol				0xFDE40
#define memcpy_symbol				0xDFAC
#define memset_symbol				0xD488
#define strcpy_symbol				0xED04
#define strncpy_symbol				0xED30
#define strcat_symbol				0xEED0
#define strlen_symbol				0xECD8
#define strcmp_symbol				0xED94
#define strncmp_symbol				0xEDE8
#define strchr_symbol				0xEE50
#define strrchr_symbol				0xEE8C

#define ps2_disc_auth_symbol			0x2053C

#define overwritten_symbol			0x23BF8

#elif defined(PS2GXEMU)

#define TOC					0x676460

#define cdvd_read_symbol			0x8E33C
#define cdvd_send_atapi_command_symbol		0x8D910
#define cdvd_send_device_command_symbol		0x8D824

#define ufs_open_symbol				0x24EA48
#define ufs_close_symbol			0x24F1B0
#define ufs_read_symbol				0x24E758
#define ufs_write_symbol			0x24E8D0
#define ufs_fstat_symbol			0x24E598

#define printf_symbol				0x1E4854

#define zeroalloc_symbol			0x1E47A4
#define malloc_symbol				0x1E4744
#define free_symbol				0x1E47F0
#define memcpy_symbol				0x514BC
#define memset_symbol				0x51528
#define snprintf_symbol				0x52360
#define strcpy_symbol				0x51600
#define strncpy_symbol				0x99AD0
#define strcat_symbol				0x51634
#define strlen_symbol				0x515C8
#define strcmp_symbol				0x99AFC
#define strchr_symbol				0x99A5C
#define strrchr_symbol				0x99A90

#define vuart_read_symbol			0x49544
#define vuart_write_symbol			0x494A4

#define ps2_disc_auth_symbol			0x8FF8C

#define overwritten_symbol			0x8c968

/* Calls */
#define reboot_parameters_vuart_call		0x58C0C

/* Vars */
#define arguments_symbol			0x6E5198

#elif defined(PS2SOFTEMU)

#define TOC					0x5C8C00

#define cdvd_send_atapi_command_symbol		0x88C88
#define cdvd_send_device_command_symbol		0x88B9C

#define ufs_open_symbol				0x1AABBC
#define ufs_close_symbol			0x1AB334
#define ufs_read_symbol				0x1AA89C
#define ufs_write_symbol			0x1AAA2C
#define ufs_fstat_symbol			0x1AA6E8

#define zeroalloc_symbol			0x1447A0
#define malloc_symbol				0x144740
#define free_symbol				0x1447EC
#define memcpy_symbol				0x4AF8C
#define memset_symbol				0x4AFF8
#define snprintf_symbol				0x4BE40
#define strcpy_symbol				0x4B0D0
#define strcat_symbol				0x4B104
#define strlen_symbol				0x4B098
#define strcmp_symbol				0x14316C
#define strrchr_symbol				0x143100

#define ps2_disc_auth_symbol			0x8B2BC

#define overwritten_symbol			0x87BE0

/* Vars */
#define arguments_symbol			0x636E18

#endif /* PS2EMU type */

#elif defined(FIRMWARE_3_55)

#if defined(PS2HWEMU)

#define TOC					0x4E99F8

#define cdvd_send_atapi_command_symbol		0x21FC4

#define ufs_open_symbol				0x4DF14
#define ufs_close_symbol			0x4E658
#define ufs_read_symbol				0x4DA00
#define ufs_write_symbol			0x4DAF4
#define ufs_fstat_symbol			0x4E95C

#define printf_symbol				0x3BC4

#define zeroalloc_symbol			0xFDDE8
#define malloc_symbol				0xFDD00
#define free_symbol				0xFDE40
#define memcpy_symbol				0xDFAC
#define memset_symbol				0xD488
#define strcpy_symbol				0xED04
#define strncpy_symbol				0xED30
#define strcat_symbol				0xEED0
#define strlen_symbol				0xECD8
#define strcmp_symbol				0xED94
#define strncmp_symbol				0xEDE8
#define strchr_symbol				0xEE50
#define strrchr_symbol				0xEE8C

#define vuart_read_symbol			0x1E338
#define vuart_write_symbol			0x1E288

#define ps2_disc_auth_symbol			0x2053C
#define ps2_disc_auth_caller_symbol		0x5111C

#define overwritten_symbol			0x23BF8

#define arguments_symbol			0x4FCE68

#elif defined(PS2GXEMU)

#define TOC					0x6765F8

#define cdvd_read_symbol			0x8E33C
#define cdvd_send_atapi_command_symbol		0x8D910
#define cdvd_send_device_command_symbol		0x8D824

#define ufs_open_symbol				0x24EA08
#define ufs_close_symbol			0x24F170
#define ufs_read_symbol				0x24E718
#define ufs_write_symbol			0x24E890
#define ufs_fstat_symbol			0x24E558

#define log_printf_symbol			0x1E4814

#define zeroalloc_symbol			0x1E4764
#define malloc_symbol				0x1E4704
#define free_symbol				0x1E47B0
#define memcpy_symbol				0x514BC
#define memset_symbol				0x51528
#define snprintf_symbol				0x52360
#define strcpy_symbol				0x51600
#define strncpy_symbol				0x99A90
#define strcat_symbol				0x51634
#define strlen_symbol				0x515C8
#define strcmp_symbol				0x99ABC
#define strchr_symbol				0x99A1C
#define strrchr_symbol				0x99A50

#define vuart_read_symbol			0x49544
#define vuart_write_symbol			0x494A4

#define ps2_disc_auth_symbol			0x8FF8C
#define ps2_disc_auth_caller_symbol		0x24F774

#define overwritten_symbol			0x8c968

/* Calls */
#define reboot_parameters_vuart_call		0x58C0C

/* Vars */
#define arguments_symbol			0x6E5298

#elif defined(PS2SOFTEMU)

#define TOC					0x5C8C00

#define cdvd_send_atapi_command_symbol		0x88C88
#define cdvd_send_device_command_symbol		0x88B9C

#define ufs_open_symbol				0x1AABBC
#define ufs_close_symbol			0x1AB334
#define ufs_read_symbol				0x1AA89C
#define ufs_write_symbol			0x1AAA2C
#define ufs_fstat_symbol			0x1AA6E8

#define zeroalloc_symbol			0x1447A0
#define malloc_symbol				0x144740
#define free_symbol				0x1447EC
#define memcpy_symbol				0x4AF8C
#define memset_symbol				0x4AFF8
#define snprintf_symbol				0x4BE40
#define strcpy_symbol				0x4B0D0
#define strcat_symbol				0x4B104
#define strlen_symbol				0x4B098
#define strcmp_symbol				0x14316C
#define strrchr_symbol				0x143100

#define ps2_disc_auth_symbol			0x8B2BC
#define ps2_disc_auth_caller_symbol		0x22130C

#define overwritten_symbol			0x87BE0

/* Vars */
#define arguments_symbol			0x636E18

#endif /* PS2EMU type */

#elif defined(FIRMWARE_4_30)

#if defined(PS2HWEMU)

#define TOC					0x4EB750

#define cdvd_send_atapi_command_symbol		0x21FC4

#define ufs_open_symbol				0x4DF34
#define ufs_close_symbol			0x4E6C0
#define ufs_read_symbol				0x4DA04
#define ufs_write_symbol			0x4DAF8
#define ufs_fstat_symbol			0x4E9C4

#define printf_symbol				0x3BC4

#define zeroalloc_symbol			0xFDE70
#define malloc_symbol				0xFDD88
#define free_symbol				0xFDEC8
#define memcpy_symbol				0xDFAC
#define memset_symbol				0xD488
#define strcpy_symbol				0xED04
#define strncpy_symbol				0xED30
#define strcat_symbol				0xEED0
#define strlen_symbol				0xECD8
#define strcmp_symbol				0xED94
#define strncmp_symbol				0xEDE8
#define strchr_symbol				0xEE50
#define strrchr_symbol				0xEE8C

#define vuart_read_symbol			0x1E338
#define vuart_write_symbol			0x1E288

#define ps2_disc_auth_symbol			0x2053C
#define ps2_disc_auth_caller_symbol		0x51184

#define overwritten_symbol			0x23BF8

#define arguments_symbol			0x4FEBE8

#elif defined(PS2GXEMU)

#define TOC					0x678448

#define cdvd_read_symbol			0x8E364
#define cdvd_send_atapi_command_symbol		0x8D938
#define cdvd_send_device_command_symbol		0x8D84C

#define ufs_open_symbol				0x24EA70
#define ufs_close_symbol			0x24F218
#define ufs_read_symbol				0x24E780
#define ufs_write_symbol			0x24E8F8
#define ufs_fstat_symbol			0x24E5C0

#define log_printf_symbol			0x1E485C

#define zeroalloc_symbol			0x1E47AC
#define malloc_symbol				0x1E474C
#define free_symbol				0x1E47F8
#define memcpy_symbol				0x514BC
#define memset_symbol				0x51528
#define snprintf_symbol				0x52360
#define strcpy_symbol				0x51600
#define strncpy_symbol				0x99AB8
#define strcat_symbol				0x51634
#define strlen_symbol				0x515C8
#define strcmp_symbol				0x99AE4
#define strchr_symbol				0x99A44
#define strrchr_symbol				0x99A78

#define vuart_read_symbol			0x49544
#define vuart_write_symbol			0x494A4

#define ps2_disc_auth_symbol			0x8FFB4
#define ps2_disc_auth_caller_symbol		0x24F81C

#define overwritten_symbol			0x8C990

/* Calls */
#define reboot_parameters_vuart_call		0x58C0C

/* Vars */
#define arguments_symbol			0x6e7198

#endif /* type */

#elif defined(FIRMWARE_4_81) // the same as 4.65

#if defined(PS2HWEMU)

#define TOC					0x4EB8C0 

#define cdvd_send_atapi_command_symbol		0x22138 

#define ufs_open_symbol				0x4E0A8 
#define ufs_close_symbol			0x4E834 
#define ufs_read_symbol				0x4DB78 
#define ufs_write_symbol			0x4DC6C
#define ufs_fstat_symbol			0x4EB38

#define printf_symbol				0x3BC4

#define zeroalloc_symbol			0xFDFEC
#define malloc_symbol				0xFDF04
#define free_symbol				0xFE044
#define memcpy_symbol				0xDFAC
#define memset_symbol				0xD488
#define strcpy_symbol				0xED04
#define strncpy_symbol				0xED30
#define strcat_symbol				0xEED0
#define strlen_symbol				0xECD8
#define strcmp_symbol				0xED94
#define strncmp_symbol				0xEDE8
#define strchr_symbol				0xEE50
#define strrchr_symbol				0xEE8C

#define vuart_read_symbol			0x1E42C
#define vuart_write_symbol			0x1E37C

#define ps2_disc_auth_symbol			0x206B0
#define ps2_disc_auth_caller_symbol		0x512F8

#define overwritten_symbol			0x23D6C

#define arguments_symbol			0x500D68

#elif defined(PS2GXEMU) // the same as 4.65

#define TOC					0x678548 //

#define cdvd_read_symbol			0x8E4AC //
#define cdvd_send_atapi_command_symbol		0x8DA80 //
#define cdvd_send_device_command_symbol		0x8D994 //

#define ufs_open_symbol				0x24EBB0 //
#define ufs_close_symbol			0x24F358 //
#define ufs_read_symbol				0x24E8C0 //
#define ufs_write_symbol			0x24EA38 //
#define ufs_fstat_symbol			0x24E700 //

#define log_printf_symbol			0x1E499C //

#define zeroalloc_symbol			0x1E48EC //
#define malloc_symbol				0x1E488C //
#define free_symbol				0x1E4938 //
#define memcpy_symbol				0x514BC //
#define memset_symbol				0x51528 //
#define snprintf_symbol				0x52360 //
#define strcpy_symbol				0x51600 //
#define strncpy_symbol				0x99C10 //
#define strcat_symbol				0x51634 //
#define strlen_symbol				0x515C8 //
#define strcmp_symbol				0x99C3C //
#define strchr_symbol				0x99B9C //
#define strrchr_symbol				0x99BD0 //

#define vuart_read_symbol			0x49544 //
#define vuart_write_symbol			0x494A4 //

#define ps2_disc_auth_symbol			0x900FC //
#define ps2_disc_auth_caller_symbol		0x24F95C //

#define overwritten_symbol			0x8CAD8 //

/* Calls */
#define reboot_parameters_vuart_call		0x58C50 //

/* Vars */
#define arguments_symbol			0x6E7298 //

#elif defined(PS2NETEMU) // 

#define TOC                0x751280 // same as 4.65-4.75

#define cdvd_read_symbol   0x1377C4 // 0x137744
#define ufs_open_symbol    0x1ECC5C // 0x1ECBDC
#define ufs_close_symbol   0x1ECB10 // 0x1ECA90
#define ufs_read_symbol    0x1ED5CC // 0x1ED54C
#define ufs_write_symbol   0x1ED458 // 0x1ED3D8
#define ufs_fstat_symbol   0x1EC760 // 0x1EC6E0

#define decrypt_symbol		0x1377c4

#define log_printf_symbol  0xB8E30  // same as 4.65-4.75

#define memcpy_symbol      0x118A90 // 0x118A10
#define memset_symbol      0x118A3C // 0x1189BC
#define memcmp_symbol      0x118860 // 0x1187E0
#define memchr_symbol      0x1E6DD8 // 0x1E6D58
#define snprintf_symbol    0x119724 // 0x1196A4
#define strcpy_symbol      0x1188DC // 0x11885C
#define strncpy_symbol     0x1EB640 // 0x1EB5C0
#define strcat_symbol      0x118914 // 0x118894
#define strlen_symbol      0x1188A4 // 0x118824
#define strcmp_symbol      0x1EB670 // 0x1EB5F0
#define strncmp_symbol     0x1EB6F4 // 0x1EB674
#define strchr_symbol      0x1EB5C8 // 0x1EB548
#define strrchr_symbol     0x1EB5FC // 0x1EB57C


#endif /* type */

#elif defined(FIRMWARE_4_84) // the same as 4.65

#if defined(PS2HWEMU)

#define TOC					0x4EB8C0 

#define cdvd_send_atapi_command_symbol		0x22138 

#define ufs_open_symbol				0x4E0A8 
#define ufs_close_symbol			0x4E834 
#define ufs_read_symbol				0x4DB78 
#define ufs_write_symbol			0x4DC6C
#define ufs_fstat_symbol			0x4EB38

#define printf_symbol				0x3BC4

#define zeroalloc_symbol			0xFDFEC
#define malloc_symbol				0xFDF04
#define free_symbol				0xFE044
#define memcpy_symbol				0xDFAC
#define memset_symbol				0xD488
#define strcpy_symbol				0xED04
#define strncpy_symbol				0xED30
#define strcat_symbol				0xEED0
#define strlen_symbol				0xECD8
#define strcmp_symbol				0xED94
#define strncmp_symbol				0xEDE8
#define strchr_symbol				0xEE50
#define strrchr_symbol				0xEE8C

#define vuart_read_symbol			0x1E42C
#define vuart_write_symbol			0x1E37C

#define ps2_disc_auth_symbol			0x206B0
#define ps2_disc_auth_caller_symbol		0x512F8

#define overwritten_symbol			0x23D6C

#define arguments_symbol			0x500D68

#elif defined(PS2GXEMU) // the same as 4.65

#define TOC					0x678548 //

#define cdvd_read_symbol			0x8E4AC //
#define cdvd_send_atapi_command_symbol		0x8DA80 //
#define cdvd_send_device_command_symbol		0x8D994 //

#define ufs_open_symbol				0x24EBB0 //
#define ufs_close_symbol			0x24F358 //
#define ufs_read_symbol				0x24E8C0 //
#define ufs_write_symbol			0x24EA38 //
#define ufs_fstat_symbol			0x24E700 //

#define log_printf_symbol			0x1E499C //

#define zeroalloc_symbol			0x1E48EC //
#define malloc_symbol				0x1E488C //
#define free_symbol				0x1E4938 //
#define memcpy_symbol				0x514BC //
#define memset_symbol				0x51528 //
#define snprintf_symbol				0x52360 //
#define strcpy_symbol				0x51600 //
#define strncpy_symbol				0x99C10 //
#define strcat_symbol				0x51634 //
#define strlen_symbol				0x515C8 //
#define strcmp_symbol				0x99C3C //
#define strchr_symbol				0x99B9C //
#define strrchr_symbol				0x99BD0 //

#define vuart_read_symbol			0x49544 //
#define vuart_write_symbol			0x494A4 //

#define ps2_disc_auth_symbol			0x900FC //
#define ps2_disc_auth_caller_symbol		0x24F95C //

#define overwritten_symbol			0x8CAD8 //

/* Calls */
#define reboot_parameters_vuart_call		0x58C50 //

/* Vars */
#define arguments_symbol			0x6E7298 //

#elif defined(PS2NETEMU) // 

#define TOC                0x751280 // same as 4.65-4.75

#define cdvd_read_symbol   0x1377C4 // 0x137744
#define ufs_open_symbol    0x1ECC5C // 0x1ECBDC
#define ufs_close_symbol   0x1ECB10 // 0x1ECA90
#define ufs_read_symbol    0x1ED5CC // 0x1ED54C
#define ufs_write_symbol   0x1ED458 // 0x1ED3D8
#define ufs_fstat_symbol   0x1EC760 // 0x1EC6E0

#define decrypt_symbol		0x1377c4

#define log_printf_symbol  0xB8E30  // same as 4.65-4.75

#define memcpy_symbol      0x118A90 // 0x118A10
#define memset_symbol      0x118A3C // 0x1189BC
#define memcmp_symbol      0x118860 // 0x1187E0
#define memchr_symbol      0x1E6DD8 // 0x1E6D58
#define snprintf_symbol    0x119724 // 0x1196A4
#define strcpy_symbol      0x1188DC // 0x11885C
#define strncpy_symbol     0x1EB640 // 0x1EB5C0
#define strcat_symbol      0x118914 // 0x118894
#define strlen_symbol      0x1188A4 // 0x118824
#define strcmp_symbol      0x1EB670 // 0x1EB5F0
#define strncmp_symbol     0x1EB6F4 // 0x1EB674
#define strchr_symbol      0x1EB5C8 // 0x1EB548
#define strrchr_symbol     0x1EB5FC // 0x1EB57C


#endif /* type */

#endif  /* FIRMWARE */

#endif /* __PS2EMU_SYMBOLS_H_S__ */

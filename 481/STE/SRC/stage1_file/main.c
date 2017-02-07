#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lv2/lv2.h>
#include <lv2/libc.h>
#include <lv2/memory.h>
#include <lv2/patch.h>
#include <lv2/syscall.h>
#include <lv2/usb.h>
#include <lv2/storage.h>
#include <lv2/thread.h>
#include <lv2/synchronization.h>
#include <lv2/modules.h>
#include <lv2/io.h>
#include <lv2/time.h>
#include <lv2/security.h>
#include <lv2/error.h>
#include <lv2/symbols.h>
#include <lv1/stor.h>
#include <lv1/patch.h>

#include "storage_ext.h"

typedef struct
{
	uint32_t address;
	uint32_t data;
} Patch;

static Patch kernel_patches[] =
{

	{ patch_data1_offset, 0x01000000 },
	{ patch_func8 + patch_func8_offset1, LI(R3, 0) }, // force lv2open return 0
	// disable calls in lv2open to lv1_send_event_locally which makes the system crash
	{ patch_func8 + patch_func8_offset2, NOP },
	{ patch_func9 + patch_func9_offset, NOP }, // 4.30 - watch: additional call after

	// ODE Protection removal (needed for CFW 4.60+) 
	{ lic_patch, LI(R3, 1) },
	{ ode_patch, LI(R3, 0) },
	{ ode_patch+4, STD(R3, 0, R9) },

};

#define N_KERNEL_PATCHES	(sizeof(kernel_patches) / sizeof(Patch))

static INLINE void apply_kernel_patches(void)
{
	for (int i = 0; i < N_KERNEL_PATCHES; i++)
	{
		uint32_t *addr= (uint32_t *)MKA(kernel_patches[i].address);
		*addr = kernel_patches[i].data;
		clear_icache(addr, 4);
	}
}

int main(void)
{
	apply_kernel_patches();
	storage_ext_init();
	storage_ext_patches();
	return 0;
}

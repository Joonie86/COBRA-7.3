/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include <lv2/macros.h.S>
#include <lv2/symbols.h>

#define CALL(addr) \
	MEM_BASE(%r0); \
	LOAD_LABEL(%r0, %r0, addr); \
	mtctr	%r0; \
	bctrl;

.globl cb_check
cb_check:

stdu      %r1, -0x100(%r1)
mflr      %r0
std       %r0, 0x110(%r1)
bl 0xa4
addi      %r4, %r1, 0x70
ld %r3, -0x6dd0(%r2)
CALL(cellFsStat_symbol)
mr %r26, %r3
cmpwi cr7, %r26, 0
bne cr7, 0x2c
ld %r3, 0x1828(%r2)
li %r4, 0
li %r5, 0
CALL(cellFsUtilUmount_symbol)
b 0x3c
lis %r3, 0x8000
sldi %r3, %r3, 32
oris %r3, %r3, 0x7f
ori %r3, %r3, 1
li %r24, 1
subf %r3, %r24, %r3
li %r4, 0
li %r5, 0x7fff
CALL(memset_symbol)
ld        %r0, 0x110(%r1)
addi      %r1, %r1, 0x100
mtlr      %r0
extsw     %r3, %r26
blr

.global flash_mount_clone

flash_mount_clone:

	stdu	%sp, -0xF0(%sp)
	mflr	%r0
	addi 	%r3, %sp, 0x70
	std	%r26, 0xC0(%sp)
	std	%r27, 0xC8(%sp)
	std	%r28, 0xD0(%sp)
	std	%r29, 0xD8(%sp)
	std	%r30, 0xE0(%sp)
	std	%r31, 0xE8(%sp)
	std	%r0, 0x100(%sp)
	CALL	(0x50E48)
	cmpwi 	cr7, %r3, 0
	bne	cr7, 1f
	lbz	%r9, 0x70(%sp)
	li	%r31, 1
	addi	%r9, %r9, -1
	clrlwi	%r9, %r9, 24
	cmplwi	cr7, %r9, 1
	ble	cr7, 3f
1:
	addi	%r26, %sp, 0x74
	ld	%r4, 0x1828(%rtoc) 
	li	%r5, 0x3F
	mr	%r3, %r26
	lis	%r29, -0x7FFF
	CALL	(strncpy_symbol)
	li	%r0, 0
	li	%r9, 1
	stw	%r0, 0xB4(%sp)
	stw	%r9, 0xB8(%sp)
	CALL	(0x104FC)
	CALL	(0x1052C)
	ld	%r27, 0x1830(%rtoc) 
	ld	%r28, 0x1810(%rtoc) 
	ori	%r29, %r29, 0x2B
	li	%r30, 0xA
2:
	mr	%r3, %r26
	mr	%r4, %r28
	mr	%r5, %r27
	li	%r6, 0
	li	%r7, 1
	li	%r8, 0
	li	%r9, 0
	li	%r10, 0
	CALL	(cellFsUtilMount_symbol)
	cmpw	cr7, %r3, %r29
	mr	%r31, %r3
	bne	cr7, 3f
	mfsprg0	%r9
	ld	%r11, 0xA0(%r9)
	lis	%r4, 7
	li	%r5, 0
	li	%r6, 0
	ori	%r4, %r4, 0xA120
	ld	%r3, 0x40(%r11)
	CALL	(ppu_thread_delay_symbol)
	CALL	(0x104FC)
	li	%r4, 0x2E
	CALL	(0x106DC)
	CALL	(0x104FC)
	CALL	(0x1052C)
	cmpwi	cr7, %r30, 0
	addi	%r30, %r30, -1
	bne	cr7, 2b
3:
	ld	%r0, 0x100(%sp)
	extsw	%r3, %r31
	ld	%r26, 0xC0(%sp)
	ld	%r27, 0xC8(%sp)
	mtlr	%r0
	ld	%r28, 0xD0(%sp)
	ld	%r29, 0xD8(%sp)
	ld	%r30, 0xE0(%sp)
	ld	%r31, 0xE8(%sp)
	addi	%sp, %sp, 0xF0
	blr

// There is something odd going on either in lv2gen or scetool, and some generated self are not working (apparently they dont load at all), current reason is unknown.
// HACK: it makes the release lv2_kernel.self work
	.long 0x12345678
	.long 0xABCDEFFE
	.long 0xDCBA9876

/* read-only data */

/*data_start:

.align 4

dev_rebug_stage:
	.asciz "/dev_flash/rebug/cobra/stage2.cex"

.align 4

data_end:*/

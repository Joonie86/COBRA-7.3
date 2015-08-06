	.text
	.section .start,"ax",@progbits
	.align 3

	.global _start
	
_start:
	mflr	%r0
	std 	%r0, 0x40(%sp)
	stdu 	%sp, -0x80(%sp)
	.long 0x4BD90439  // 0x273954+C[273960] , bl 0x3d98 = 4B D9 04 39
	cmpwi cr7, %r3, 0
	li %r3, 0
	bne cr7, 0x24
	bl 	main
	addi 	%sp, %sp, 0x80
	ld 	%r0, 0x40(%sp)	
	mtlr 	%r0
	clrrdi	%r0, %r0, 32
	oris	%r0, %r0, 0x7f
	mtctr	%r0
	bctr
	addi %sp, %sp, 0x80
	ld %r0, 0x40(%sp)
	mtlr %r0
	blr


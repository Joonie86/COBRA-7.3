	.text
	.section .start,"ax",@progbits
	.align 3

	.global _start
	
_start:
	mflr	%r0
	std 	%r0, 0x10(%sp)
	stdu 	%sp, -0x80(%sp)
	bl 	main
	addi 	%sp, %sp, 0x80
	ld 	%r0, 0x10(%sp)	
	mtlr 	%r0
	clrrdi	%r0, %r0, 32
	oris	%r0, %r0, 0x7f
	mtctr	%r0
	bctr


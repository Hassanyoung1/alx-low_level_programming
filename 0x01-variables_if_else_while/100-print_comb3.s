	.file	"100-print_comb3.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -8(%rbp)
	jmp	.L2
.L6:
	movl	$1, -4(%rbp)
	jmp	.L3
.L5:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jge	.L4
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L4
	movl	-8(%rbp), %eax
	addl	$48, %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	-4(%rbp), %eax
	addl	$48, %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cmpl	$17, %eax
	je	.L4
	movl	$44, %edi
	call	putchar@PLT
	movl	$32, %edi
	call	putchar@PLT
.L4:
	addl	$1, -4(%rbp)
.L3:
	cmpl	$9, -4(%rbp)
	jle	.L5
	addl	$1, -8(%rbp)
.L2:
	cmpl	$9, -8(%rbp)
	jle	.L6
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:

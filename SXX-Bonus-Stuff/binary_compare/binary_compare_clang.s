	.text
	.file	"binary_compare.c"
	.globl	myfun                           # -- Begin function myfun
	.p2align	4, 0x90
	.type	myfun,@function
myfun:                                  # @myfun
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	addl	$1, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	myfun, .Lfunc_end0-myfun
	.cfi_endproc
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	$4, -16(%rbp)
	movl	$10, -12(%rbp)
	movl	-12(%rbp), %edi
	callq	myfun
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %esi
	movabsq	$.L.str, %rdi
	movb	$0, %al
	callq	printf
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Hello, World  %i!\n"
	.size	.L.str, 19

	.ident	"clang version 16.0.6 (Fedora 16.0.6-2.fc38)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym myfun
	.addrsig_sym printf

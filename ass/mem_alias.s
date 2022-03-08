	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_sum_rows1                      ## -- Begin function sum_rows1
	.p2align	4, 0x90
_sum_rows1:                             ## @sum_rows1
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	$0, -32(%rbp)
LBB0_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_3 Depth 2
	movq	-32(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jge	LBB0_8
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-16(%rbp), %rax
	movq	-32(%rbp), %rcx
	xorps	%xmm0, %xmm0
	movsd	%xmm0, (%rax,%rcx,8)
	movl	$0, -44(%rbp)
LBB0_3:                                 ##   Parent Loop BB0_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpl	$3, -44(%rbp)
	jge	LBB0_6
## %bb.4:                               ##   in Loop: Header=BB0_3 Depth=2
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rcx
	imulq	-24(%rbp), %rcx
	movslq	-44(%rbp), %rdx
	addq	%rdx, %rcx
	movsd	(%rax,%rcx,8), %xmm0            ## xmm0 = mem[0],zero
	movq	-16(%rbp), %rax
	movq	-32(%rbp), %rcx
	addsd	(%rax,%rcx,8), %xmm0
	movsd	%xmm0, (%rax,%rcx,8)
## %bb.5:                               ##   in Loop: Header=BB0_3 Depth=2
	movl	-44(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -44(%rbp)
	jmp	LBB0_3
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_7
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-32(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -32(%rbp)
	jmp	LBB0_1
LBB0_8:
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	leaq	-80(%rbp), %rax
	leaq	l___const.main.A(%rip), %rcx
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -8(%rbp)
	movl	$0, -84(%rbp)
	movq	%rax, %rdx
	movq	%rdx, %rdi
	movq	%rcx, %rsi
	movl	$72, %edx
	movq	%rax, -112(%rbp)                ## 8-byte Spill
	callq	_memcpy
	movq	-112(%rbp), %rax                ## 8-byte Reload
	addq	$24, %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rsi
	movq	-112(%rbp), %rdi                ## 8-byte Reload
	movl	$3, %edx
	callq	_sum_rows1
	movl	$0, -100(%rbp)
LBB1_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$3, -100(%rbp)
	jge	LBB1_4
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	movq	-96(%rbp), %rax
	movslq	-100(%rbp), %rcx
	movsd	(%rax,%rcx,8), %xmm0            ## xmm0 = mem[0],zero
	leaq	L_.str(%rip), %rdi
	movb	$1, %al
	callq	_printf
## %bb.3:                               ##   in Loop: Header=BB1_1 Depth=1
	movl	-100(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -100(%rbp)
	jmp	LBB1_1
LBB1_4:
	movl	-84(%rbp), %eax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	movl	%eax, -116(%rbp)                ## 4-byte Spill
	jne	LBB1_6
## %bb.5:
	movl	-116(%rbp), %eax                ## 4-byte Reload
	addq	$128, %rsp
	popq	%rbp
	retq
LBB1_6:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__const
	.p2align	4                               ## @__const.main.A
l___const.main.A:
	.quad	0x0000000000000000              ## double 0
	.quad	0x3ff0000000000000              ## double 1
	.quad	0x4000000000000000              ## double 2
	.quad	0x4010000000000000              ## double 4
	.quad	0x4020000000000000              ## double 8
	.quad	0x4030000000000000              ## double 16
	.quad	0x4040000000000000              ## double 32
	.quad	0x4050000000000000              ## double 64
	.quad	0x4060000000000000              ## double 128

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%f\n"

.subsections_via_symbols

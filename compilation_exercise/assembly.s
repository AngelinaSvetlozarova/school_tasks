	.file	"NOK.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	movl	$24, -4(%rbp)
	movl	$44, -8(%rbp)
	movl	$1, -12(%rbp)
	movl	$1, -16(%rbp)
	movl	$2, -20(%rbp)
	jmp	.L2
.L11:
	movl	$1, -12(%rbp)
	movl	$2, -24(%rbp)
	jmp	.L3
.L6:
	movl	-20(%rbp), %eax
	cltd
	idivl	-24(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L4
	movl	$0, -12(%rbp)
	jmp	.L5
.L4:
	addl	$1, -24(%rbp)
.L3:
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L6
.L5:
	cmpl	$1, -12(%rbp)
	jne	.L7
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	je	.L8
	movl	-8(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L7
.L8:
	movl	-16(%rbp), %eax
	imull	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L9
	movl	-8(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L9
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%eax, -8(%rbp)
	jmp	.L7
.L9:
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L10
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%eax, -4(%rbp)
	jmp	.L7
.L10:
	movl	-8(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%eax, -8(%rbp)
.L7:
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	je	.L2
	movl	-8(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	je	.L2
	addl	$1, -20(%rbp)
.L2:
	cmpl	$1, -4(%rbp)
	jne	.L11
	cmpl	$1, -8(%rbp)
	jne	.L11
	movl	-16(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev6, Built by MSYS2 project) 13.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef

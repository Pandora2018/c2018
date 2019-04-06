	.file	"struct.c"
	.globl	list
	.data
	.align 32
	.type	list, @object
	.size	list, 336
list:
	.string	"January"
	.zero	7
	.string	"Jan"
	.zero	1
	.long	31
	.long	1
	.string	"February"
	.zero	6
	.string	"Feb"
	.zero	1
	.long	28
	.long	2
	.string	"March"
	.zero	9
	.string	"Mar"
	.zero	1
	.long	31
	.long	3
	.string	"April"
	.zero	9
	.string	"Apr"
	.zero	1
	.long	30
	.long	4
	.string	"May"
	.zero	11
	.string	"May"
	.zero	1
	.long	31
	.long	5
	.string	"June"
	.zero	10
	.string	"Jun"
	.zero	1
	.long	30
	.long	6
	.string	"July"
	.zero	10
	.string	"Jul"
	.zero	1
	.long	31
	.long	7
	.string	"August"
	.zero	8
	.string	"Aug"
	.zero	1
	.long	31
	.long	8
	.string	"September"
	.zero	5
	.string	"Sep"
	.zero	1
	.long	30
	.long	9
	.string	"October"
	.zero	7
	.string	"Oct"
	.zero	1
	.long	31
	.long	10
	.string	"November"
	.zero	6
	.string	"Nov"
	.zero	1
	.long	30
	.long	11
	.string	"December"
	.zero	6
	.string	"Dec"
	.zero	1
	.long	31
	.long	12
	.text
	.globl	days_cnt
	.type	days_cnt, @function
days_cnt:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -16(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L5:
	movl	-8(%rbp), %eax
	cltq
	movq	%rax, %rdx
	leaq	0(,%rdx,4), %rax
	movq	%rax, %rdx
	leaq	0(,%rdx,8), %rax
	subq	%rdx, %rax
	addq	$list, %rax
	leaq	15(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp
	testl	%eax, %eax
	jne	.L3
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	0(,%rax,8), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	addq	$list+20, %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	jmp	.L4
.L3:
	addl	$1, -8(%rbp)
.L2:
	cmpl	$11, -8(%rbp)
	jle	.L5
.L4:
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	0(,%rax,8), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	addq	$list+20, %rax
	movl	(%rax), %eax
	addl	%eax, -16(%rbp)
	addl	$1, -12(%rbp)
.L6:
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jb	.L7
	movl	-16(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	days_cnt, .-days_cnt
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits

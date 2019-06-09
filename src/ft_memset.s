global _ft_memset

section .text
_ft_memset:
	push rdi

	mov rax, rsi ; char to set
	mov rcx, rdx ; counter
	cld 
	rep stosb

	pop rax
	ret
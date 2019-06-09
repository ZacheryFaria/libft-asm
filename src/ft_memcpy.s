global _ft_memcpy

section .text
_ft_memcpy: ; void *ft_memcpy(void *dst, void *src, size_t n)
			; 						rdi			rsi 	rdx
	push rdi
	mov rcx, rdx
	cld
	rep movsb
	pop rax
	ret
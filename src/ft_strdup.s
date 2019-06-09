global _ft_strdup

extern _ft_strlen
extern _malloc
extern _ft_memcpy

section .text
_ft_strdup:
	enter 0, 0
	push rdi
	call _ft_strlen
	inc rax
	push rax
	mov rdi, rax
	call _malloc
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy
	leave
	ret

global _ft_strlen

section .text
_ft_strlen:
	mov		rcx, -1 ; counter
	mov		rax, 0
	cld
	repne	scasb
	mov rax, rcx
	inc rax
	not rax

	ret
global _ft_isascii

section .text
_ft_isascii:
	cmp		rdi, 0
	jl		false
	cmp		rdi, 127
	jle		true
	
false:
	mov		rax, 0
	ret

true:
	mov		rax, 1
	ret
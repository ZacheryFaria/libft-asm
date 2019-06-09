global _ft_bzero

extern _ft_memset

section .text
_ft_bzero:
	mov rdx, rsi
	mov rsi, 0
	call _ft_memset
	ret
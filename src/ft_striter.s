global _ft_striter

; void ft_striter(char *s, void (*f)(char *))
section .text
_ft_striter:
	mov r8, rdi
	mov r9, rsi
ft_striter:
	cmp [r8], byte 0
	je end
	mov rdi, r8
	call r9
	inc r8
	jmp ft_striter
end:
	ret
global _ft_strcat

section .text
_ft_strcat:
	push rdi
ft_strcat:
	cmp [rdi], byte 0
	je concat
	inc rdi
	jmp ft_strcat
concat:
	cmp [rsi], byte 0
	je done
	mov al, [rsi]
	mov [rdi], al
	inc rdi
	inc rsi
	jmp concat
done:
	pop rax
	ret
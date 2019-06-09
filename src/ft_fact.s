global _ft_fact

section .text
_ft_fact:
	mov rax, rdi
ft_fact:
	cmp rdi, 1
	jle done
	dec rdi
	imul rax, rdi
	jmp ft_fact

done:
	ret
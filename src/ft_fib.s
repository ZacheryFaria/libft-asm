global _ft_fib

section .text
_ft_fib:
	mov r8, 0
	mov r9, 1
fib:
	cmp edi, 1
	jle	end
	mov r10, r8 ; set up tmp register
	add r10, r9
	mov r8, r9
	mov r9, r10
	dec edi
	jmp fib
end:
	mov rax, r9
	ret

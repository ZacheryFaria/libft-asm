global _ft_puts

extern _ft_strlen

section .data
nl db 10
null db "(null)", 0

section .text
_ft_puts:
	cmp rdi, 0
	je print_null

print:
	push rdi ; we save the input to later ad the rsi variable when we need it
	call _ft_strlen
	mov rdi, 1 ; file descriptor
	pop rsi ; pointer we are writing
	push rax ; save rax to return later
	mov rdx, rax ; bytes to write
	mov rax, 0x2000004 ; write syscall
	syscall

newline:
	mov rdx, 1
	mov rsi, nl
	mov rax, 0x2000004 ; write syscall
	syscall
	pop rax
	inc rax ; we add 1 to the return val to 
	ret

print_null:
	mov rdi, null
	jmp _ft_puts
global _ft_cat

section .data
buffer times 255 db 0
bufsize equ $ - buffer

section .text
_ft_cat:
	mov rsi, buffer
	mov rdx, bufsize
	mov rax, 0x2000003 ; read
	syscall
write:
	push rdi
	mov rdi, 1 ; rdi is fd
	mov rdx, rax ; rdx is bytes to write
	mov rax, 0x2000004 ; write
	syscall
	pop rdi
	cmp rax, 0 ; we end once we end up writing 0 bytes
	jne _ft_cat
	ret

global _ft_atoi

section .text
_ft_atoi:
	mov		eax, 0 ; init ret val
	movzx 	ecx, byte [rdi] ;get the first byte to check for negative sign
	cmp 	ecx, '-'
	mov 	r9d, 1
	jne		loop
	mov		r9d, -1
	inc		rdi
	;je  	setneg
loop:
	movzx ecx, byte [rdi]
	cmp 	ecx, '0'
	jl 		end
	cmp 	ecx, '9'
	jg 		end
	sub 	ecx, '0'
	imul 	eax, 10
	add 	eax, ecx
	inc 	rdi
	jmp 	loop

end:
	imul 	eax, r9d 	; we multiply our return value by the r9d register, which will be
						; be -1 if the string starts with a negative
	ret
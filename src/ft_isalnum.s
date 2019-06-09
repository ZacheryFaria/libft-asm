global _ft_isalnum

extern _ft_isdigit
extern _ft_isalpha

section .text
_ft_isalnum:
	call _ft_isdigit
	cmp		rax, 0
	jnz		done
	call _ft_isalpha
	cmp		rax, 0
	ret

done:
	ret
global _ft_abs

section .text
_ft_abs:
	cmp edi, 0
	mov eax, edi
	jg done
	mov eax, 0
	sub eax, edi
done:
	ret
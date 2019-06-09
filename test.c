#include <assert.h>
#include <stdio.h>
#include <libft.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <limits.h>

void upper(char *str)
{
	*str = ft_toupper(*str);
}

void t_ft_fib()
{
	assert(ft_fib(0) == 1);
	assert(ft_fib(1) == 1);
	assert(ft_fib(2) == 1);
	assert(ft_fib(3) == 2);
	assert(ft_fib(4) == 3);
	assert(ft_fib(5) == 5);
	assert(ft_fib(6) == 8);
}

void t_ft_fact()
{
	assert(ft_fact(1) == 1);
	assert(ft_fact(2) == 2);
	assert(ft_fact(3) == 6);
	assert(ft_fact(4) == 24);
	assert(ft_fact(5) == 120);
	assert(ft_fact(6) == 720);
	assert(ft_fact(7) == 5040);
}

void t_ft_atoi()
{
	assert(ft_atoi("123") == atoi("123"));
	assert(ft_atoi("1") == atoi("1"));
	assert(ft_atoi("12") == atoi("12"));
	assert(ft_atoi("0") == atoi("0"));
	assert(ft_atoi("-123") == atoi("-123"));
	assert(ft_atoi("2147483647") == atoi("2147483647"));
	assert(ft_atoi("-2147483648") == atoi("-2147483648"));
}

void t_ft_abs()
{
	assert(ft_abs(4) == 4);
	assert(ft_abs(-1) == 1);
	assert(ft_abs(INT_MIN - 1) == INT_MAX);
	assert(ft_abs(INT_MIN) == INT_MIN);
}

void t_ft_striter()
{
	char *str = malloc(25);
	bzero(str, 25);
	memcpy(str, "Hello world", 12);
	ft_striter(str, &upper);
	ft_puts(str);
	free(str);
}

void t_ft_cat()
{
	int fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	close(fd);
}

void t_ft_strdup()
{
	char *str = ft_strdup("Hello world");
	ft_puts(str);
}

void t_ft_memcpy()
{
	char *str = strdup("What is up world");
	char *s1 = malloc(17);
	ft_bzero(s1, 17);
	char *s2 = ft_memcpy(s1, str, 16);
	ft_puts(s2);
	ft_memcpy(s1, str, 0);
	free(s1);
}

void t_ft_memset()
{
	char *str = malloc(17);
	str[16] = 0;
	char *s2 = ft_memset(str, 'a', 16);
	assert(strcmp(str, "aaaaaaaaaaaaaaaa") == 0);
	ft_puts(str);
	ft_memset(str, 'a', 0);
	free(str);
}

void t_ft_strcat()
{
	char *str = malloc(16);
	ft_bzero(str, 16);
	str = ft_strcat(str, "Goodbye ");
	str = ft_strcat(str, "world");
	ft_puts(str);
	assert(strcmp("Goodbye world", str) == 0);
	free(str);
}

void t_ft_strlen()
{
	assert(strlen("Hello world!") == ft_strlen("Hello world!"));
	printf("ft_strlen passed\n");
}

void t_ft_puts()
{
	ft_puts(0);
	ft_puts("Hello world");
}

void t_ft_tolower()
{
	char *str = strdup("Hello world!");
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = ft_tolower(str[i]);
	}
	assert(strcmp(str, "hello world!") == 0);
	free(str);
	printf("ft_tolower passed\n");
}

void t_ft_toupper()
{
	char *str = strdup("Hello world!");
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = ft_toupper(str[i]);
	}
	assert(strcmp(str, "HELLO WORLD!") == 0);
	free(str);
	printf("ft_toupper passed\n");
}

void t_ft_isprint()
{
	assert(ft_isprint(0) == isprint(0));
	assert(ft_isprint(127) == isprint(127));
	assert(ft_isprint(126) == isprint(126));
	assert(ft_isprint('a') == isprint('a'));
	assert(ft_isprint(' ') == isprint(' '));
	printf("ft_isprint passed\n");
}

void t_ft_bzero()
{
	char data[20];
	memset(data, 'a', 20);

	printf("%s\n", data);
	ft_bzero(data, 20);
	printf("%s", data);
}

void t_ft_isascii()
{
	assert(ft_isascii(-1) == 0);
	assert(ft_isascii(12) == 1);
	assert(ft_isascii(127) == 1);
	printf("ft_isascii passed\n");
}

void t_ft_isalnum()
{
	assert(ft_isalnum('2') == 1);
	assert(ft_isalnum('0') == 1);
	assert(ft_isalnum('a' - 1) == 0);
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('z' + 1) == 0);
	assert(ft_isalnum('A' - 1) == 0);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('Z' + 1) == 0);
	assert(ft_isalnum(2) == 0);
	assert(ft_isalnum(13) == 0);
	assert(ft_isalnum(127) == 0);
	assert(ft_isalnum('9') == 1);
	printf("ft_isalnum passed\n");
}

void t_ft_isdigit()
{
	assert(ft_isdigit('2') == 1);
	assert(ft_isdigit('a') == 0);
	printf("ft_isdigit passed\n");
}

void t_ft_isalpha()
{
	assert(ft_isalpha('a' - 1) == 0);
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('z' + 1) == 0);
	assert(ft_isalpha('A' - 1) == 0);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('Z' + 1) == 0);
	printf("ft_isalpha passed\n");
}

#include <stdio.h>
int main(void)
{
	t_ft_isdigit();
	t_ft_isalpha();
	t_ft_isalnum();
	t_ft_isascii();
	t_ft_bzero();
	t_ft_isprint();
	t_ft_toupper();
	t_ft_tolower();
	t_ft_strlen();
	t_ft_puts();
	t_ft_strcat();
	t_ft_memset();
	t_ft_memcpy();
	t_ft_strdup();
	t_ft_striter();
	t_ft_abs();
	t_ft_atoi();
	t_ft_fact();
	t_ft_fib();
	//t_ft_cat();
}
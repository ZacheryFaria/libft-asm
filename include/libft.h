#ifndef LIBFT_H
# define LIBFT_H

int ft_isdigit(int val);
int ft_isalpha(int val);
int	ft_isalnum(int val);
int	ft_isascii(int val);
int	ft_isprint(int val);
int	ft_toupper(int val);
int	ft_tolower(int val);
int ft_strlen(char *str);
int	ft_puts(char *str);
void	*ft_memset(char *s, char c, size_t n);
void	*ft_memcpy(char *s1, char *s2, size_t n);
void	ft_bzero(char *data, size_t n);
void	ft_cat(int fd);
void	ft_striter(char *str, void (*f)(char *str));
char *ft_strdup(char *str);
char *ft_strcat(char *s1, char *s2);


int ft_abs(int num);
char *ft_strjoin(char *s1, char *s2);
int	ft_atoi(char *str);
int	ft_fib(int n);

#endif

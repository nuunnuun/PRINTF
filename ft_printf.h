#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_printint(int nb);
int ft_print_unsigned(unsigned int nb);
int ft_printhex(unsigned int hex, int c);
int ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);
int	ft_printf(const char *src, ...);

#endif
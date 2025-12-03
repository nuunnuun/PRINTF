#include "ft_printf.h"

int ft_printhex(unsigned int hex, int c)
{
    int length = 0;
    char *str_hex;

    if (c == 'x')
    {
        str_hex = "0123456789abcdef";
    }
    if (c == 'X')
    {
        str_hex = "0123456789ABCDEF";
    }
    if (hex < 16)
    {
        length += write(1,&str_hex[hex], 1);
    }
    if( hex >= 16)
    {
        length += ft_printhex((hex / 16), c);
        length += write(1, &str_hex[(hex % 16)], 1);
    }
    return (length);
}


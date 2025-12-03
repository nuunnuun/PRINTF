#include "ft_printf.h"

int ft_print_unsigned(unsigned int nb)
{
    int length;
    char result;

    length = 0;
    if(length < 10)
    {
        result = nb + '0';
        length += write(1, &result, 1);
    }
    if (length >= 10)
    {
        length += ft_print_unsigned(nb / 10);
        length += ft_print_unsigned(nb % 10);
    }
    return(length);
}

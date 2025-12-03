#include "ft_printf.h"

int ft_printstr(char *str) //รับค่าตัวชี้สตริง//
{
    int length;
    length = 0;

    if(!str)
    {
        return(ft_printstr("(null)"));
    }
    while (*str)
    {
        write(1, (str++), 1);
        length++;
    }
    return(length);
}


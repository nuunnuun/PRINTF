#include "ft_printf.h"

static int	ft_printstat(unsigned long long stat, int c);

int	ft_printptr(unsigned long long ptr)
{
	int					length;

	length = 0;
	if (!ptr)
		length += ft_printstr("(nil)");
	else
	{
		length += ft_printstr("0x");
		length += ft_printstat(ptr, 'x');
	}
	return (length);
}

static int	ft_printstat(unsigned long long stat, int c)
{
	int		length;
	char	*str_stat;

	length = 0;
	str_stat = "0123456789abcdef";
	if (stat < 16)
		length += write(1, &str_stat[stat], 1);
	if (stat >= 16)
	{
		length += ft_printstat((stat / 16), c);
		length += write(1, &str_stat[(stat % 16)], 1);
	}
	return (length);
}

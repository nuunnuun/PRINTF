/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:52 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:17:43 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert(va_list args, char c, int *length);

int	ft_printf(const char *src, ...)
{
	va_list	args;
	int		length;
	int		i;

	length = 0;
	i = 0;
	va_start(args, src);
	while (src[i])
	{
		if (src[i] == '%')
		{
			i++;
			ft_convert(args, src[i], &length);
		}
		else
			length += write(1, &src[i], 1);
		i++;
	}
	va_end(args);
	return (length);
}

static void	ft_convert(va_list args, char c, int *length)
{
	int	ch;

	if (c == 'c')
	{
		ch = va_arg(args, int);
		*length += write(1, &ch, 1);
	}
	else if (c == 's')
		*length += ft_printstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		*length += ft_printint(va_arg(args, int));
	else if (c == 'x' || c == 'X')
		*length += ft_printhex(va_arg(args, unsigned int), c);
	else if (c == 'p')
		*length += ft_printptr((unsigned long long)va_arg(args, void *));
	else if (c == 'u')
		*length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == '%')
		*length += write(1, "%", 1);
}

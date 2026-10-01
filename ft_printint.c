/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:38 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:18:42 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printnbr(long n)
{
	int		length;
	char	result;

	length = 0;
	if (n >= 10)
		length += ft_printnbr(n / 10);
	result = (n % 10) + '0';
	length += write(1, &result, 1);
	return (length);
}

int	ft_printint(int nb)
{
	long	n;
	int		length;

	n = nb;
	length = 0;
	if (n < 0)
	{
		length += write(1, "-", 1);
		n = -n;
	}
	length += ft_printnbr(n);
	return (length);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:21 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:18:54 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_address(unsigned long long ptr)
{
	int		length;
	char	*base;

	length = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
		length += ft_print_address(ptr / 16);
	length += write(1, &base[ptr % 16], 1);
	return (length);
}

int	ft_printptr(unsigned long long ptr)
{
	int	length;

	length = 0;
	if (!ptr)
		return (ft_printstr("(nil)"));
	length += ft_printstr("0x");
	length += ft_print_address(ptr);
	return (length);
}

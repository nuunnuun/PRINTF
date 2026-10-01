/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:42 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:18:29 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int hex, int c)
{
	int		length;
	char	*str_hex;

	length = 0;
	if (c == 'x')
		str_hex = "0123456789abcdef";
	else
		str_hex = "0123456789ABCDEF";
	if (hex >= 16)
		length += ft_printhex(hex / 16, c);
	length += write(1, &str_hex[hex % 16], 1);
	return (length);
}

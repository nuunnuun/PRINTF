/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:56 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:17:55 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		length;
	char	result;

	length = 0;
	if (nb >= 10)
		length += ft_print_unsigned(nb / 10);
	result = (nb % 10) + '0';
	length += write(1, &result, 1);
	return (length);
}

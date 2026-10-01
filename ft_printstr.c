/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:15 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:19:04 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	length;

	length = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (*str)
	{
		length += write(1, str, 1);
		str++;
	}
	return (length);
}

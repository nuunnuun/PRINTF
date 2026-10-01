/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraksana <kraksana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:14:47 by kraksana          #+#    #+#             */
/*   Updated: 2026/10/01 09:20:03 by kraksana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *src, ...);
int	ft_printint(int nb);
int	ft_print_unsigned(unsigned int nb);
int	ft_printhex(unsigned int hex, int c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);

#endif

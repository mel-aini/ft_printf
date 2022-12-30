/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:50:25 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/19 17:07:48 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hash_flag(va_list ptr, const char *format, int **i, int **n)
{
	unsigned int	p2;

	while (format[**i + 1] == '#')
			(**i)++;
	if (format[**i + 1] == 'x')
	{
		p2 = va_arg(ptr, unsigned int);
		if (p2 > 0)
			**n += ft_putstr("0x");
		**n += ft_puthexa(p2, 'x');
	}
	else if (format[**i + 1] == 'X')
	{
		p2 = va_arg(ptr, unsigned int);
		if (p2 > 0)
			**n += ft_putstr("0X");
		**n += ft_puthexa(p2, 'X');
	}
}

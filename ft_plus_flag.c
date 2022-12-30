/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:49:58 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/19 17:01:52 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_plus_flag(va_list ptr, const char *format, int **i, int **n)
{
	int	p;

	while (format[**i + 1] == '+' || format[**i + 1] == ' ')
			(**i)++;
	if (format[**i + 1] == 'd' || format[**i + 1] == 'i')
	{
		p = va_arg(ptr, int);
		if (p >= 0)
			**n += ft_putchar('+');
		**n += (ft_putnbr(p));
	}
}

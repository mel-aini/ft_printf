/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:51:55 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/23 16:13:28 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cases(va_list ptr, const char *format, int *i, int *n)
{
	if (format[*i + 1] == 'c')
		*n += (ft_putchar(va_arg(ptr, int)));
	else if (format[*i + 1] == 's')
		*n += (ft_putstr(va_arg(ptr, char *)));
	else if (format[*i + 1] == 'p')
		*n += (ft_putaddr(va_arg(ptr, unsigned long long)));
	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		*n += (ft_putnbr(va_arg(ptr, int)));
	else if (format[*i + 1] == 'u')
		*n += (ft_putunbr(va_arg(ptr, unsigned int)));
	else if (format[*i + 1] == 'x')
		*n += (ft_puthexa(va_arg(ptr, unsigned int), 'x'));
	else if (format[*i + 1] == 'X')
		*n += (ft_puthexa(va_arg(ptr, unsigned int), 'X'));
	else if (format[*i + 1] == '%')
		*n += (ft_putchar('%'));
	else if (format[*i + 1] == '+')
		ft_plus_flag(ptr, format, &i, &n);
	else if (format[*i + 1] == ' ')
		ft_space_flag(ptr, format, &i, &n);
	else if (format[*i + 1] == '#')
		ft_hash_flag(ptr, format, &i, &n);
	else
		*n += ft_putchar(format[*i + 1]);
}

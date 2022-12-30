/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:45:46 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/18 12:04:48 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		n;
	int		i;

	if (write(1, &format[0], 0) == -1)
		return (-1);
	va_start(ptr, format);
	n = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (0);
			ft_cases(ptr, format, &i, &n);
			i++;
		}
		else
			n += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (n);
}

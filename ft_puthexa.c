/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:31:28 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/06 09:53:42 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char c)
{
	char	*lower_hex;
	char	*upper_hex;

	lower_hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEFGH";
	if (c == 'x')
	{
		if (n >= 0 && n <= 15)
			return (ft_putchar(lower_hex[n]));
		if (n > 15)
			return (ft_puthexa(n / 16, c) + ft_puthexa(n % 16, c));
	}
	else if (c == 'X')
	{
		if (n >= 0 && n <= 15)
			return (ft_putchar(upper_hex[n]));
		if (n > 15)
			return (ft_puthexa(n / 16, c) + ft_puthexa(n % 16, c));
	}
	return (0);
}

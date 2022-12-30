/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:34 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/07 10:26:12 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
	{
		n += '0';
		return (ft_putchar(n));
	}
	else if (n >= 10)
	{
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
	}
	else if (n < 0)
	{
		if (n == -2147483648)
			return (ft_putstr("-2147483648"));
		else
		{
			n *= -1;
			return (ft_putchar('-') + ft_putnbr(n));
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:32:30 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/06 12:34:01 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	if (n >= 0 && n < 10)
	{
		n += '0';
		return (ft_putchar(n));
	}
	else if (n >= 10)
	{
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	}
	return (0);
}

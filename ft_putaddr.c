/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:51:32 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/07 10:27:19 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddhexa(unsigned long long a)
{
	char	*lower_hex;

	lower_hex = "0123456789abcdef";
	if (a >= 0 && a <= 15)
		return (ft_putchar(lower_hex[a]));
	if (a > 15)
		return (ft_putaddhexa(a / 16) + ft_putaddhexa(a % 16));
	return (0);
}

int	ft_putaddr(unsigned long long a)
{
	return (ft_putstr("0x") + ft_putaddhexa(a));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:30:18 by mel-aini          #+#    #+#             */
/*   Updated: 2022/11/22 20:47:43 by mel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_cases(va_list ptr, const char *format, int *i, int *n);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_puthexa(unsigned int n, char c);
int		ft_putaddr(unsigned long long a);
int		ft_putunbr(unsigned int n);
void	ft_plus_flag(va_list ptr, const char *format, int **i, int **n);
void	ft_space_flag(va_list ptr, const char *format, int **i, int **n);
void	ft_hash_flag(va_list ptr, const char *format, int **i, int **n);

#endif

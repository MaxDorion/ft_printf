/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:58:14 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 16:37:39 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_char(char str, int *len_print)
{
	write(1, &str, 1);
	*len_print += 1;
}

void	ft_got_percent(const char *str, va_list ap, int *len_print)
{
	if (*str == 'c')
		ft_write_char(va_arg(ap, int), len_print);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ap, int), len_print);
	else if (*str == '%')
		ft_write_char(*str, len_print);
	else if (*str == 's')
		ft_putstr(va_arg(ap, char *), len_print);
	else if (*str == 'x')
		ft_put_hexa_min(va_arg(ap, unsigned int), len_print);
	else if (*str == 'X')
		ft_put_hexa_maj(va_arg(ap, unsigned int), len_print);
	else if (*str == 'p')
		ft_put_ptr(va_arg(ap, unsigned long), len_print);
	else if (*str == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int), len_print);
}

int	ft_printf(const char *str, ...)
{
	int		a;
	int		*len_str;
	va_list	ap;

	a = 0;
	len_str = &a;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_got_percent(str + 1, ap, len_str);
			str++;
		}
		else
			ft_write_char(str[0], len_str);
		str++;
	}
	va_end(ap);
	return (*len_str);
}

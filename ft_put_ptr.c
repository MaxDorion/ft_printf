/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:39:03 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 16:42:57 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(char *hex, int *len_print, int i)
{
	while (i)
	{
		i--;
		write(1, &hex[i], 1);
		*len_print += 1;
	}
}

void	ft_put_ptr(unsigned long n, int *len_print)
{
	char			hex[50];
	int				i;
	long int		remainder;

	if (!n)
	{
		ft_putstr("(nil)", len_print);
		return ;
	}
	i = 0;
	write(1, "0x", 2);
	*len_print += 2;
	while (n)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[i] = remainder + 48;
		else
			hex[i] = remainder + 87;
		n = n / 16;
		i++;
	}
	ft_print_ptr(hex, len_print, i);
}

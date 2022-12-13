/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:38:57 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 16:42:29 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(char *hex, int *len_print, int i)
{
	while (i)
	{
		i--;
		write(1, &hex[i], 1);
		*len_print += 1;
	}
}

void	ft_put_hexa_maj(unsigned int n, int *len_print)
{
	char	hex[50];
	int		i;
	int		remainder;

	i = 0;
	if (!n)
	{
		ft_putstr("0", len_print);
		return ;
	}
	while (n)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[i] = remainder + 48;
		else
			hex[i] = remainder + 55;
		n = n / 16;
		i++;
	}
	ft_print_hexa(hex, len_print, i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:47:01 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 15:50:25 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len_print)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len_print += 11;
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		*len_print += 1;
	}
	if (n < 10)
	{
		c = '0' + n;
		write(1, &c, 1);
		*len_print += 1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, len_print);
		ft_putnbr(n % 10, len_print);
	}
}

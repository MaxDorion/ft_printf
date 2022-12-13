/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:47:40 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 15:50:25 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *len_print)
{
	char	c;

	if (n < 10)
	{
		c = '0' + n;
		write(1, &c, 1);
		*len_print += 1;
	}
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10, len_print);
		ft_putnbr_unsigned(n % 10, len_print);
	}
}

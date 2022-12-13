/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:48:21 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 16:13:17 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len_print)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)", len_print);
		return ;
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i++], 1);
		*len_print += 1;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:55:16 by mdorion           #+#    #+#             */
/*   Updated: 2022/12/13 15:56:09 by mdorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_put_hexa_maj(unsigned int n, int *len_print);
void	ft_put_hexa_min(unsigned int n, int *len_print);
void	ft_put_ptr(unsigned long n, int *len_print);
void	ft_putnbr_unsigned(unsigned int n, int *len_print);
void	ft_putnbr(int n, int *len_print);
void	ft_putstr(char *s, int *len_print);
int		ft_printf(const char *str, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:41:38 by fragamez          #+#    #+#             */
/*   Updated: 2024/12/20 16:51:24 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	ln;

	count = 0;
	ln = n;
	if (ln < 0)
	{
		count += ft_print_char('-');
		ln = -ln;
	}
	if (ln > 9)
	{
		count += ft_putnbr((int)(ln / 10));
		count += ft_print_char((char)(ln % 10 + 48));
	}
	else
		count += ft_print_char((char)(ln + 48));
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	int		count;
	long	ln;

	count = 0;
	ln = n;
	if (ln > 9)
	{
		count += ft_putnbr_u((int)(ln / 10));
		count += ft_print_char((char)(ln % 10 + 48));
	}
	else
		count += ft_print_char((char)(ln + 48));
	return (count);
}

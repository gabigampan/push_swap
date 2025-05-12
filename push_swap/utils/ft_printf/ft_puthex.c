/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:44:34 by fragamez          #+#    #+#             */
/*   Updated: 2024/12/20 16:26:51 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 9)
	{
		ft_print_char(nbr + '0');
		count++;
	}
	else if (nbr >= 16)
	{
		count += ft_puthex(nbr / 16);
		count += ft_puthex(nbr % 16);
	}
	else
	{
		ft_print_char(nbr - 10 + 'a');
		count++;
	}
	return (count);
}

int	ft_puthex_m(unsigned long long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 9)
	{
		ft_print_char(nbr + '0');
		count++;
	}
	else if (nbr >= 16)
	{
		count += ft_puthex_m(nbr / 16);
		count += ft_puthex_m(nbr % 16);
	}
	else
	{
		ft_print_char(nbr - 10 + 'A');
		count++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:52:59 by fragamez          #+#    #+#             */
/*   Updated: 2024/12/20 16:56:34 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long	address;

	address = (unsigned long)ptr;
	if (!address)
		return (ft_print_string("(nil)"));
	else
	{
		ft_print_string("0x");
		return (ft_puthex(address) + 2);
	}
}

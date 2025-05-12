/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:50:48 by fragamez          #+#    #+#             */
/*   Updated: 2025/04/23 12:14:31 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_rotate(t_stack **a, t_stack **b)
{
	int	pos;

	pos = almost_ordered(a, b);
	if (pos)
	{
		if (pos >= (get_length(*a) / 2))
		{
			while (!already_ordered(a))
				reverse_rotate_a(a);
		}
		else
		{
			while (!already_ordered(a))
				rotate_a(a);
		}
		free_stack(*a);
		exit(EXIT_SUCCESS);
	}
	else
		return ;
}

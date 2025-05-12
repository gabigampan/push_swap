/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:08:10 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/08 15:11:39 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int print)
{
	if (!*a || !(*a)->next)
		return ;
	swap(a);
	if (print)
		write(1, "sa\n", 3);
}

void	ra(t_stack **a, int print)
{
	if (!*a || !(*a)->next)
		return ;
	rotate(a);
	if (print)
		write(1, "ra\n", 3);
}

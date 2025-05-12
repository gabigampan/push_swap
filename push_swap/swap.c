/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:12:33 by fragamez          #+#    #+#             */
/*   Updated: 2025/04/21 13:33:44 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	if (get_length(*stack) > 1)
	{
		first = *stack;
		second = first -> next;
		third = second -> next;
		first -> previous = second;
		first -> next = second -> next;
		second -> previous = NULL;
		second -> next = first;
		third -> previous = first;
		*stack = second;
	}
}

void	swap_a(t_stack **a)
{
	ft_printf("sa\n");
	swap(a);
}

void	swap_b(t_stack **b)
{
	ft_printf("sb\n");
	swap(b);
}

void	swap_s(t_stack **a, t_stack **b)
{
	ft_printf("ss\n");
	swap(a);
	swap(b);
}

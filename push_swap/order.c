/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:51:51 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/12 12:43:50 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_ordered(t_stack **a)
{
	if (get_length(*a) == 1)
		return (1);
	else
	{
		if ((*a)-> cont > (*a)-> next -> cont)
			return (0);
		else
			return (already_ordered(&(*a)-> next));
	}
}

int	almost_ordered(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	int		position;

	if (b)
		return (0);
	aux = *a;
	position = 0;
	while (aux -> next && aux -> cont < aux -> next -> cont)
	{
		aux = aux -> next;
		position++;
	}
	if (already_ordered(&aux -> next)
		&& get_first(aux)-> cont > get_last(aux)-> cont)
	{
		if (position > 0)
			return (position);
		else
			return (-1);
	}
	else
		return (0);
}

void	order_three(t_stack **a)
{
	t_stack	*second;
	t_stack	*third;

	second = (*a)-> next;
	third = second -> next;
	if ((*a)-> cont > second -> cont)
	{
		if (second -> cont > third -> cont)
		{
			swap_a(a);
			reverse_rotate_a(a);
		}
		else if ((*a)-> cont > third -> cont)
			rotate_a(a);
		else
			swap_a(a);
	}
	else
	{
		if ((*a)-> cont > third -> cont)
			reverse_rotate_a(a);
		else
			swap_rotate(a);
	}
}

void	turk(t_stack **a, t_stack **b)
{
	t_stack	*to_push;
	t_stack	*high_lower;
	int		ordered;

	order_rotate(a, b);
	push_b(a, b);
	if (get_length(*a) > 3)
		push_b(a, b);
	while (get_length(*a) > 3 && !already_ordered(a))
	{
		to_push = get_lower_cost(a, b);
		high_lower = highest_lower(to_push, b);
		prepare_push_b(a, b, to_push, high_lower);
	}
	if (!already_ordered(a))
		order_three(a);
	ordered = almost_ordered(a, b);
	empty_b(a, b);
	while (!already_ordered(a))
	{
		if (ordered > 0 && ordered >= get_length(*a) / 2)
			rotate_a(a);
		else
			reverse_rotate_a(a);
	}
}

void	order_stack(t_stack **a, t_stack **b)
{
	if (already_ordered(a))
		return ;
	else if (get_length(*a) == 2)
		swap_a(a);
	else if (get_length(*a) == 3)
		order_three(a);
	else if (get_length(*a) == 5)
		sort_five(a, b);
	else
		turk(a, b);
}

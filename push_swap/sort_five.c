/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:17:29 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/12 12:36:10 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(t_stack *stack)
{
	int		min;
	int		pos;
	int		i;
	t_stack	*tmp;

	if (!stack || !stack->cont)
		return (-1);
	tmp = stack;
	min = tmp->cont;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->cont < min)
		{
			min = tmp->cont;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

void	pa(t_stack **a, t_stack **b, int print)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	if (print)
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, int print)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	if (print)
		write(1, "pb\n", 3);
}

void	rra(t_stack **a, int print)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
	if (print)
		write(1, "rra\n", 4);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_pos;
	int	size;

	size = 5;
	while (size > 3)
	{
		min_pos = find_min_pos(*a);
		if (min_pos == 1)
			sa(a, 1);
		else if (min_pos <= size / 2)
			while (min_pos-- > 0)
				ra(a, 1);
		else
			while (min_pos++ < size)
				rra(a, 1);
		pb(a, b, 1);
		size--;
	}
	sort_three(a);
	pa(a, b, 1);
	pa(a, b, 1);
}

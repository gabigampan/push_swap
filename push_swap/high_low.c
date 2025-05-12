/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:23:13 by fragamez          #+#    #+#             */
/*   Updated: 2025/04/21 13:29:42 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*highest_lower(t_stack *elem, t_stack **stack)
{
	t_stack	*aux;
	t_stack	*lower;

	if (elem -> cont < get_min(*stack)-> cont)
		return (get_max(*stack));
	else
	{
		aux = *stack;
		lower = aux;
		while (aux)
		{
			if (lower -> cont > elem -> cont
				&& aux -> cont < lower -> cont)
				lower = aux;
			if (lower -> cont < aux -> cont
				&& aux -> cont < elem -> cont)
				lower = aux;
			aux = aux -> next;
		}
	}
	return (lower);
}

t_stack	*lowest_higher(t_stack *elem, t_stack **stack)
{
	t_stack	*aux;
	t_stack	*higher;

	if (elem -> cont > get_max(*stack)-> cont)
		return (get_min(*stack));
	else
	{
		aux = *stack;
		higher = aux;
		while (aux)
		{
			if (higher -> cont < elem -> cont
				&& aux -> cont > higher -> cont)
				higher = aux;
			if (higher -> cont > aux -> cont
				&& aux -> cont > elem -> cont)
				higher = aux;
			aux = aux -> next;
		}
	}
	return (higher);
}

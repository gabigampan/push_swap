/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:21:40 by fragamez          #+#    #+#             */
/*   Updated: 2025/04/21 13:33:21 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*second_src;

	if (!*src)
		return ;
	second_src = NULL;
	if ((*src)-> next)
	{
		second_src = (*src)-> next;
		second_src -> previous = NULL;
	}
	if (*dst)
	{
		(*dst)-> previous = *src;
		(*src)-> next = *dst;
	}
	else
		(*src)-> next = NULL;
	*dst = *src;
	*src = second_src;
}

void	push_a(t_stack **a, t_stack **b)
{
	ft_printf("pa\n");
	push(b, a);
}

void	push_b(t_stack **a, t_stack **b)
{
	ft_printf("pb\n");
	push(a, b);
}

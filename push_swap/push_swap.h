/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:08:49 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/09 14:45:22 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "utils/libft/libft.h"
# include "utils/ft_printf/ft_printf.h"
# include <unistd.h>

typedef struct s_stack
{
	int				cont;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

void		sa(t_stack **a, int print);
void		ra(t_stack **a, int print);
void		rra(t_stack **a, int print);
void		pb(t_stack **a, t_stack **b, int print);
void		pa(t_stack **a, t_stack **b, int print);
void		throw_error(t_stack *a, t_stack *b);
void		throw_empty_error(void);
t_stack		*new_stack(int *nbrs, int argc);
int			get_length(t_stack *stack);
t_stack		*get_last(t_stack *stack);
t_stack		*get_first(t_stack *stack);
t_stack		*get_min(t_stack *stack);
t_stack		*get_max(t_stack *stack);
void		free_stack(t_stack *stack);
void		swap(t_stack **stack);
void		swap_a(t_stack **a);
void		swap_b(t_stack **b);
void		swap_s(t_stack **a, t_stack **b);
void		push_a(t_stack **a, t_stack **b);
void		push_b(t_stack **a, t_stack **b);
void		rotate(t_stack **stack);
void		rotate_a(t_stack **stack);
void		rotate_b(t_stack **stack);
void		rotate_r(t_stack **a, t_stack **b);
void		reverse_rotate(t_stack **stack);
void		reverse_rotate_a(t_stack **stack);
void		reverse_rotate_b(t_stack **stack);
void		reverse_rotate_r(t_stack **a, t_stack **b);
void		order_rotate(t_stack **a, t_stack **b);
void		finish_preparation(t_stack **a, t_stack **b,
				t_stack *to_push, t_stack *high_lower);
void		prepare_push_b(t_stack **a, t_stack **b,
				t_stack *to_push, t_stack *high_lower);
void		empty_b(t_stack **a, t_stack **b);
int			get_position(t_stack *elem, t_stack **stack);
int			get_highest_lower(t_stack *elem, t_stack **stack);
int			get_cost(t_stack *elem, t_stack **a, t_stack **b);
t_stack		*get_lower_cost(t_stack **a, t_stack **b);
int			get_length(t_stack *stack);
t_stack		*get_last(t_stack *stack);
t_stack		*get_min(t_stack *stack);
t_stack		*get_max(t_stack *stack);
int			already_ordered(t_stack **a);
int			almost_ordered(t_stack **a, t_stack **b);
void		order_three(t_stack **a);
void		turk(t_stack **a, t_stack **b);
void		order_stack(t_stack **a, t_stack **b);
t_stack		*highest_lower(t_stack *elem, t_stack **stack);
t_stack		*lowest_higher(t_stack *elem, t_stack **stack);
void		swap_rotate(t_stack **a);
void		free_split(char **split);
void		throw_split_error(char **split);
t_stack		*create_from_argc(int argc, char **argv);
t_stack		*create_from_split(int len, char **argv);
int			is_all_num(char *str);
int			check_all_unequal(int *array, int size);
long long	ft_atol(const char *str);
void		move_min_to_b(t_stack **a, t_stack **b, int min_pos);
int			find_next_min_position(t_stack *stack, int excluded_pos);
void		sort_three(t_stack **a);
void		sort_five(t_stack **a, t_stack **b);
void		move_min_to_b(t_stack **a, t_stack **b, int min_pos);
int			find_min_pos(t_stack *stack);
void		sa(t_stack **a, int print);

#endif

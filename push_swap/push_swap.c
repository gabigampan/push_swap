/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:34:18 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/09 14:24:10 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_only_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	is_all_num(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_all_unequal(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_stack	*split_string(char *arg)
{
	t_stack	*stack;
	char	**split;
	int		i;

	stack = NULL;
	if (is_only_spaces(arg) || arg[0] == '\0')
		throw_empty_error();
	split = ft_split(arg, ' ');
	if (!split)
		throw_empty_error();
	i = 0;
	while (split[i])
	{
		if (!is_all_num(split[i]))
			throw_split_error(split);
		i++;
	}
	stack = create_from_split(i, split);
	free_split(split);
	if (!stack)
		throw_empty_error();
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		exit(EXIT_SUCCESS);
	if (argv[1][0] == '\0' || is_only_spaces(argv[1]))
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	if (argc == 2)
		a = split_string(argv[1]);
	else
		a = create_from_argc(argc, argv);
	order_stack(&a, &b);
	free_stack(a);
	free_stack(b);
	exit(EXIT_SUCCESS);
}

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 10:54:16 by fragamez          #+#    #+#              #
#    Updated: 2025/05/08 15:10:52 by fragamez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CCFLAGS = -Wall -Werror -Wextra -I/utils/libft -I/utils/ft_printf

SOURCES = push.c \
		  swap.c \
		  errors.c \
		  nodes.c \
		  operations_r_rotate.c \
		  operations_rotate.c \
		  create_stack.c \
		  order.c \
		  order_rotate.c \
		  costs.c \
		  algorithm.c \
		  high_low.c \
		  push_swap.c \
		  ft_atol.c \
		  sort_five.c \
		  sort_utils.c \
		  sort_three.c \
		  operations.c

OBJS = $(SOURCES:.c=.o)

$(NAME) : makeprintf makelibft $(OBJS)
		@$(CC) $(OBJS) utils/libft/libft.a utils/ft_printf/libftprintf.a -o $(NAME)

makelibft:
	make -C utils/libft

makeprintf:
	make -C utils/ft_printf

all: $(NAME)

%.o: %.c
	@$(CC) -c $(CCFLAGS) $< -o $@

clean:
	@make clean -C utils/ft_printf
	@make clean -C utils/libft
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf utils/ft_printf/libftprintf.a
	@rm -rf utils/libft/libft.a
	@rm -rf $(NAME)

re: fclean all
.PHONY : all clean fclean re

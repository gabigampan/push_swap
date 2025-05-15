# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 10:54:16 by fragamez          #+#    #+#              #
#    Updated: 2025/05/08 15:10:52 by fragamez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CCFLAGS = -Wall -Werror -Wextra -I/utils/libft -I/utils/ft_printf -g3

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

all: makeprintf makelibft $(NAME)

$(NAME) :  $(OBJS)
		@$(CC) $(OBJS) utils/libft/libft.a utils/ft_printf/libftprintf.a -o $(NAME)

makelibft:
	make -C utils/libft

makeprintf:
	make -C utils/ft_printf

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

test2:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-100 -n 2))
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  ./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test3:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-100 -n 3))
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  ./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test5:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 5))
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  ./push_swap $(ARG) 
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test100:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 100))
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  ./push_swap $(ARG) 
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test500:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 500))
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  ./push_swap $(ARG) 
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test1000:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 1000))
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  ./push_swap $(ARG) 
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

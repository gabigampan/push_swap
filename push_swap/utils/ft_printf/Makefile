# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 14:25:26 by fragamez          #+#    #+#              #
#    Updated: 2024/12/23 14:40:19 by fragamez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c\
		ft_print_char.c\
		ft_print_string.c\
		ft_putptr.c\
		ft_putnbr.c\
		ft_puthex.c

OBJ = $(SRC:.c=.o)

CFLAGS = -g -Wall -Wextra -Werror

CC = clang

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
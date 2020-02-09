# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/07 16:28:48 by cjover-n          #+#    #+#              #
#    Updated: 2020/02/09 11:53:47 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c		ft_conversions.c	ft_zero.c	printf_flags.c	\
		printf_utils.c 	ft_atoi.c			main.c		ft_types.c

FLAGS = -Wextra -Wall -Werror -I

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) 
	@gcc $(FLAGS)./ -c $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: ./$(NAME)

debug:
	@gcc -g $(FLAGS)./ -c $(SRC)

.PHONY: all clean fclean re

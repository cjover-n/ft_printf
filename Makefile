# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/07 16:28:48 by cjover-n          #+#    #+#              #
#    Updated: 2020/02/12 18:09:52 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c		ft_conversions.c	ft_zero.c	ft_flags.c	\
		printf_utils.c 	ft_atoi.c

FLAGS = -Wextra -Wall -Werror 

OBJ = $(SRC:.c=.o)∫

all: $(NAME)

$(NAME): $(SRC) 
	@gcc $(FLAGS)./ -c $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: ./$(NAME)

test:
	@gcc $(FLAGS) -g $(SRC) main.c

.PHONY: all clean fclean re

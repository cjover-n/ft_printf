# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/07 16:28:48 by cjover-n          #+#    #+#              #
#    Updated: 2020/02/07 16:41:50 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRC =	ft_printf.c		ft_conversions.c	ft_zero.c	printf_flags.c	\
		printf_utils.c

FLAGS = -g -Wextra -Wall -Werror -I

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) 
	@gcc $(FLAGS)./ -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f *.o
	@rm -f *.out

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/07 16:28:48 by cjover-n          #+#    #+#              #
#    Updated: 2020/02/16 19:40:53 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

SRC =	ft_printf.c		ft_conversions.c	ft_zero.c	ft_flags.c	\
		printf_utils.c 	ft_atoi.c

LIBOBJ = Libft/*.c

OBJ_DIR	= obj/

FLAGS = -Wextra -Wall -Werror -g

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) 
	@make -c Libft/
	@cp Libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC)/%.c
	@mkdir -p obj
	@gcc $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: ./$(NAME)

test:
	@gcc $(FLAGS) $(SRC) main.c

.PHONY: all clean fclean re

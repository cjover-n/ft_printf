# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/07 16:28:48 by cjover-n          #+#    #+#              #
#    Updated: 2020/02/18 21:23:45 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c		ft_conversions.c	ft_zero.c	ft_flags.c	\
		printf_utils.c 	ft_atoi.c

SRCLIB =	Libft/ft_isalpha.c		Libft/ft_isprint.c	Libft/ft_strlcpy.c	\
			Libft/ft_strrchr.c  	Libft/ft_atoi.c		Libft/ft_isascii.c	\
			Libft/ft_strchr.c		Libft/ft_strlen.c	Libft/ft_tolower.c	\
			Libft/ft_isalnum.c		Libft/ft_isdigit.c	Libft/ft_strlcat.c	\
			Libft/ft_strncmp.c		Libft/ft_toupper.c	Libft/ft_memset.c	\
			Libft/ft_bzero.c		Libft/ft_memcpy.c	Libft/ft_memccpy.c	\
			Libft/ft_memmove.c		Libft/ft_memchr.c	Libft/ft_memcmp.c	\
			Libft/ft_strnstr.c		Libft/ft_calloc.c	Libft/ft_strdup.c	\
			Libft/ft_substr.c		Libft/ft_strjoin.c	Libft/ft_strtrim.c	\
			Libft/ft_strcat.c		Libft/ft_strcpy.c		\
			Libft/ft_putchar_fd.c   Libft/ft_putstr_fd.c	\
			Libft/ft_putendl_fd.c	Libft/ft_putnbr_fd.c	\
			Libft/ft_strmapi.c		Libft/ft_itoa.c			\
			Libft/ft_split.c		Libft/ft_lstiter.c

FLAGS = -Wextra -Wall -Werror -g

OBJ = $(SRC:.c=.o)

OBJLIB = $(SRCLIB:.c=.o)

all: $(NAME)

$(NAME): $(SRC) 
	@gcc $(FLAGS) -c $(SRCLIB)
	@mv -f *.o Libft/
	@gcc $(FLAGS) -c $(SRC)
	@ar -rc $(NAME) $(OBJ) $(OBJLIB)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJLIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: ./$(NAME)

test: re
	@gcc $(FLAGS) *.c Libft/*.c
	@./a.out

.PHONY: all clean fclean re
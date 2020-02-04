# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/25 21:13:39 by cjover-n          #+#    #+#              #
#    Updated: 2019/12/08 22:41:05 by cjover-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC =	ft_isalpha.c	ft_isprint.c	ft_strlcpy.c	ft_strrchr.c	\
		ft_atoi.c		ft_isascii.c	ft_strchr.c		ft_strlen.c		\
		ft_tolower.c	ft_isalnum.c	ft_isdigit.c	ft_strlcat.c	\
		ft_strncmp.c	ft_toupper.c	ft_memset.c		ft_bzero.c		\
		ft_memcpy.c		ft_memccpy.c	ft_memmove.c	ft_memchr.c		\
		ft_memcmp.c		ft_strnstr.c	ft_calloc.c		ft_strdup.c		\
		ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_putchar_fd.c	\
		ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_strmapi.c	\
		ft_itoa.c		ft_split.c		ft_lstiter.c

SRCBONUS =	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c \
		  	ft_lstadd_back.c	ft_lstdelone.c	ft_lstclear.c ft_lstmap.c

FLAGS = -Wextra -Wall -Werror -I

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(SRC) 
	@gcc $(FLAGS)./ -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus:	$(SRC) $(SRCBONUS) libft.h
		-@gcc -I./ -c $(SRCBONUS) $(SRC)
		-@ar rc $(NAME) $(OBJ) $(OBJBONUS)
		-@ranlib $(NAME)

clean:
	@rm -f *.o
	@rm -f *.out

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

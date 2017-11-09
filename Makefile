# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/08 15:47:30 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCL_DIR = ./
SRC_DIR = ./
SRC = $(SRC_DIR)ft_strlen.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

re: fclean all

all: $(NAME)

$(NAME):
	gcc -c $(SRC) $(CGLAGS) -I $(INCL_DIR)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

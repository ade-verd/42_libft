# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/09 17:56:15 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCL_DIR = ./
SRC_DIR = ./
SRC = ft_strlen.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

proper: all clean

all: $(NAME)

$(NAME):
	gcc -c $(SRC) $(CGLAGS) -I $(INCL_DIR)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

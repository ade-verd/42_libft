# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/17 10:48:59 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCL_DIR = ./
SRC_DIR = ./
SRC = ft_strlen.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
TEST_DIR = ./42FileChecker/
OTHER_FILES = Makefile\
			  libft.h\
			  auteur

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

cp_to_dir: clean
	cp $(SRC) $(TEST_DIR)
	cp $(OTHER_FILES) $(TEST_DIR)

proper: re cp_to_dir

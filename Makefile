# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/22 16:57:54 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCL_DIR = ./
SRC_DIR = ./
SRC_1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
		ft_memchr.c ft_memcmp.c\
		\
		ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c\
		ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c\
		ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c\
		\
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_toupper.c ft_tolower.c

SRC_2 = ft_memalloc.c ft_memdel.c\
		\
		ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c\
		ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c\
		\
		ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

#SRC_3 = #

SRC = $(SRC_1) $(SRC_2) 
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
TEST_DIR = ./42FileChecker/
OTHER_FILES = Makefile\
			  libft.h\
			  auteur

.PHONY: re all fclean clean

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -c $(SRC) $(CGLAGS) -I $(INCL_DIR)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "✧ ar -rcs $(NAME) object files: OK! √"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

cp_to_dir:
	make clean
	cp $(SRC) $(TEST_DIR)
	cp $(OTHER_FILES) $(TEST_DIR)

proper: re cp_to_dir

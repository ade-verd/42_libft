# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/09 19:43:32 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_check_all_functions_obligatory
INCL_DIR = ./
SRC_DIR = ./../
SRC_FILES = ft_strlen.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
CHECK_FILE = $(SRC_FILES:.c=_check.c)
C_FLAGS = -Wall -Wextra -Werror

proper: re
	./$(NAME)

all: $(NAME)

$(NAME):
	norminette -R CheckForbiddenSourceHeader $(SRC)
	gcc $(C_FLAGS) -o $(NAME) main.c $(CHECK_FILE) $(SRC) -I $(INCL_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

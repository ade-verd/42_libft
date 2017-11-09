# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/09 12:36:09 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_check_all_functions_obligatory
INCL_DIR = ./
SRC_DIR = ./../
SRC = ft_strlen.c
CHECK_FILE = $(SRC:.c=_check.c)
C_FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	norminette -R CheckForbiddenSourceHeader ./../$(SRC)
	gcc -o $(NAME) ./main.c ./$(CHECK_FILE) $(C_FLAGS) ./../$(SRC) -I $(INCL_DIR)

go: all
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

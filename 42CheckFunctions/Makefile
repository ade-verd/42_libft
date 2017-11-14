# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:30:07 by ade-verd          #+#    #+#              #
#    Updated: 2017/11/14 18:19:15 by ade-verd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_check_all_functions_obligatory
INCL_DIR = ./
SRC_DIR = ./../
SRC_FILES = ft_strlen.c\
			ft_strdup.c\
			ft_strcpy.c\
			ft_strncpy.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c

SUPPORT_FILES = ft_open_file.c\
			ft_close_file.c\
			ft_print_in_logfile.c\
			ft_putstr_in.c

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
CHECK_FILE = $(SRC_FILES:.c=_check.c)
C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	norminette -R CheckForbiddenSourceHeader $(SRC)
	gcc $(C_FLAGS) -o $(NAME) main.c $(CHECK_FILE) $(SUPPORT_FILES) $(SRC) -I $(INCL_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test_all:
	./$(NAME)

only:
	cat log | grep  "$(FT)"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_functions.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:48:55 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/16 18:35:44 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_FUNCTIONS_H
# define FT_CHECK_FUNCTIONS_H

# include <time.h> /*Date and time*/
# include <stdlib.h> /*malloc, atoi*/
# include <stdio.h> /*printf*/
# include <string.h> /*NULL, size_t, official string's functions*/
# include <ctype.h> /*isalnum, isapha, isascii, isdigit, isprint, tolower, toupper*/
# include "ft_display_file.h" /*open, close, write in files*/
# include "./../libft.h"

# define TO_STR_(a)	#a
# define TO_STR(a)	TO_STR_(a)
# define getName(var) #var

/*Support functions*/
char	*ft_reverse_char(char *str);
void	ft_clearcontents(char *str);
void	ft_print_and_run(int (*f)(FILE*), char *function_name, FILE* fd_log);

/*Test functions*/
int		ft_strlen_check(FILE *fd);
int		ft_strdup_check(FILE *fd);
int		ft_strcpy_check(FILE *fd);
int		ft_strncpy_check(FILE *fd);
int		ft_strcat_check(FILE *fd);
int		ft_strncat_check(FILE *fd);
int		ft_strlcat_check(FILE *fd);
int		ft_strcmp_check(FILE *fd);
int		ft_strncmp_check(FILE *fd);
int		ft_atoi_check(FILE *fd);
int		ft_isalpha_check(FILE *fd);
int		ft_isdigit_check(FILE *fd);
int		ft_isalnum_check(FILE *fd);
int		ft_isascii_check(FILE *fd);
int		ft_isprint_check(FILE *fd);
int		ft_toupper_check(FILE *fd);
int		ft_tolower_check(FILE *fd);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:31:10 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 16:32:33 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h> //printf
#include "ft_display_file.h"
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)
#define getName(var) #var

int		ft_strlen_check(FILE *fd);
int		ft_strdup_check(FILE *fd);
int		ft_strcpy_check(FILE *fd);
int		ft_strncpy_check(FILE *fd);
int		ft_atoi_check(FILE *fd);
int		ft_isalpha_check(FILE *fd);
int		ft_isdigit_check(FILE *fd);
int		ft_isalnum_check(FILE *fd);
int		ft_isascii_check(FILE *fd);
int		ft_isprint_check(FILE *fd);
int		ft_toupper_check(FILE *fd);
int		ft_tolower_check(FILE *fd);

void	ft_print_and_run(int (*f)(FILE*), char *function_name, FILE* fd_log)
{
	fprintf(fd_log, "\n>>>>\t%-20s\n", function_name);
	printf("\t%-20s\t", function_name);
	f(fd_log);
}


int		main(void)
{
	time_t	t;
	char	buff[20];
	FILE	*fd;

	t = time(NULL);
	strftime(buff, 20, "%d-%m-%Y %H:%M:%S", localtime(&t));

	//effacer le contenu du fichier wb = open for writing
	fd = fopen("log", "wb");
	fclose(fd);

	fd = fopen("log", "a+");

	fprintf(fd, "====Started at %s====\n", buff);
	printf("\t~START~\n");
//
	ft_print_and_run(&ft_strlen_check, "ft_strlen", fd);
	ft_print_and_run(&ft_strdup_check, "ft_strdup", fd);
	ft_print_and_run(&ft_strcpy_check, "ft_strcpy", fd);
	ft_print_and_run(&ft_strncpy_check, "ft_strncpy", fd);
	ft_print_and_run(&ft_atoi_check, "ft_atoi", fd);
	ft_print_and_run(&ft_isalpha_check, "ft_isalpha", fd);
	ft_print_and_run(&ft_isdigit_check, "ft_isdigit", fd);
	ft_print_and_run(&ft_isalnum_check, "ft_isalnum", fd);
	ft_print_and_run(&ft_isascii_check, "ft_isascii", fd);
	ft_print_and_run(&ft_isprint_check, "ft_isprint", fd);
	ft_print_and_run(&ft_toupper_check, "ft_toupper", fd);
	ft_print_and_run(&ft_tolower_check, "ft_tolower", fd);
//
	printf("\t~END~\n");
	fprintf(fd, "====End====\n");
	fclose(fd);
	return (0);
}



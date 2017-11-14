/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:31:10 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 18:45:17 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h> //printf
#include "ft_display_file.h"
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)

int		ft_strlen_check(FILE *fd);
int		ft_strcpy_check(FILE *fd);
int		ft_strcpy_check(FILE *fd);
int		ft_atoi_check(FILE *fd);
int		ft_isalpha_check(FILE *fd);
int		ft_isdigit_check(FILE *fd);
int		ft_isalnum_check(FILE *fd);
int		ft_isascii_check(FILE *fd);
int		ft_isprint_check(FILE *fd);

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
	fprintf(fd, "\n>>>>\tft_strlen\n");
	printf("\tft_strlen\t");
	ft_strlen_check(fd);

	fprintf(fd, "\tft_strcpy\n");
	printf("\tft_strcpy\t");
	ft_strcpy_check(fd);

	fprintf(fd, "\n>>>>\tft_atoi\n");
	printf("\tft_atoi\t\t");
	ft_atoi_check(fd);

	fprintf(fd, "\n>>>>\tft_isalpha\n");
	printf("\tft_isalpha\t");
	ft_isalpha_check(fd);

	fprintf(fd, "\n>>>>\tft_isdigit\n");
	printf("\tft_isdigit\t");
	ft_isdigit_check(fd);

	fprintf(fd, "\n>>>>\tft_isalnum\n");
	printf("\tft_isalnum\t");
	ft_isalnum_check(fd);

	fprintf(fd, "\n>>>>\tft_isascii\n");
	printf("\tft_isascii\t");
	ft_isascii_check(fd);

	fprintf(fd, "\n>>>>\tft_isprint\n");
	printf("\tft_isprint\t");
	ft_isprint_check(fd);

	fprintf(fd, "\n>>>>\tft_toupper\n");
	printf("\tft_toupper\t");
	ft_isprint_check(fd);

	fprintf(fd, "\n>>>> \tft_tolower\n");
	printf("\tft_tolower\t");
	ft_isprint_check(fd);
//
	printf("\t~END~\n");
	fprintf(fd, "====End====\n");
	fclose(fd);
	return (0);
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:19:42 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 13:40:49 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <string.h> //NULL
#include "./../libft.h"
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)
#define	FT_OFF		strcpy
#define FT			ft_strcpy

int		ft_strcpy_check(FILE *fd)
{
	int		i;
	char	*src[14];
	char	*dest[14];
	char	*off = NULL;
	char	*ft = NULL;

	i = 0;

//Tableau de tests
	src[0] = "Salut ";
	src[1] = " Salut ";
	src[2] = " ";
	src[3] = "";
	src[4] = "0";
	src[5] = "\0";
	src[6] = "npg9r58R";
	src[7] = "B6RNg2JhIa";
	src[8] = "y3l";
	src[9] = "1wpLuJjkV0td9Bs ZmykwLzadQHVqi 6dj4I2FR fjmJ9q64SAKs PS3AuGnvLYEUg8 oi5hdX0Cr CcOgePERA6tj 7cmJTVjQHyzl kdV3M14eb 1pt27";
	src[10] = "UXLMvD1I jWCMQJ0qYkK ZnxoJQjTa wyf6mERvrL";
	src[11] = "Kzox2vJVf6W XtZpG6 5v3c4uPhUBFxb Bdrykx W8lbIC0TAtY CuZVwqf6X ym8MhzEX2duK";
	src[12] ="4uPhUBFxb Bdrykx W8lbIC0TAtY CuZVwqf6X ym8MhzEX2duK";

	src[13] = 0; //Fin du tableau

	while (i <= 13)
	{
		dest[i] = "a";
		i++;
	}

	i = 0;
	while (src[i])
	{
		FT_OFF(dest[i], src[i]);
		*off = *dest[i];
		printf("i:%d", i);
		FT(dest[i], src[i]);
		*ft = *dest[i];
		if (off != ft)
		{
			fprintf(stderr,"\nX_X KO\t");
			fprintf(stderr,"%s\t", src[i]);
			fprintf(stderr,"%s:%s\t", TO_STR(FT_OFF), off);
			fprintf(stderr,"ft_%s:%s\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "%s\t", src[i]);
			fprintf(fd, "%s:%s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "%s, ", src[i]);
			fprintf(fd, "%s:%s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}

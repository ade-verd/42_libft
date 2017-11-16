/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:19:42 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/16 16:09:11 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strcpy
#define FT			ft_strcpy

int		ft_strcpy_check(FILE *fd)
{
	int		i;
	int		j;
	char	*src[14];
	char	*dest[14];
	char	*off;
	char	*ft;

//Tableau de tests
	src[0] = "";
	src[1] = "a";
	src[2] = "ab";
	src[3] = "abc";
	src[4] = "abcd";
	src[5] = "abcd\0";
	src[6] = "abcde";
	src[7] = "abcdef";
	src[8] = "abcdefg";
	src[9] = "abcdefgh";
	src[10] = "1234567891011";
	src[11] = "123456789101112131415";
	src[12] = "4uPhUBFxb Bdrykx W8lbIC0TAuK";

	src[13] = 0; //Fin du tableau

	i = 0;
	j = 12;
	while (i <= 12) //Permettra de tester les chaines ds un sens puis ds l'autre
	{
		dest[j] = src[i];
		j--;
		i++;
	}
	dest[13] = 0;

	i = 0;
	j = 12;

	while (j >= 0)
	{
		if ((off = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1))) == NULL)
			return (0);
		if ((ft = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1))) == NULL)
			return (0);
		strcpy(off, dest[j]); //on copie dest vers tmp[i] dont la place necessaire a ete allouee
		strcpy(ft, dest[j]); //idem pour refaire avec la fonction officielle en excluant les resultats du premier test

		FT_OFF(off, src[i]);
		FT(ft, src[i]);
		if (strcmp(off, ft) != 0)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "src : %-30s\tdest : %-30s\t", src[i], dest[i]);
			fprintf(stderr, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "src : %-30s\tdest : %-30s\t", src[i], dest[i]);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "src : %-30s\tdest : %-30s\t", src[i], dest[i]);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
		}
		free(off);
		off = NULL;
		free(ft);
		ft = NULL;
		i++;
		j--;
	}
	printf("OK\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:26:45 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 18:44:05 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strncpy
#define FT			ft_strncpy

int		ft_strncpy_check(FILE *fd)
{
	int		i;
	int		j;
	int		len;
	char	*src[14];
	char	*dest[14];
	char	*tmp;
	char	*tmp2;
	char	*off;
	char	*ft;

//Tableau de tests
	src[0] = "";
	src[1] = "\0";
	src[2] = "a";
	src[3] = "ab";
	src[4] = "abc";
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
		dest[j] = ft_reverse_char(src[i]);
		j--;
		i++;
	}
	dest[13] = 0;

	i = 12;
	while (i >= 0)
	{
		len = i;
		if((tmp = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1))) == NULL)
			return (0);
		if((tmp2 = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1))) == NULL)
			return (0);
		strcpy(tmp, dest[i]); //on copie dest vers tmp[i] dont la place necessaire a ete allouee
		strcpy(tmp2, dest[i]); //idem pour refaire avec la fonction officielle en excluant les resultats du premier test

		FT_OFF(tmp, src[i], len);
		off = tmp;
		FT(tmp2, src[i], len);
		ft = tmp2;
		if (strcmp(off, ft) != 0)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "src : %-30s\tdest : %-30s\tlen : %-10d\t", src[i], dest[i], len);
			fprintf(stderr, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "src : %-30s\tdest : %-30s\tlen : %-10d\t", src[i], dest[i], len);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "src : %-30s\tdest : %-30s\tlen : %-10d\t", src[i], dest[i], len);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%s\n", TO_STR(FT_OFF), ft);
		}
		free(tmp);
		ft_clearcontents(tmp);
		i--;
	}
	printf("OK\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:19:42 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 19:06:36 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h> //malloc
#include <string.h> //NULL
#include "./../libft.h"
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)
#define	FT_OFF		strcpy
#define FT			ft_strcpy

int		ft_strcpy_check(FILE *fd)
{
	int		i;
	int		j;
	char	*src[14];
	char	*dest[14];
	char	*tmp[14];
	char	*tmp2[14];
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
	src[7] = "abcde\n";
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
		tmp[i] = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1));
		tmp2[i] = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1));
		strcpy(tmp[i], dest[j]);
		strcpy(tmp2[i], dest[j]);

		FT_OFF(tmp[i], src[i]);
		off = dest[i];
		printf("\ni:%d\tj:%d\n", i, j);
	//	FT(dest[j], src[i]);
	//	ft = dest[j];
		FT(tmp2[i], src[i]);
		ft = tmp2[i];
		printf("i:%d\tj:%d\n", i, j);
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
	//	free(tmp[i]);
		i++;
		j--;
	}
	printf("OK\n");
	return (0);
}

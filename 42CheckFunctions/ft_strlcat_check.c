/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:36:26 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/17 15:09:10 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strlcat
#define FT			ft_strlcat

int		ft_strlcat_check(FILE *fd)
{
	int		i;
	int		j;
	int		len;
	char	*dst[15];
	char	*src[15];
	char	*tmp;
	char	*tmp2;
	size_t	off;
	size_t	ft;

//Tableau de tests
	dst[0] = "";
	dst[1] = "\0";
	dst[2] = "a";
	dst[3] = "ab";
	dst[4] = "abc";
	dst[5] = "abcd\0";
	dst[6] = "abcde";
	dst[7] = "abcdef";
	dst[8] = "abcdefg";
	dst[9] = "abcdefgh";
	dst[10] = "1234567891011";
	dst[11] = "123456789101112131415";
	dst[12] = "4uPhUBFxb Bdrykx W8lbIC0TAuK";
	dst[13] = "the cake is a lie !\0I'm hidden lol\r\n";

	dst[14] = 0; //Fin du tableau

	i = 0;
	j = 14;
	while (dst[i] != 0) //Permettra de tester les chaines ds un sens puis ds l'autre
	{
		src[j] = dst[i];
		j--;
		i++;
	}
	src[14] = 0;

	i = 0;
	while (dst[i] != 0)
	{
		len = i;
		if((tmp = (char*)malloc(sizeof(char) * (strlen(dst[i]) + strlen(src[i]) + 1))) == NULL)
			return (0);
		if((tmp2 = (char*)malloc(sizeof(char) * (strlen(dst[i]) + strlen(src[i]) + 1))) == NULL)
			return (0);
		strcpy(tmp, dst[i]); //on copie dst vers off dont la place necessaire a ete allouee
		strcpy(tmp2, dst[i]); //idem pour refaire avec la fonction officielle en excluant les resultats du premier test

		off = FT_OFF(tmp, src[i], len);
		ft = FT(tmp2, src[i], len);
		if (off != ft || strcmp(tmp, tmp2) != 0)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "dst(len:%lu) : %-30s\tsrc(len:%lu) : %-30s\tn : %-5d\t", 
					strlen(dst[i]), dst[i], strlen(src[i]), src[i], len);
			fprintf(stderr, "%s(len:%lu) : %-30s\t", TO_STR(FT_OFF), off, tmp);
			fprintf(stderr, "ft_%s(len:%lu) : %s\n", TO_STR(FT_OFF), ft, tmp2);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "dst(len:%lu) : %-30s\tsrc(len:%lu) : %-30s\tn : %-5d\t",
					strlen(dst[i]), dst[i], strlen(src[i]), src[i], len);
			fprintf(fd, "%s(len:%lu) : %-30s\t", TO_STR(FT_OFF), off, tmp);
			fprintf(fd, "ft_%s(len:%lu) : %s\n", TO_STR(FT_OFF), ft, tmp2);
	//		return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "dst(len:%lu) : %-30s\tsrc(len:%lu) : %-30s\tn : %-5d\t",
					strlen(dst[i]), dst[i], strlen(src[i]), src[i], len);
			fprintf(fd, "%s(len:%lu) : %-30s\t", TO_STR(FT_OFF), off, tmp);
			fprintf(fd, "ft_%s(len:%lu) : %s\n", TO_STR(FT_OFF), ft, tmp2);
		}
		free(tmp);
		free(tmp2);
		ft_clearcontents(tmp);
		ft_clearcontents(tmp2);
		tmp = NULL;
		tmp2 = NULL;
		i++;
	}
	printf("OK\n");
	return (0);
}

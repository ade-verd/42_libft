/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:36:26 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/16 18:58:05 by ade-verd         ###   ########.fr       */
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
	char	*dst[14];
	char	*src[14];
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

	dst[13] = 0; //Fin du tableau

	i = 0;
	j = 12;
	while (dst[i] != 0) //Permettra de tester les chaines ds un sens puis ds l'autre
	{
		src[j] = ft_reverse_char(dst[i]);
		j--;
		i++;
	}
	src[13] = 0;

	i = 0;
	while (dst[i] != 0  && src[i] != 0)
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
		if (off != ft)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "dst : %-30s\tsrc : %-30s\tlen : %-10d\t", dst[i], src[i], len);
			fprintf(stderr, "%s : %lu\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s:%lu\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "dst : %-30s\tsrc : %-30s\tlen : %-10d\t", dst[i], src[i], len);
			fprintf(fd, "%s : %lu\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%lu\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "dst : %-30s\tsrc : %-30s\tlen : %-10d\t", dst[i], src[i], len);
			fprintf(fd, "%s : %lu\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%lu\n", TO_STR(FT_OFF), ft);
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

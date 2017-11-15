/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:19:42 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 18:43:24 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strdup
#define FT			ft_strdup

int		ft_strdup_check(FILE *fd)
{
	int		i;
	char	*src[15];
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
	src[13] = "\0";

	src[14] = 0; //Fin du tableau

	i = 0;
	while (src[i])
	{
		off = FT_OFF(src[i]);
		ft = FT(src[i]);
		if (strcmp(off, ft) != 0 || &src[i] == &ft) // verifie que le contenu soit egal. et ques les pointeurs aient des adresses differentes
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "src : %-30s (add:%p)\t", src[i], src[i]);
			fprintf(stderr, "%s : %-30s (add:%p)\t", TO_STR(FT_OFF), off, off);
			fprintf(stderr, "ft_%s : %-30s (add:%p)\n", TO_STR(FT_OFF), ft, ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "src : %-30s (add:%p)\t", src[i], src[i]);
			fprintf(fd, "%s : %-30s (add:%p)\t", TO_STR(FT_OFF), off, off);
			fprintf(fd, "ft_%s : %-30s (add:%p)\n", TO_STR(FT_OFF), ft, ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "src : %-30s (add:%p)\t", src[i], src[i]);
			fprintf(fd, "%s : %-30s (add:%p)\t", TO_STR(FT_OFF), off, off);
			fprintf(fd, "ft_%s : %-30s (add:%p)\n", TO_STR(FT_OFF), ft, ft);
		}
		free(off);
		free(ft);
		i++;
	}
	printf("OK\n");
	return (0);
}

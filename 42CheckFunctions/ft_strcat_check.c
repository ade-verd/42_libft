/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:37:57 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/16 15:15:03 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strcat
#define FT			ft_strcat

int		ft_strcat_check(FILE *fd)
{
	int		i;
	int		j;
	char	*s1[14];
	char	*s2[14];
	char	*off;
	char	*ft;

//Tableau de tests
	s1[0] = "";
	s1[1] = "\0";
	s1[2] = "a";
	s1[3] = "ab";
	s1[4] = "abc";
	s1[5] = "abcd\0";
	s1[6] = "abcde";
	s1[7] = "abcdef";
	s1[8] = "abcdefg";
	s1[9] = "abcdefgh";
	s1[10] = "1234567891011";
	s1[11] = "123456789101112131415";
	s1[12] = "4uPhUBFxb Bdrykx W8lbIC0TAuK";

	s1[13] = 0; //Fin du tableau

	i = 0;
	j = 12;
	while (s1[i] != 0) //Permettra de tester les chaines ds un sens puis ds l'autre
	{
		s2[j] = ft_reverse_char(s1[i]);
		j--;
		i++;
	}
	s2[13] = 0;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if((off = (char*)malloc(sizeof(char) * (strlen(s1[i]) + strlen(s2[i]) + 1))) == NULL)
			return (0);
		if((ft = (char*)malloc(sizeof(char) * (strlen(s1[i]) + strlen(s2[i]) + 1))) == NULL)
			return (0);
		strcpy(off, s1[i]); //on copie s1 vers off dont la place necessaire a ete allouee
		strcpy(ft, s1[i]); //idem pour refaire avec la fonction ft en excluant les resultats du premier test
		
		FT_OFF(off, s2[i]);
		FT(ft, s2[i]);
		if (strcmp(off, ft) != 0)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "s1 : %-30s\ts2 : %-30s\t", s1[i], s2[i]);
			fprintf(stderr, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "s1 : %-30s\ts2 : %-30s\t", s1[i], s2[i]);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "s1 : %-30s\ts2 : %-30s\t", s1[i], s2[i]);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
		}
		free(off);
		free(ft);
		ft_clearcontents(off);
		ft_clearcontents(ft);
		off = NULL;
		ft = NULL;
		i++;
	}
	printf("OK\n");
	return (0);
}/*

void *realloc_s(void *ptr, size_t size)
{
	void *ptr_realloc;

	ptr_realloc = (void*)realloc(ptr, size);
	if (ptr_realloc != NULL)
		ptr = ptr_realloc;
	return ptr_realloc;
}

int		ft_strcat_check(FILE *fd)
{
	int		i;
	int		j;
	char	*s1[14];
	char	*s2[14];
	char	*off = malloc(1);
	char	*ft = malloc(1);

//Tableau de tests
	s1[0] = "";
	s1[1] = "\0";
	s1[2] = "a";
	s1[3] = "ab";
	s1[4] = "abc";
	s1[5] = "abcd\0";
	s1[6] = "abcde";
	s1[7] = "abcdef";
	s1[8] = "abcdefg";
	s1[9] = "abcdefgh";
	s1[10] = "1234567891011";
	s1[11] = "123456789101112131415";
	s1[12] = "4uPhUBFxb Bdrykx W8lbIC0TAuK";

	s1[13] = 0; //Fin du tableau

	i = 0;
	j = 12;
	while (i <= 12) //Permettra de tester les chaines ds un sens puis ds l'autre
	{
		s2[j] = ft_reverse_char(s1[i]);
		j--;
		i++;
	}
	s2[13] = 0;

	i = 12;
	while (i >= 0)
	{
		if((off = (char*)realloc_s(off, sizeof(char) * (strlen(s1[i]) + strlen(s2[i]) + 1))) == NULL)
			return (-1);
		if((ft = (char*)realloc_s(ft, sizeof(char) * (strlen(s1[i]) + strlen(s2[i]) + 1))) == NULL)
			return (-1);
		strcpy(off, s1[i]); //on copie s1 vers off dont la place necessaire a ete allouee
		strcpy(ft, s1[i]); //idem pour refaire avec la fonction ft en excluant les resultats du premier test
		FT_OFF(off, s2[i]);
		FT(ft, s2[i]);
		if (strcmp(off, ft) != 0)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "s1 : %-30s\ts2 : %-30s\t", s1[i], s2[i]);
			fprintf(stderr, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "s1 : %-30s\ts2 : %-30s\t", s1[i], s2[i]);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "s1 : %-30s\ts2 : %-30s\t", s1[i], s2[i]);
			fprintf(fd, "%s : %-30s\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %s\n", TO_STR(FT_OFF), ft);
		}
		ft_clearcontents(off);
		ft_clearcontents(ft);
		i--;
	}
	free(off);
	off = NULL;
	free(ft);
	ft = NULL;
	printf("OK\n");
	return (0);
}*/

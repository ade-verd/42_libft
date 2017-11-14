/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:55:55 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 13:43:40 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h> //isdigit
#include <stdio.h> //printf
#include "./../libft.h"
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)
#define	FT_OFF		isdigit
#define FT			ft_isdigit

int		ft_isdigit_check(FILE *fd)
{
	int			i;
	int			tab[300 + 1];
	int			off;
	int			ft;

	i = 0;
//Tableau de tests
	while (i < 300)
	{
		tab[i] = i;
		i++;
	}
	tab[i] = 0; //Fin du tableau
	i = 0;
	while (tab[i] || i == 0)
	{
		off = FT_OFF(tab[i]);
		ft = FT(tab[i]);
		if (off != ft)
		{
			fprintf(stderr,"\nX_X KO\t");
			fprintf(stderr,"%d\t", i);
			fprintf(stderr,"%s:%d\t", TO_STR(FT_OFF), off);
			fprintf(stderr,"ft_%s:%d\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "%d\t", i);
			fprintf(fd, "%s:%d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%d\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "%d, ", i);
			fprintf(fd, "%s:%d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%d\n", TO_STR(FT_OFF), ft);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}

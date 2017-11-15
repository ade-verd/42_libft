/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:29:47 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 18:48:10 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		isalpha
#define FT			ft_isalpha

int		ft_isalpha_check(FILE *fd)
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
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "char_nb : %-10d", i);
			fprintf(stderr, "%s : %-10d\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s : %d\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "char_nb : %-10d", i);
			fprintf(fd, "%s : %-10d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %d\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "char_nb : %-10d", i);
			fprintf(fd, "%s : %-10d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %d\n", TO_STR(FT_OFF), ft);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:20:27 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 13:48:20 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	//atoi
#include <stdio.h> //printf
#include "./../libft.h"
#include "ft_display_file.h" //open, close, write in files
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)
#define	FT_OFF		atoi
#define FT			ft_atoi

int		ft_atoi_check(FILE *fd)
{
	int		i;
	char	*tab[15];
	int		off;
	int		ft;

	i = 0;
//Tableau de tests
	tab[0] = "";
	tab[1] = " ";
	tab[2] = "\0";
	tab[3] = "123";
	tab[4] = "-123";
	tab[5] = "    1234";
	tab[6] = "\n\t\v\f    12345";
	tab[7] = " 1238r54";
	tab[8] = " \n\t  -12+45h";
	tab[9] = " --128 1";
	tab[10] = "   ++87451t";
	tab[11] = "as12";
	tab[12] ="+1235489.15661";
	tab[13] ="+1235489,15661";

	tab[14] = 0; //Fin du tableau

	while (tab[i])
	{
		off = FT_OFF(tab[i]);
		ft = FT(tab[i]);
		if (off != ft)
		{
			fprintf(stderr,"\nX_X KO\t");
			fprintf(stderr,"%s:%d\t", TO_STR(FT_OFF), off);
			fprintf(stderr,"ft_%s:%d\n", TO_STR(FT_OFF), ft);
			fprintf(stderr,"%s\t", tab[i]);
			fprintf(fd,"\nX_X KO\t");
			fprintf(fd,"%s:%d\t", TO_STR(FT_OFF), off);
			fprintf(fd,"ft_%s:%d\n", TO_STR(FT_OFF), ft);
			fprintf(fd,"%s\t", tab[i]);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "%s:%d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s:%d\t", TO_STR(FT_OFF), ft);
			fprintf(fd, "%s\n", tab[i]);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}

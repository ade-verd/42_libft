/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:27:27 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/09 12:42:32 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <string.h> //size_t
#include "./../libft.h"

int		ft_strlen_check(void)
{
	int				i;
	char			*tab[14];
	unsigned long	off;
	unsigned long	ft;

	i = 0;

//Tableau de tests
	tab[0] = "Salut ";
	tab[1] = " Salut ";
	tab[2] = " ";
	tab[3] = "";
	tab[4] = "0";
	tab[5] = "\0";
	tab[6] = "npg9r58R";
	tab[7] = "B6RNg2JhIa";
	tab[8] = "y3l";
	tab[9] = "1wpLuJjkV0td9Bs ZmykwLzadQHVqi 6dj4I2FR fjmJ9q64SAKs PS3AuGnvLYEUg8 oi5hdX0Cr CcOgePERA6tj 7cmJTVjQHyzl kdV3M14eb 1pt27";
	tab[10] = "UXLMvD1I jWCMQJ0qYkK ZnxoJQjTa wyf6mERvrL";
	tab[11] = "Kzox2vJVf6W XtZpG6 5v3c4uPhUBFxb Bdrykx W8lbIC0TAtY CuZVwqf6X ym8MhzEX2duK";
	tab[12] ="4uPhUBFxb Bdrykx W8lbIC0TAtY CuZVwqf6X ym8MhzEX2duK";

	tab[13] = 0; //Fin du tableau

while (tab[i])
	{
		off = strlen(tab[i]);
		ft = ft_strlen(tab[i]);
		if (off != ft)
		{
			printf("X_X KO\t");
			return (0);
		}
		else
			printf("OK ;)\t");
		printf("%s\t", tab[i]);
		printf("strlen:%lu\t", off);
		printf("ft_strlen:%lu\n", ft);
		i++;
	}
	return (0);
}

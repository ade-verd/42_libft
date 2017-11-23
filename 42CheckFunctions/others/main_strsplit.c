/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:08:32 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/23 12:01:10 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h>	//atoi
#include "./../../libft.h"

static int		ft_count_wds(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

int		main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	if (ac != 3)
		return(0);
	printf("nb_words:\t%d\n", ft_count_wds(av[1], av[2][0]));
	tab = ft_strsplit(av[1], av[2][0]);
	while (tab[i] != 0)
	{
		printf("|%s|\n", tab[i]);
		i++;
	}
	return (0);
}

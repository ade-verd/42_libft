/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 10:37:13 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/16 16:38:51 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Necessary for strcpy

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main(int argc, char **av)
{
	char	*dest;

	if (argc == 4)
	{
		printf("strcmp off : %d\t", strcmp(av[1], av[2]));
		printf("strcmp ADV : %d\n", ft_strcmp(av[1], av[2]));
		printf("strNcmp off : %d\t", strncmp(av[1], av[2], atoi(av[3])));
		printf("strNcmp ADV : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	}
	return (0);
}

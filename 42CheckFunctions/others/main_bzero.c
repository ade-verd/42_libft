/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:04:52 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/20 18:23:49 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Necessary for strcpy
#include "./../../libft.h"

int		main(int argc, char **argv)
{
	char	*off;
	char	*ft;
	int		i;
	int		str_len;

	i = 0;
	if (argc == 3)
	{
		str_len = strlen(argv[1]);
		off = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		ft = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		off = strcpy(off, argv[1]);
		ft = strcpy(ft, argv[1]);
		printf("src:\t%-30s\t%p\n", off, off);
		bzero(off, (size_t)atoi(argv[2]));
		printf("off:\t%-30s\t%p\n", off, off);
		while (i < str_len)
		{
			printf("%c", off[i]);
			i++;
		}
		i = 0;
		printf("\nsrc:\t%-30s\t%p\n", ft, ft);
		ft_bzero(ft, (size_t)atoi(argv[2]));
		printf("ft:\t%-30s\t%p\n", ft, ft);
		while (i < str_len)
		{
			printf("%c", ft[i]);
			i++;
		}
		printf("\n");
	}
	return (0);
}

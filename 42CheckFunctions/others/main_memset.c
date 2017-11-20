/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:49:04 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/20 16:59:40 by ade-verd         ###   ########.fr       */
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

	if (argc == 4)
	{
		off = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		ft = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		off = strcpy(off, argv[1]);
		ft = strcpy(ft, argv[1]);
		printf("src:\t%-30s\t%p\n", off, off);
		memset(off, atoi(argv[2]), (size_t)atoi(argv[3]));
		printf("off:\t%-30s\t%p\n", off, off);
		printf("src:\t%-30s\t%p\n", ft, ft);
		ft_memset(ft, atoi(argv[2]), (size_t)atoi(argv[3]));
		printf("ft:\t%-30s\t%p\n", ft, ft);
	}
	return (0);
}

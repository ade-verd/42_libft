/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:18:12 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/20 13:47:01 by ade-verd         ###   ########.fr       */
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
		off = strstr(argv[1], argv[2]);
		printf("address *s : %p\n", argv[1]);
		printf("strstr off : %s\t%p\n", off, off);
		ft = ft_strstr(argv[1], argv[2]);
		printf("strstr ft : %s\t%p\n", ft, ft);
		if (ft == off)
			printf("yes, same address\n");
		else
			printf("no, diff address\n");
		//
		printf("-----\n");
		//
		off = strnstr(argv[1], argv[2], atoi(argv[3]));
		printf("strnstr off : %s\t%p\n", off, off);
		ft = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
		printf("strnstr ft : %s\t%p\n", ft, ft);
		if (ft == off)
			printf("yes, same address\n");
		else
			printf("no, diff address\n");
	}
	return (0);
}

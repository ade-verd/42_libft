/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 10:37:13 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 18:10:47 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Necessary for strcpy

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char	*dest;

	if (argc == 3)
	{
		dest = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		strcpy(dest, argv[1]);
		strcpy(dest, argv[2]);
		printf("Fonction off : %s\n", dest);
		printf("argv : %s\n", argv[1]);
		ft_strcpy(argv[1], argv[2]);
		printf("Fonction ADV : %s\n", argv[1]);
//		strcpy(dest, argv[2]);
//		printf("Fonction off : %s\n", dest);
		free(dest);
	}
	return (0);
}

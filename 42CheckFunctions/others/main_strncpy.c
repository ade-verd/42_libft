/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:39:47 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/14 16:57:36 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Necessary for strcpy
#include "./../../libft.h"

int		main(int argc, char **argv)
{
	char	*dest;

	if (argc == 4)
	{
		dest = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
		strcpy(dest, argv[1]);
		strncpy(dest, argv[2], atoi(argv[3]));
		printf("Fonction off : %s\n", dest);
		free(dest);
	}
	return (0);
}

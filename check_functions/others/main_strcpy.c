/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 10:37:13 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/10 16:36:50 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> //Necessary for strcpy

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char	*src;
	char	*dest;

	if (argc == 3)
	{
		ft_strcpy(argv[1], argv[2]);
		printf("Fonction ADV : %s\n", argv[1]);
		strcpy(argv[1], argv[2]);
		printf("Fonction off : %s\n", argv[1]);
	}
	return (0);
}

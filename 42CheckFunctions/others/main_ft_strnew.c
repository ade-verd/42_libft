/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:49:04 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/22 13:21:52 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Necessary for strcpy
#include "./../../libft.h"

int		main(int argc, char **argv)
{
	char	*off;

	if (argc == 4)
	{
		off = ft_strnew(3);
		printf("%s\n", off);
	}
	return (0);
}

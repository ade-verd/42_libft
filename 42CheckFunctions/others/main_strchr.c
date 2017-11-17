/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:26:41 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/17 16:40:34 by ade-verd         ###   ########.fr       */
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

	if (argc == 3)
	{
		off = strchr(argv[1], argv[2][0]);
		printf("addresse *s : %p\n", argv[1]);
		printf("strchr off : %s\t%p\n", off, off);
		ft = ft_strchr(argv[1], argv[2][0]);
		printf("strchr ft : %s\t%p\n----\n", ft, ft);
		//
		off = strrchr(argv[1], argv[2][0]);
		printf("strrchr off : %s\t%p\n", off, off);
		ft = ft_strrchr(argv[1], argv[2][0]);
		printf("strrchr ft : %s\t%p\n", ft, ft);
	}
	return (0);
}

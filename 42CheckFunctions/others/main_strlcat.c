/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 10:37:13 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/17 15:46:54 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Necessary for strcpy

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		main(int argc, char **av)
{
	char	*off;
	char	*ft;
	size_t	ret_off;
	size_t	ret_ft;
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	if (argc == 4)
	{
		off = (char*)malloc(sizeof(char) * (strlen(av[1]) + strlen(av[2]) + 1));
		ft = (char*)malloc(sizeof(char) * (strlen(av[1]) + strlen(av[2]) + 1));
		strcpy(off, av[1]);
		strcpy(ft, av[1]);
		ret_off = strlcat(off, av[2], atoi(av[3]));
		ret_ft = ft_strlcat(ft, av[2], atoi(av[3]));
		printf("dst : %lu\tsrc : %lu\n", strlen(av[1]), strlen(av[2]));
		printf("Fonction off : |%s| (%lu)\n", off, ret_off);
		printf("Fonction  ft : |%s| (%lu)\n", ft, ret_ft);
		free(off);
		off = NULL;
		free(ft);
		ft = NULL;
/*		ret_off = strlcat(buff1, str, max);
		ret_ft = ft_strlcat(buff2, str, max);
		printf("dst : %lu\tsrc : %lu\n", strlen(buff1), strlen(str));
		printf("Fonction off : |%s| (%lu)\n", buff1, ret_off);
		printf("Fonction  ft : |%s| (%lu)\n", buff2, ret_ft);
		char s1[4] = "";
		char s2[4] = "";
		ret_off = strlcat(s1,  "thk to ntoniolo for this test !", 4);
		ret_ft = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
		printf("dst : %lu\tsrc : %lu\n", strlen(s1), strlen("thx to ntoniolo for this test !"));
		printf("Fonction off : |%s| (%lu)\n", s1, ret_off);
		printf("Fonction  ft : |%s| (%lu)\n", s2, ret_ft);
*/	}
	return (0);
}

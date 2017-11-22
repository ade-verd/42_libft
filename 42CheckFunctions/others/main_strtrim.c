/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:31:05 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/22 18:42:54 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h>	//atoi
#include "./../../libft.h"

/*int		main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("ft_strtrim:\t%s\n", ft_strtrim(av[1]));

	return (0);
}*/

int		main(void)
{
	printf("|%s|\n", ft_strtrim("\t\t\t\n \t\t\t\t\n\t "));
	return (0);
}

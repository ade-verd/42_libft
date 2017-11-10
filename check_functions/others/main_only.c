/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:57:08 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/10 13:19:13 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h>	//atoi
#include "./../libft.h"

int		main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("atoi:\t%d\n", atoi(av[1]));
	printf("ft_atoi:\t%d\n", ft_atoi(av[1]));

	return (0);
}

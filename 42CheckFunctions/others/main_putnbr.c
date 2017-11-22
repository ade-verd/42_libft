/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:30:35 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/22 11:35:22 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <unistd.h> //write
#include <stdlib.h> //atoi
#include "./../../libft.h"

int		main(int ac, char **av)
{
	if (ac != 2)
		return(0);
//	printf("ft_putnbr:\t", ft_putnbr(atoi(av[1])));
	ft_putnbr(atoi(av[1]));
	return (0);
}

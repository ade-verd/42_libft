/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:52:43 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/23 17:22:19 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h>	//atoi
#include "./../../libft.h"

static int		ft_intlen(int n)
{
	int		nb_char;
	int		sign;

	nb_char = 1;
	sign = (n < 0 ? -1 : 1);
	while (n / 10 != 0)
	{
		nb_char++;
		n = n / 10;
	}
	if (sign < 0)
		return (nb_char + 1);
	return (nb_char);
}

int		main(int ac, char **av)
{
//	char	*str;
	int		len;

	if (ac != 2)
		return(0);
	len = ft_intlen(atoi(av[1]));
	printf("len:\t%d\n", len);
//	if ((str = (char*)malloc(sizeof(char) * len + 1)) == NULL)
//		return (0);
//	ft_putnbr_instr(atoi(av[1]), str, 0);
//	printf("str:\t%s\n", str);
	printf("str:\t%s\n", ft_itoa(atoi(av[1])));

	return (0);
}

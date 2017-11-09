/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:31:10 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/09 19:49:38 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf

int		ft_strlen_check(void);
int		ft_isalpha_check(void);
int		ft_isdigit_check(void);
int		ft_isalnum_check(void);
int		ft_isascii_check(void);
int		ft_isprint_check(void);

int		main(void)
{
	printf("\t~START~\n");
	printf("\tft_strlen\t");
	ft_strlen_check();
	printf("\tft_isalpha\t");
	ft_isalpha_check();
	printf("\tft_isdigit\t");
	ft_isdigit_check();
	printf("\tft_isalnum\t");
	ft_isalnum_check();
	printf("\tft_isascii\t");
	ft_isascii_check();
	printf("\tft_isprint\t");
	ft_isprint_check();
	printf("\t~END~\n");
	return (0);
}

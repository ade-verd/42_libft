/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:37:53 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 18:38:40 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"

char	*ft_reverse_char(char *str)
{
	int		len;
	int		i;
	char	*rev_char;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	rev_char = (char*)malloc(sizeof(char) * len + 1);
	while (len - 1 >= 0)
	{
		rev_char[i] = str[len - 1];
		len--;
		i++;
	}
	rev_char[i] = '\0';
	return (rev_char);
}

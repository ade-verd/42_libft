/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:40:43 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/21 16:59:06 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	i = 0;
	s1_str = (unsigned char*)s1;
	s2_str = (unsigned char*)s2;
	if (ft_strlen((char*)s1_str) == 0 && ft_strlen((char*)s2_str) == 0)
		return (0);
	while (n--)
	{
		if (s1_str[i] != s2_str[i])
			return (s1_str[i] - s2_str[i]);
		i++;
	}
	return (0);
}

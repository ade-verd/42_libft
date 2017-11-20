/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:57:47 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/20 19:43:25 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*_dst;
	char			*_src;
	char			*point;

	point = NULL;
	_dst = dst;
	_src = (char*)src;
	while (n--)
	{
		*_dst++ = *_src++;
		if (*_src == (unsigned char)c)
		{
			*_dst = (unsigned char)c;
			return (point = (char*)&dst);
		}
	}
	return (point);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:57:47 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/21 10:26:24 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*_dst;
	unsigned char	*_src;
	char	*point;

	i = 0;
	_dst = (unsigned char*)dst;
	_src = (unsigned char*)src;
	point = NULL;
	while (n--)
	{
		_dst[i] = _src[i];
		if (_src[i] == (unsigned char)c)
		{
			_dst[i] = (unsigned char)c;
			return (dst + i + 1);
		}
		i++;
	}
	return (point);
}

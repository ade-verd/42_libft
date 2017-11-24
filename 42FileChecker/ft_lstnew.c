/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:49:52 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/24 16:20:53 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		*ft_memocpy(void *dst, const void *src, size_t n)
{
	char	*dst_2;
	char	*src_2;

	dst_2 = dst;
	src_2 = (char*)src;
	while (n--)
		*dst_2++ = *src_2++;
	return (dst);
}

static t_list	*ft_add_link(t_list *list, void *content, size_t size)
{
	t_list	*tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->content_size = size;
		tmp->next = list;
	}
	return (tmp);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;
	void	*content_cpy;

	newlist = NULL;
	if (content == NULL)
		newlist = ft_add_link(newlist, NULL, 0);
	else
	{
		if ((content_cpy = (void*)malloc(content_size)) == NULL)
			return (NULL);
		content_cpy = ft_memocpy(content_cpy, content, content_size);
		newlist = ft_add_link(newlist, content_cpy, content_size);
	}
	return (newlist);
}

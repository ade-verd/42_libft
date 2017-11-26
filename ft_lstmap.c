/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:31:09 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/26 22:45:05 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*atic void		*ft_memocpy(void *dst, const void *src, size_t n)
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

static t_list			*ft_listnew(void const *content, size_t content_size)
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
*/
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	f_lst;
	t_list	f_next;

	if (lst == NULL || f == NULL)
		return (NULL);
	f_lst = NULL;
	f_next = NULL;
	while (lst)
	{
		if (f_lst == NULL)
		{
			f_lst = f(lst);
			f_next = f_lst;
		}
		else
			f_next->next = f(lst);
	}
	f_next->next = NULL;
	return (f_lst);
}

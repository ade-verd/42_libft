/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:40:00 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/24 17:39:51 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../libft.h"
#include <stdio.h> //printf
#include <stdlib.h> //malloc
#include <ctype.h> //toupper

static t_list	*ft_addlink(t_list *list, void *content, size_t size)
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

void	ft_strtoupper(t_list *link)
{
	char	*str;
	int		i;

	i = 0;
	str = link->content;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

int		main(void)
{
	t_list	*new;
	t_list	*link1;
	t_list	*link2;

	new = ft_lstnew("Salut", 6); //test avec un char*
	link1 = ft_lstnew("Yop", 4); //test avec un char*
	ft_lstadd(&link1, new);
	ft_lstiter(new, &ft_strtoupper);
	while (new)
	{
		printf("content: %s\tsize: %lu\n", new->content, new->content_size);
		new = new->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:11:25 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/27 11:59:32 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../libft.h"
#include <stdio.h> //printf
#include <ctype.h> //toupper

t_list*	ft_strtoupper(t_list *link)
{
	char	*str;
	int		i;

	i = 0;
	str = link->content;
	if (link)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;
		}
	}
	return (link);
}

int		main(void)
{
	t_list	*new;
	t_list	*link1;
	t_list	*new2;

//	new = ft_lstnew(NULL, 6); //test si content est NULL
	new = ft_lstnew("Salut", 6); //test avec un char*
	link1 = ft_lstnew("Yop", 4); //test avec un char*
	ft_lstadd(&link1, new);
	new2 = ft_lstmap(new, &ft_strtoupper);
	while (new2)
	{
		printf("content: %s\tsize: %lu\t", new->content, new->content_size);
		printf("->\tcontent: %s\tsize: %lu\n", new2->content, new2->content_size);
		new = new->next;
		new2 = new2->next;
	}
	return (0);
}

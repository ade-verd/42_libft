/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:40:00 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/24 16:02:08 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../libft.h"
#include <stdio.h> //printf

int		main(void)
{
	t_list	*new;
	t_list	*link1;
	t_list	*link2;

//	new = ft_lstnew(NULL, 6); //test si content est NULL
	new = ft_lstnew("Salut", 6); //test avec un char*
	link1 = ft_lstnew("Yop", 4); //test avec un char*
	link2 = ft_lstnew("Wsh", 4); //test avec un char*
	ft_lstadd(&link1, new);
	ft_lstadd(&link2, link1);
	while (new)
	{
		printf("content: %s\tsize: %lu\n", new->content, new->content_size);
		new = new->next;
	}
	return (0);
}

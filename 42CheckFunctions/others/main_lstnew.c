/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:34:57 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/24 13:21:35 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../libft.h"
#include <stdio.h> //printf

int		main(void)
{
	t_list	*new;
	int		i;
	int		*p_i;


	i = 123;
	p_i = &i;

//	new = ft_lstnew(NULL, 6); //test si content est NULL
	new = ft_lstnew("Salut", 6); //test avec un char*
//	new = ft_lstnew(p_i, sizeof(p_i)); //test avec un int
	while (new)
	{
		printf("content: %s\tsize: %lu\n", new->content, new->content_size);
		new = new->next;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:03:31 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 11:34:39 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_open_file(char *path, int flags)
{
	int		fd;

	fd = open(path, flags);
	if (fd == -1)
	{
		ft_putstr_in(2, "open() error\n");
		return (-1);
	}
	return (fd);
}

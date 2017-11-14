/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:58:24 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 11:34:21 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_file_display(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
		{
			ft_putstr_in(2, "read() error\n");
			return (-1);
		}
		buf[ret] = '\0';
		ft_putstr_in(1, buf);
	}
	return (0);
}

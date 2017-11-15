/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:03:26 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 18:46:53 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_close_file(int fd)
{
	int		ret;

	ret = close(fd);
	if (ret == -1)
	{
		ft_putstr_in(2, "close() error\n");
		return (-1);
	}
	return (0);
}

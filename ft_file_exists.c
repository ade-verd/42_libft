/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_exists.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <ade-verd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:20:05 by ade-verd          #+#    #+#             */
/*   Updated: 2018/07/25 12:27:01 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_file_exists(char *path)
{
	int		fd;

	if ((fd = ft_open_fd(path, O_RDONLY, 0)) != -1)
	{
		ft_close_fd(fd);
		return (1);
	}
	return (0);
}
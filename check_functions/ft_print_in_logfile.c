/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_in_logfile.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:04:53 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 12:59:32 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_print_in_logfile(char *path, char *str)
{
	int		fd;

	fd = ft_open_file(path, O_WRONLY | O_CREAT | O_APPEND);
	if (fd < 0)
		return (0);
	ft_putstr_in(fd, str);
	ft_close_file(fd);
	return (fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:47:07 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/13 11:34:25 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE	10

void	ft_putstr_in(int fd, char *str);

int		ft_open_file(char *path, int flags);
int		ft_file_display(int fd);
int		ft_close_file(int fd);
int		ft_print_in_logfile(char *path, char *str);

#endif

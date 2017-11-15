/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_and_run.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:33:57 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 18:36:03 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"

void	ft_print_and_run(int (*f)(FILE*), char *function_name, FILE* fd_log)
{
	fprintf(fd_log, "\n>>>>\t%-20s\n", function_name);
	printf("\t%-20s\t", function_name);
	f(fd_log);
}

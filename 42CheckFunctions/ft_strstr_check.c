/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:12:34 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/20 14:35:06 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strstr
#define FT			ft_strstr

int		ft_strstr_check(FILE *fd)
{
	int		i;
//	int		j;
	char	*src[14];
	char	*tofind[14];
	char	*off;
	char	*ft;

//Tableau de tests
	src[0] = "";
	src[1] = "\0";
	src[2] = "\t";
	src[3] = "Aiguille dans une botte de foin";
	src[4] = "Aiguille dans une botte de foin";
	src[5] = "Aiguille dans une botte de foin";
	src[6] = "Aiguille dans une botte de foin";
	src[7] = "Aiguille dans une botte de foin";
	src[8] = "Aiguille dans une botte de foin";
	src[9] = "Aiguille dans une botte de foin";
	src[10] = "Aiguille dans une botte de foin";

	i = 0;

	tofind[0] = "";
	tofind[1] = "\0";
	tofind[2] = "\t";
	tofind[3] = "Aiguille";
	tofind[4] = "foin";
	tofind[5] = "foin.";
	tofind[6] = "Aiguille dans une botte de foin";
	tofind[7] = "une";
	tofind[8] = " une ";
	tofind[9] = " ";
	tofind[10] = "foin\0";

	tofind[11] = 0;

	i = 0;

	while (i < 11)
	{
		off = FT_OFF(src[i], tofind[i]);
		ft = FT(src[i], tofind[i]);
		if (off != ft)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "src : %40s (%p)\ttofind : %-40s\t", src[i], src[i], tofind[i]);
			fprintf(stderr, "%s : %-40s\t%-10p\t", TO_STR(FT_OFF), off, off);
			fprintf(stderr, "ft_%s : %-40s\t%-10p\n", TO_STR(FT_OFF), ft, ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "src : %40s (%p)\ttofind : %-40s\t", src[i], src[i], tofind[i]);
			fprintf(fd, "%s : %-40s\t%-10p\t", TO_STR(FT_OFF), off, off);
			fprintf(fd, "ft_%s : %-40s\t%-10p\n", TO_STR(FT_OFF), ft, ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "src : %40s (%p)\ttofind : %-40s\t", src[i], src[i], tofind[i]);
			fprintf(fd, "%s : %-40s\t%-10p\t", TO_STR(FT_OFF), off, off);
			fprintf(fd, "ft_%s : %-40s\t%-10p\n", TO_STR(FT_OFF), ft, ft);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}

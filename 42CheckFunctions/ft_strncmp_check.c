/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:02:33 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/16 18:08:34 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strncmp
#define FT			ft_strncmp

int		ft_strncmp_check(FILE *fd)
{
	int		i;
	char	*s1[14];
	char	*s2[14];
	int		off;
	int		ft;

//Tableau de tests
	s1[0] = "";
	s1[1] = "\0b";
	s1[2] = "a";
	s1[3] = "aa";
	s1[4] = "aa\0a";
	s1[5] = "aa";
	s1[6] = "abcdefgh";
	s1[7] = "aaaaaaaaaaaa";
	s1[8] = "012345678\\";
	s1[9] = "\0"; /*test cast diff in unsigned char*/
	s1[10] = "\x12\xff\x65\x12\xbd\xde\xad"; /*test non ascii chars*/
	s1[11] = 0; //Fin du tableau

	s2[0] = "";
	s2[1] = "\0";
	s2[2] = "\0a";
	s2[3] = "aa\0";
	s2[4] = "aa\0a";
	s2[5] = "ab";
	s2[6] = "abcdefgz";
	s2[7] = "aaaaaaaaaa\ra";
	s2[8] = "012345678\0";
	s2[9] = "\200"; /*test cast diff in unsigned char*/
	s2[10] = "\x12\x02"; /*test non ascii chars*/
	s2[11] = 0; //Fin du tableau

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		off = FT_OFF(s1[i], s2[i], i);
		ft = FT(s1[i], s2[i], i);
		if (off != ft)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "s1 : %-30s\ts2 : %-30s\tlen : %d\t", s1[i], s2[i], i);
			fprintf(stderr, "%s : %d\t", TO_STR(FT_OFF), off);
			fprintf(stderr, "ft_%s : %d\n", TO_STR(FT_OFF), ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "s1 : %-30s\ts2 : %-30s\tlen : %d\t", s1[i], s2[i], i);
			fprintf(fd, "%s : %d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %d\n", TO_STR(FT_OFF), ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "s1 : %-30s\ts2 : %-30s\tlen : %d\t", s1[i], s2[i], i);
			fprintf(fd, "%s : %d\t", TO_STR(FT_OFF), off);
			fprintf(fd, "ft_%s : %d\n", TO_STR(FT_OFF), ft);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}

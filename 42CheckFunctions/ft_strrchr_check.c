/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:45:07 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/18 17:17:02 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_functions.h"
#define	FT_OFF		strrchr
#define FT			ft_strrchr

int		ft_strrchr_check(FILE *fd)
{
	int		i;
//	int		j;
	char	*src[14];
	char	*car[14];
	char	*off;
	char	*ft;

//Tableau de tests
	src[0] = "";
	src[1] = "\0";
	src[2] = "\n";
	src[3] = "wdkJiQUm6pHrXH7rFQqaPj";
	src[4] = "eE8PDddxVuhiPeEG3Ur6";
	src[5] = "wi9XTBpNbJwnzKhVOQbx";
	src[6] = "oqwdjojsocascoisajci";
	src[7] = "aascsacpkpaosckopaks";
	src[8] = "01564894156164984894";
	src[9] = "abcdefghcaslc[pslacl";
	src[10] = "dasdsadopkasdopksakd";
	src[11] = "123dsfds ds fdsf sdf";
	src[12] = "\t\t\t\t\t\r\t\0\rds";

	i = 0;

	car[0] = "";
	car[1] = "\0";
	car[2] = "\n";
	car[3] = "Q";
	car[4] = "P";
	car[5] = "w";
	car[6] = "j";
	car[7] = "k";
	car[8] = "5";
	car[9] = "[";
	car[10] = "o";
	car[11] = " ";
	car[12] = "\r";


	car[13] = 0;

	i = 0;

	while (src[i])
	{
	//	if ((off = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1))) == NULL)
	//		return (0);
	//	if ((ft = (char*)malloc(sizeof(char) * (strlen(src[i]) + 1))) == NULL)
	//		return (0);
	//	strcpy(off, dest[j]); //on copie dest vers tmp[i] dont la place necessaire a ete allouee
	//	strcpy(ft, dest[j]); //idem pour refaire avec la fonction officielle en excluant les resultats du premier test
		off = FT_OFF(src[i], car[i][0]);
		ft = FT(src[i], car[i][0]);
		if (&off != &ft)
		{
			fprintf(stderr, "\nX_X KO\t");
			fprintf(stderr, "src : %-20s\tchar : %-2s\t", src[i], car[i]);
			fprintf(stderr, "%s : %-20s\t%-10p\t", TO_STR(FT_OFF), off, off);
			fprintf(stderr, "ft_%s : %-20s\t%-10p\n", TO_STR(FT_OFF), ft, ft);
			fprintf(fd, "\nX_X KO\t");
			fprintf(fd, "src : %-20s\tchar : %-2s\t", src[i], car[i]);
			fprintf(fd, "%s : %-20s\t%-10p\t", TO_STR(FT_OFF), off, off);
			fprintf(fd, "ft_%s : %-20s\t%-10p\n", TO_STR(FT_OFF), ft, ft);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd, "src : %-20s\tchar : %-2s\t", src[i], car[i]);
			fprintf(fd, "%s : %-20s\t%-10p\t", TO_STR(FT_OFF), off, off);
			fprintf(fd, "ft_%s : %-20s\t%-10p\n", TO_STR(FT_OFF), ft, ft);
		}
	//	free(off);
	//	off = NULL;
	//	free(ft);
	//	ft = NULL;
		i++;
	//	j--;
	}
	printf("OK\n");
	return (0);
}

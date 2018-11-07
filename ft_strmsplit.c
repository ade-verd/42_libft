/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_mult.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <ade-verd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:13:43 by ade-verd          #+#    #+#             */
/*   Updated: 2018/11/07 16:49:03 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		ft_count_words(const char *str, char *chars)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (ft_strchr(chars, str[i]) && ft_strchr(chars, str[i + 1]))
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char	*ft_extract_word(const char *str, char *chars, int *i)
{
	char	*word;
	int		j;

	if (!(word = (char*)malloc(sizeof(word) * (ft_strlen(str)))))
		return (NULL);
	j = 0;
	while (str[*i] && !ft_strchr(chars, str[*i]))
	{
		word[j] = str[*i];
		j++;
		*i += 1;
	}
	word[j] = '\0';
	while (str[*i] && ft_strchr(chars, str[*i]))
		*i += 1;
	return (word);
}

char			**ft_strmsplit(const char *str, char *chars)
{
	int		i;
	int		i_tab;
	int		word;
	char	**tab;

	i = 0;
	i_tab = 0;
	word = ft_count_words(str, chars);
	if (!(tab = (char**)malloc(sizeof(tab) * (ft_count_words(str, chars) + 2))))
		return (NULL);
	while (str[i] && ft_strchr(chars, str[i]))
		i++;
	while (i_tab < word && str[i])
	{
		tab[i_tab] = ft_extract_word(str, chars, &i);
		i_tab++;
	}
	tab[i_tab] = NULL;
	return (tab);
}

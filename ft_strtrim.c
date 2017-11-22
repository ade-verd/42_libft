/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:46:00 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/22 19:19:20 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		a;
	int		end;
	int		diff;

	i = 0;
	a = 0;
	if (s == NULL)
		return (NULL);
	while (s[a] && (s[a] == ' ' || s[a] == '\t' || s[a] == '\n'))
		a++;
	end = ft_strlen(s) - 1;
	while (s[end] && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
	diff = (end < a ? 1 : end - a + 1);
	if ((trim = (char*)malloc(sizeof(char) * (diff + 1))) == NULL)
		return (NULL);
	while (a <= end)
	{
		trim[i++] = s[a];
		a++;
	}
	trim[i] = '\0';
	return (trim);
}

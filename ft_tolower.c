/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:24:26 by ade-verd          #+#    #+#             */
/*   Updated: 2018/01/31 16:17:39 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	int		i;

	i = 'A';
	while (i <= 'Z')
	{
		if (i == c)
			return (c + 32);
		i++;
	}
	return (c);
}

char	*ft_strlower(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

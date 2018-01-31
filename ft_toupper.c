/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:24:30 by ade-verd          #+#    #+#             */
/*   Updated: 2018/01/31 16:17:32 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	int		i;

	i = 'a';
	while (i <= 'z')
	{
		if (i == c)
			return (c - 32);
		i++;
	}
	return (c);
}

char	*ft_strupper(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

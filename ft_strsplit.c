/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:51:24 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/19 14:43:04 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(char const *s, char c)
{
	size_t i;
	size_t w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		w++;
	}
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	cc;
	size_t	w;
	size_t	i;

	if (!s)
		return (0);
	cc = 0;
	w = 0;
	str = (char**)malloc(sizeof(char*) * (ft_wc(s, c) + 1));
	if (!str)
		return (0);
	while (w++ < ft_wc(s, c))
	{
		while (s[cc] == c)
			cc++;
		if (s[cc] == '\0')
			break ;
		i = cc;
		while (s[cc] != c && s[cc] != '\0')
			cc++;
		str[w - 1] = ft_strsub(s, i, cc - i);
	}
	str[--w] = 0;
	return (str);
}

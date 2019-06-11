/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:51:24 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/11 14:59:08 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_word_count(char const *s, char c)
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

static size_t ft_char_count(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t as;
	size_t a;
	size_t len;
	size_t slen;
	char **str;

	if (!s)
		return (0);
	as = ft_word_count(s, c);
	a = 0;
	str = (char **)malloc(sizeof(char *) * (as + 1));
	len = 0;
	slen = ft_strlen(s);
	if (!str)
		return (0);
	while (s[len] != '\0')
	{
		while (s[len] == c && s[len] != '\0')
			len++;
		if (len < slen)
			str[a] = ft_strsub(s, len, ft_char_count(&s[len], c));
		len += ft_char_count(&s[len], c);
		a++;
	}
	str[a] = NULL;
	return (str);
}


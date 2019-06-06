/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:13:29 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/06 17:56:52 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *str;
	unsigned char cc;

	str = (char *)s;
	i = ft_strlen(str) - 1;
	cc = (unsigned char)c;
	if (i < 0)
	{
		return (0);
	}
	if (cc == '\0')
	{
		return (str + ft_strlen(s));
	}
	if (str[i] == '\0')
	{
		return (str + ft_strlen(str));
	}
	while (i >= 0)
	{
		if(str[i] == cc)
		{
			return (str + i);
		}
		i--;
	}
	return (0);
}

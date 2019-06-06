/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:31:10 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/06 16:59:28 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *str;
	unsigned char cc;

	i = 0;
	str = (char *)s;
	cc = (unsigned char)c;
	if (cc == '\0')
	{
		return (str + ft_strlen(str));
	}
	while (str[i] != '\0')
	{
		if(str[i] == cc)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}


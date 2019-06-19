/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:13:29 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 15:34:28 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str) - 1;
	if (i < 0)
		return (0);
	if (c == '\0')
		return (str + ft_strlen(s));
	if (str[i] == '\0')
		return (str + ft_strlen(str));
	while (i >= 0)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	return (0);
}

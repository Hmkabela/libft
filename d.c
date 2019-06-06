/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:45:41 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/06 12:52:37 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		return ((char *)s);
	}
	while (*s++ != '\0')
	{
		if(*s == (unsigned char)c)
		{
			return ((char *)s);
		}
	}
	return (0);
}

int	main()
{
	char *q;

	q = ft_strchr("Hlamalani", 'm');
	printf("%s", q);
	return (0);
}

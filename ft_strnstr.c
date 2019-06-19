/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:49:09 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/19 14:21:39 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t ih;
	size_t in;

	ih = 0;
	in = 0;
	if ((char)n[0] == '\0')
		return ((char *)h);
	if (((char)h[0] == '\0' || ft_strlen((char*)h) < ft_strlen((char *)n)))
		return (NULL);
	while ((char)h[ih] != '\0' && ih < len)
	{
		while ((char)h[ih++] == (char)n[in++])
		{
			if (in == ft_strlen((char *)n))
				return ((char *)h + (ih - in));
			if (ih == len)
				return (NULL);
		}
		if ((char)h[ih] != (char)n[in])
			in = 0;
		ih++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:49:09 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/11 12:52:15 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t ih;
	size_t in;
	size_t in2;
	size_t nlen;

	ih = 0;
	in = 0;
	in2 = 0;
	nlen = ft_strlen((char *)needle);
	if ((char)needle[0] == '\0')
		return ((char *)haystack);
	if (((char)haystack[0] == '\0' || ft_strlen((char*)haystack) < nlen))
		return (NULL);
	while ((char)haystack[ih] != '\0' && ih < len)
	{
		while ((char)haystack[ih++] == (char)needle[in++])
		{
			in2++;
			if (in == nlen)
				return ((char *)haystack + (ih - in));
			if (in2 == len)
				return (NULL);
		}
		if ((char)haystack[ih] != (char)needle[in])
		{
			ih -= in;
			in = 0;
		}
		ih++;
	}
	return (NULL);
}

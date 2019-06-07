/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:49:09 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/07 16:24:13 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *h;
	char *n;
	size_t ih;
	size_t in;
	size_t in2;
	size_t hlen;
	size_t nlen;

	h = (char *)haystack;
	n = (char *)needle;
	ih = 0;
	in = 0;
	in2 = 0;
	hlen = ft_strlen(h);
	nlen = ft_strlen(n);
	if (n[0] == '\0')
		return (h);
	if ((h[0] == '\0') || (hlen < nlen))
		return (NULL);
	while (h[ih] != '\0' && ih < len)
	{
		while (h[ih] == n[in])
		{
			ih++;
			in++;
			in2++;
			if (in == nlen)
				return (h + (ih -in));
			if (in2 == len)
				return (NULL);
		}
		if (h[ih] != n[in])
		{
			ih -= in;
			in = 0;
		}
		ih++;
	}
	return (NULL);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:31:45 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/07 13:40:30 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *h;
	char *n;
	size_t ih;
	size_t in;
	size_t nlen;

	h = (char *)haystack;
	n = (char *)needle;
	ih = 0;
	in = 0;
	nlen = ft_strlen(n);
	if (n[0] == '\0')
		return (h);
	if (h[0] == '\0')
		return (NULL);
	while (h[ih] != '\0')
	{
			while ((h[ih] == n[in]) && n[in] != '\0')
			{
				ih++;
				in++;
				if (in == nlen)
					return (h + (ih -in));
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

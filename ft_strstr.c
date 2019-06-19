/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:31:45 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 15:41:58 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t ih;
	size_t in;

	ih = 0;
	in = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[ih] != '\0')
	{
		while ((haystack[ih] == needle[in]) && needle[in] != '\0')
		{
			ih++;
			in++;
			if (in == ft_strlen(needle))
				return ((char *)haystack + (ih - in));
		}
		if (haystack[ih] != needle[in])
		{
			ih -= in;
			in = 0;
		}
		ih++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:22:40 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/08 15:19:51 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char *ps;
	char *pd;
	size_t i;
	size_t slen;
	size_t dlen;

	if(!dst && !src)
		return (0);
	ps = (const char *)src;
	pd = (char *)dst;
	i = 0;
	slen = ft_strlen(ps);
	dlen = ft_strlen(pd);
	if (slen > dlen)
	{
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			pd[n - i -1] = ps[n - i - 1];
			i++;
		}
	}
	return (dst);
}

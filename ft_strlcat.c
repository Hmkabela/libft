/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:17:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/13 15:58:51 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char *ps;
	char *pd;
	size_t id;
	size_t is;
	size_t dlen;
	size_t slen;

	is = 0;
	ps = (char *)src;
	id = ft_strlen(dst);
	dlen = ft_strlen(dst);
	slen = ft_strlen(ps);
	if (n == 0)
		return (dlen);
	pd = ft_strnew(dlen + slen);
	pd = dst;
	pd[id++] = ps[is++];
	if (n < id - 1)
		return (slen + n);
	while ((ps[is] != '\0') && is < n )
	{
		pd[dlen + is] = ps[is];
		is++;
		id++;
	}
	pd[id] = '\0';
	return (id + is);
}
/*size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (dstsize <= i)
		return (dstsize + j);
	dst += i;
	while (*src && dstsize-- > i + 1)
		*dst++ = *src++;
	*dst = '\0';
	return (i + j);
}*/

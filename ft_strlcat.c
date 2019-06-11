/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:17:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/11 17:08:03 by hmkabela         ###   ########.fr       */
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
		pd[id] = ps[is];
		is++;
		id++;
	}
	pd[id] = '\0';
	return (id + is);
}


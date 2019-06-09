/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:17:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/09 12:43:04 by hmkabela         ###   ########.fr       */
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

	id = 0;
	is = 0;
	ps = (char *)src;
	pd = (char *)dst;
	id = ft_strlen(pd);
	dlen = ft_strlen(pd);
	slen = ft_strlen(ps);
	pd[id] = ps[is];
	is++;
	id++;
	if(n <= id - 1)
		return (slen + n);
	while ((ps[is] != '\0') && (is < n || dlen != 0))
	{
		pd[id] = ps[is];
		is++;
		id++;
		dlen--;;
	}
	pd[id] = '\0';
	return (id + is);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:09:57 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/08 12:05:47 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst,const void *src, size_t n)
{
	unsigned char *ps;
	unsigned char *pd;
	size_t i;

	if(!dst && !src)
		return (0);
	ps = (unsigned char *)src;
	pd = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (pd);
}

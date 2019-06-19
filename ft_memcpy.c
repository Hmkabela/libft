/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:09:57 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 13:50:53 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*ps;
	char		*pd;

	if (!dst && !src)
		return (0);
	ps = (const char *)src;
	pd = (char *)dst;
	ft_strncpy(pd, ps, n);
	return (pd);
}

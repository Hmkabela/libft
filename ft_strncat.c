/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:15:26 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/05 17:00:15 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char *psrc;
	char *pdst;
	size_t id;
	size_t is;

	id = 0;
	is = 0;
	psrc = (char *)src;
	pdst = (char *)dst;
	while(pdst[id] != '\0')
		id++;
	pdst[id] = psrc[is];
	is++;
	id++;
	while ((psrc[is] != '\0') && (is < n))
	{
		pdst[id] = psrc[is];
		is++;
		id++;
	}
	pdst[id] = '\0';
	return (dst);
}

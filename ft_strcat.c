/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:13:17 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/08 11:30:15 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	char *psrc;
	char *pdst;
	int id;
	int is;

	id = 0;
	is = 0;
	psrc = (char *)src;
	pdst = (char *)dst;
	while(pdst[id] != '\0')
		id++;
	pdst[id] = psrc[is];
	is++;
	id++;
	while (psrc[is] != '\0')
	{
		pdst[id] = psrc[is];
		is++;
		id++;
	}
	pdst[id] = '\0';
	return (dst);
}

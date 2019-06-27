/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:59:01 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/20 16:42:58 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *am;

	am = (void *)malloc(sizeof(size_t) * size + 1);
	if (am == 0 || size == 0)
		return (0);
	ft_bzero(am, size);
	return (am);
}

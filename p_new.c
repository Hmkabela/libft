/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_new.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:10:34 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/25 16:12:28 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

person		*p_new(void const *name, int age)
{
	person	*a;

	if (!(a = (person *)malloc(sizeof(person))))
		return (NULL);
	if (a)
	{
		if (!(a->name = ft_strnew(ft_strlen(name))))
		{
			ft_memdel(a);
			return (NULL);
		}
		if (!(a->age = (int)ft_memalloc(1)))
		{
			ft_memdel(a->name
			return (NULL);
		}
	}
	
}

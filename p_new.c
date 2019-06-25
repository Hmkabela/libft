/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_new.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:10:34 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/25 18:47:32 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

person		*p_new(void const *name)
{
	person	*a;

	if (!(a = (person *)malloc(sizeof(person))))
		return (NULL);
	if (name)
	{
		if (!(a->name = ft_strnew(ft_strlen(name))))
		{
			ft_memdel((void **)&a);
			return (NULL);
		}
		ft_strcpy(a->name, name);
	}
	else
		a->name = NULL;
	return (a);
}
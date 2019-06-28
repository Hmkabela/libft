/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:23:39 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/28 11:28:33 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *a;
	t_list *hold;

	if (!lst || !f)
		return (NULL);
	if (!(a = f(lst)))
		return (NULL);
	hold = a;
	while (lst->next)
	{
		if (!(a->next = f(lst->next)))
			return (NULL);
		a = a->next;
		lst = lst->next;
	}
	return (hold);
}

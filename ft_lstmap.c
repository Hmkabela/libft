/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 17:41:18 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/25 18:26:30 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list L1;
	t_list L2;

	if (!lst || !f)
		return (0);
	L1 = L2 = *(f)(lst);
	lst = lst->next;
	while (lst)
	{
		L1.next = (*f)(lst);
		L1 = *L1.next;
		lst = lst->next;
	}
	return (lst);
}

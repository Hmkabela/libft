/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:13:53 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/26 14:00:34 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	if (content)
	{
		if (!(node->content = ft_strnew(ft_strlen(content))))
		{
			ft_memdel((void **)&node);
			return (NULL);
		}
		ft_strcpy(node->content, content);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}

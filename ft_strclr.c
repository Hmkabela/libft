/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 13:21:35 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/18 15:26:41 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	void	*ps;
	size_t	slen;

	if (!s)
		return ;
	slen = ft_strlen(s);
	ps = (void *)s;
	ft_memset(ps, '\0', slen);
}

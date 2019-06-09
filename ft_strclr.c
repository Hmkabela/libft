/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 13:21:35 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/09 16:09:28 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return;
	void *ps;
	size_t slen;
	slen = ft_strlen(s);

	ps = (void *)s;
	ft_memset(ps, '\0', slen);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:23:02 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/18 16:19:54 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;
	size_t	i1;
	size_t	i2;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = ft_strnew(len);
	if (!res)
		return (0);
	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0')
	{
		res[i1] = s1[i1];
		i1++;
	}
	res[i1++] = s2[i2++];
	while (s2[i2] != '\0')
		res[i1++] = s2[i2++];
	res[i1] = '\0';
	return (res);
}

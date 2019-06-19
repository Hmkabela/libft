/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:01:39 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 13:59:41 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (0);
	else
		return (ft_strcpy(str, s));
}

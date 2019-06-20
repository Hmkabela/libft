/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:49:30 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/20 16:03:19 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nvm(char c)
{
	if (c == ' ' || c == '\v' || c == '\f')
		return (1);
	if (c == '\n' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		s;

	i = 0;
	res = 0;
	s = 1;
	while (ft_nvm(str[i]))
		i++;
	s *= (str[i] == '-') ? -1 : 1;
	(str[i] == '-' || str[i] == '+') ? i++ : 0;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i++] - '0');
		if (res > 2147483648 && s == -1)
			return (0);
		if (res > 2147483647 && s == 1)
			return (-1);
	}
	return (res * s);
}

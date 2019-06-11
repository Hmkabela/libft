/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:49:30 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/11 14:55:38 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_nvm(char c)
{
	if (c == ' ' || c == '\v' || c == '\f')
		return (1);
	if (c == '\n' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int i;
	long res;
	int s;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0')
	{
		while (ft_nvm(str[i]))
			i++;
		if (str[i] == '-')
		{
			s = - 1;
			i++;
		}
		else if(str[i] == '+')
			i++;
		while (ft_isdigit(str[i]))
		{
			res = res * 10 + (str[i] - '0') ;
			if (res > 2147483648 && s == -1)
				return (0);
			if (res > 2147483647 && s == 1)
				return (-1);
			i++;
		}
		if (!ft_isdigit(str[i]) || !ft_nvm(str[i]))
			break;
	}

	return (res * s);
}

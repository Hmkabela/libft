/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:27:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/13 13:57:03 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	int cc;
	long num;
	int a;
	int s;

	num = (long)n;
	cc = 1;
	s = -1;
	if (num < 0)
		num *= s;
	while (num > 9)
	{
		num /= 10;
		cc++;
	}
	num = (long)n;
	if (n >= 0)
	{
		if(!(str = ft_strnew(cc)))
				return (NULL);
		a = 0;
	}
	else
	{
		if(!(str = ft_strnew(++cc)))
				return (NULL);
		a = 1;
		num *= s;
		str[0] = '-';
	}
	while (cc > a)
	{
		cc--;
		str[cc] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}

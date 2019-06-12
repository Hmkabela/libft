/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:27:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/12 18:55:12 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	int cc;
	int num;
	int a;
	int s;

	num = n;
	cc = 1;
	s = -1;
	if (num <= 9)
		num *= s;
	while (num > 9)
	{
		num /= 10;
		cc++;
	}
	num = n;
	if (n >= 0)
	{
		str = ft_strnew(cc);
		a = 0;
	}
	else
	{
		str = ft_strnew(cc + 1);
		a = 1;
		num *= s;
	}
	while (cc > a)
	{
		cc--;
		str[cc] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}

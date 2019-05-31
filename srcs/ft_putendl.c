/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:41:09 by hmkabela          #+#    #+#             */
/*   Updated: 2019/05/31 13:52:20 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c);

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

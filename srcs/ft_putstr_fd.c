/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:22:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/05/31 14:39:44 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char const *s, int f)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar(s[i], fd);
		i++;
	}
}

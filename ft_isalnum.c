/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:56:33 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/03 17:07:29 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (c);
	}
	if ((c >= 65) && (c <= 90))
	{
		return (c);
	}
	if ((c >= 97) && (c <= 122))
	{
		return (c);
	}
	else
	{
		return (0);
	}
}

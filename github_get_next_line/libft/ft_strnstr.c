/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:03:38 by eliu              #+#    #+#             */
/*   Updated: 2016/11/16 12:55:14 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	temp;

	a = 0;
	if (!small[a])
		return ((char*)big);
	while (big[a] && a < len)
	{
		temp = a;
		b = 0;
		while (big[temp] == small[b] && temp < len)
		{
			b++;
			temp++;
			if (!small[b])
				return ((char*)&big[a]);
		}
		a++;
	}
	return (NULL);
}

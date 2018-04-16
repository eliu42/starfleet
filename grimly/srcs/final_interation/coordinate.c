/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:40:10 by eliu              #+#    #+#             */
/*   Updated: 2018/04/14 19:38:59 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/grimly_header.h"

int		valid_coordinte(t_ins *ins)
{
	if (x < 0 || y < 0 || x > ins->cols || y > ins->rows || map[y][x] == FULL)
		return (1);
	i
}

int		check_coordinate(t_ins *ins, char c)
{
	char	i;

	i = 0;
	while (ins->legend[i])
	{
		if (c == ins->legend[i])
		{
			if (i == ENTRANCE)
			{
				ins->entrance++;
				if (entrance != 1)
				{
					return (1);
				}
			}
			else if (i == EXIT)
			{
				ins->exit++;
			}
			return (0);
		}
		i++;
	}
	return (1);
}

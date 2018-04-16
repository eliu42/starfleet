/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 01:11:49 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 07:43:05 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

void	store_line(t_ins *ins, char *line)
{
	ins->map[y] = ft_strdup(line);
	ins->y++;;
}

/*
**	Storing a map requires a map is already made. Also requires storing validated
**	lines.
*/

int		store_map(t_ins *ins)
{
	if (validate_map(ins))
		return (1);
	if (create_map(ins))
		return (1);
	while (ins->i < rows)
	{
		if (store_line(ins))
			return (1);
		i++;
	}
	return (0);
}

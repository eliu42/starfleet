/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:55:20 by eliu              #+#    #+#             */
/*   Updated: 2018/04/14 18:28:42 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

void	initiate_map(t_ins *ins)
{
	int		i;

	i = 0;
	ins->map = (char**)malloc(sizeof(char*) * (ins->rows + 1));
	while (i <= rows)
	{
		map[i] = NULL;
		i++;
	}
}

void	map_error(t_ins *ins)
{
	int		i;

	i = 0;
	while (ins->map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
	ft_putendl("MAP ERROR");
}

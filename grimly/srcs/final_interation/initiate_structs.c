/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_structs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:52:33 by eliu              #+#    #+#             */
/*   Updated: 2018/04/14 18:56:11 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/grmily_header.h"

void	init_instructions(t_ins *ins, int new_fd)
{
	ft_memalloc(ins);
	ins->fd = new_fd;
	ins->start = {0, 0};
	ins->i = 0;
	ins->j = 0;
	ins->rows = 0;
	ins->cols = 0;
	ins->legend = NULL;
	ins->entrance = 0;
	ins->exit = 0;
	ins->map = NULL;
	ins->file = NULL;
}

void	init_coordinates(t_cord *coord)
{
	ft_memalloc(coord);
	coord->up = -1;
	coord->left = -2;
	coord->right = -3;
	coord->down = -4;
}

t_ins	*find_fd(t_ins *ins, int new_fd)
{
	t_ins	*new_ins;
//	t_cord	*new_coord;

	while (ins->next)
	{
		if (new_fd == ins->fd)
			return (ins);
		ins = ins->next;
	}
	init_instructions(new_ins, fd);
//	init_coordinates(new_coord);
 33     ft_memalloc(coord);
 34     coord->up = -1;
 35     coord->left = -2;
 36     coord->right = -3;
 37     coord->down = -4;
 38 }
	ins->next = new_ins;
	return (new_ins);
}

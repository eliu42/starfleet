/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 23:57:26 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 08:09:28 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

void	init_instructions(t_ins *ins)
{
	ins->fd = 0;
	ins->file = ft_strnew(0);
	ins->i = 0;
	ins->j = 0;
	ins->rows = 0;
	ins->cols = 0;
	ins->legend = NULL;
	ins->start = {0, 0};
	ins->entrance = 0;
	ins->exit = 0;
	ins->coord = NULL;
	ins->next = NULL;
}

/*
**	Uses negative chars to represent cardinal directions from which direction
**	a certain coordinate was queued/checked in. -1 = check up, -2 = check left,
**	-3 = check right, -4 = check down.
*/

void	init_queue(t_queue *queue)
{
	queue->y = 0;
	queue->x = 0;
	queue->direction = 0;
	queue->next = NULL;
}

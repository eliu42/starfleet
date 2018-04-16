/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 08:19:43 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 09:13:12 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

int		check_up(t_ins *ins, t_queue *queue, long y, long x)
{
	if (y < 0 || x < 0 || y > ins->rows || x > ins->cols)
		return (1);
	if (ins->map[y][x] == EMPTY)
	{
		add_to_queue();
		map[y][x] = -1;
	}
	return (0);
}

int		check_left(t_ins *ins, t_queue *queue, long y, long x)
{
	if (y < 0 || x < 0 || y > ins->rows || x > ins->cols)
		return (1);
	if (ins->map[y][x] == EMPTY)
	{
		add_to_queue();
		map[y][x] = -2;
	}
	return (0):
}	

int		check_right(t_ins *ins, t_queue *queue, long y, long x)
{
	if (y < 0 || x < 0 || y > ins->rows || x > ins->cols)
		return (1);
	if (ins->map[y][x] == EMPTY)
	{
		add_to_queue();
		map[y][x] = -3;
	}
	return (0);
}

int		check_down(t_ins *ins, t_queue *queue, long y, long x)
{
	if (y < 0 || x < 0 || y > ins->rows || x > ins->cols)
		return (1);
	if (ins->map[y][x] == EMPTY)
	{
		add_to_queue();
		map[y][x] = -4;
	}
	return (0);
}

int		check_point(t_ins *ins, t_queue *queue, char c)
{
	if (ins->y < 0 || ins->x < 0 || ins->y > ins->rows || ins->x > ins->cols)
		return (1);
	if (ins->map[y][x] == EMPTY)
	{
		add_to_queue();
		map[y][x] = c;
	}
	return (0);
}

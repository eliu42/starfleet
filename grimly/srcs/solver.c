/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 02:58:38 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 09:23:39 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

/*
**	Solving comes with the assumption that all validation is correct. The
**	algorithm is an implementation of Breadth First Search. The structure being
**	used is a 2D array of chars, holding the y and x values of the validated
**	map. 
**
**	A queue function is needed, and begins and the point of origin (entrance).
**	Queueing goes in the order of checks: up, left, right and down. 
**	Starting position of recursion is the entrance coordinate. Checks all
**	adjacent squares to see if they are empty, and adds them one by one to
**	the queue to be checked. Afterwards, the coordinate that called the
**	check is removed from the queue. Continues until exit is found, or until
**	all squares are checked (empty queue but no solution found).
*/

/*
**	re
*/

int		add_to_queue(t_queue *queue)
{
	
}
void	solve(t_ins *ins)
{
	int		i;
	t_queue *queue;

	init_queue(queue);
	while ((i = find_path))
	{

	}
	if (i == -1)
	{
		ft_putstr("MAP ERROR\n");
	}
	print_solution();
}

/*
**	To remove the head of a queue after it has added all of it's adjacent 
**	coordinates to be queued.
*/

t_cord	*ft_remove_head(t_cord *cord)
{
	t_cord *temp;

	temp = cord;
	cord = cord->next;
	free(temp);
	return (cord);
}

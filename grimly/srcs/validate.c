/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 00:14:58 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 07:54:48 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

/*
**	Pairs up the current char to be validated with the entire legend, and
**	looks for multiple entrances (error).
*/

int		validate_legend(t_ins *ins, char c)
{
	int		i;

	i = 0;
	while (ins->legend[i])
	{
		if (c == ins->legend[i])
		{
			if (i == 3)
			{
				ins->entrance++;
				if (entrance != 1)
					return (1);
			}
			else if (i == 4)
			{
				ins->exit++;
			}
			return (0);
		}
		i++;
	}
	return (1);
}

/*
**	Checks to see that all characters with a line are correct.
*/

int		validate_line(t_ins *ins)
{
	while (ins->file[i] && ins->file[i] != '\n')
	{
		if (validate_legend(ins, ins->file[i]))
			return (1);
	}
	if (ins->file[i] == '\n')
		return (0);
	return (1);
}

/*
**	Map validation calls store line, which subsequently calls validate line
**	before storing.
*/

int		validate_map(t_ins *ins)
{
	int		i;

	i = 0;
	while (ins->file[i])
	{
		if (store_line(ins, i))
			return (1);
	}
	if (ins->exit == 0)
		return (1);
	return (0);
}

/*
**	Definition of a valid file: All lines must respect sizes given in first
**	collumn. At the end of each line there is a new line. Labyrinth will not
**	be more than a billion squares. The characters present in the card must be
*/

int		validate_file(t_ins *ins)
{
	int		status;

	if (get_instructions(ins))
		return (1);
	if (store_map(ins))
	{
		be_free(ins);
		return (ft_error("MAP ERROR"));
	}
	be_free(ins);
	return (0);
}

/*
**	Checking line by line for validation is too hard. Validating the lazy way.
*/

int		validate(t_ins *ins, char *buf, int r)
{
	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	while ((r = read(ins->fd, buf, BUFF_SIZE) > 0))
	{
		buf[r] = '\0';
		ins->file = ft_realloc(ins->file, buf);
	}
	if (validate_file(ins))
		return (-1);
	solve(ins);
	return (0);
}

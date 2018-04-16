/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:04:01 by eliu              #+#    #+#             */
/*   Updated: 2018/04/14 18:56:23 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

int		store_row(t_ins *ins, char *row)
{
	if ((ins->map[i] = ft_strdup(row)) == NULL)
	{
		return (1);
	}
	(ins->i)++;
	return (0);
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

int		check_row(t_ins *ins, char *line)
{
	int		i;

	i = 0;
	if (ft_strlen(line) != ins->cols + 2)
		return (1);
	while (line[i])
	{
		if (check_coordinate(ins->legend, line[i]))
		{
			return (1);
		}
		i++;
	}
	if (line[i] != '\n')
		return (1);
	if (store_line(ins, line))
	{
		return (1);
	}
	return (0);
}

int		find_line(t_ins *ins, char **file)
{
	size_t		i;
	char		*temp;

	i = 0;
	while ((*str[i]))
	{
		if ((*str)[i] == '\n')
		{
			if (check_row(file, line))
			{
				return (-1);
			}
		}
	}
	(0);
}

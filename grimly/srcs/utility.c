/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 02:32:48 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 08:15:34 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

void	be_free(t_ins *ins)
{
	ins->y = 0;
	while (ins->map[y])
	{
		free(map[y]);
		y++:
	}
	free(map);
	free(ins->file);
}

void	print_map(char **map, int steps)
{
	long 	y;

	y = 0;
	while (map[y])
	{
		ft_putendl(map[y]);
		y++;
	}
}

char	*create_map(t_ins *ins)
{
	if (!(ins->map = (char**)malloc(sizeof(char*) * (ins->rows) + 1)))
		return (NULL);
	ins->map[ins->rows] = NULL;
	while (ins->y < ins->rows)
	{
		if (!(map[ins->y] = ft_strnew(ins->cols)))
			return (NULL);
		ins->y++;
	}
	ins->y = 0;
	return (ins->map);
}

int		get_instructions(t_ins *ins)
{
	int		i;

	i = 0;
	ins->rows = ft_atoi((ins->file) + i);
	while (is_digit(ins->file[i]))
		i++;
	if (ins->file[i++] != 'x')
		return (1);
	ins->cols = ft_atoi((ins->file) + i);
	while (is_digit(ins->file[i]))
		i++;
	if (!ins->rows || !(ins->cols))
		return (1);
	ins->legend = ft_strndup((ins->file) + i, ft_strlen((ins->file + i - 1)));
	i += ft_strlen(ins->legend);
	if (ins->file[i] != '\n')
		return (1);
	return (0);
}

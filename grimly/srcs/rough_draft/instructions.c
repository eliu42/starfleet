/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:44:59 by eliu              #+#    #+#             */
/*   Updated: 2018/04/13 19:16:12 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

/*
**	Validate first line of instructions, and store them for later validation.
*/
// needs confirmation, good for now

int		find_dimensions(t_ins *ins, char *buffer)
{
	(ins->rows) = 0;
	ins->rows = ft_atoi(buffer);
	while (ft_isdigit(*buffer))
		buffer++;
	if (*buffer != 'x')
	{
		return (-1);
	}
	buffer++;
	ins->cols = ft_atoi(buffer);
	if (ins->rows <= 0 || ins->cols <= 0)
		return (-1);
	return (ft_numlen(ins->rows) + ft_numlen(ins->cols) + 1);
}

char	get_instructions(t_ins *ins, char *str, int fd)
{
	int		i;
	int		temp;
	char	*buffer;

	while ((i = read(fd, buffer, BUFF_SIZE) > 0))
	{
		buffer[i] = '\0';
		str = ft_strjoin_memdel(str, buffer);
		if (find_line(&str, line))
		{
			find_dimensions(ins, str, buffer);
		}
		i = find_dimensions(ins, buffer);
		if (i == -1 || (ins->cols * ins->rows) > 10000000 || 
				ft_strlen(buffer + i) < 5)
			return (1);
		ins->str = ft_strdup(buffer + i);
	}
	return (0);
}

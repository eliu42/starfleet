/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 19:24:56 by eliu              #+#    #+#             */
/*   Updated: 2018/04/14 19:19:07 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

int		get_instructions(t_ins *ins, int fd)
{
	int		i;
	char	buf[BUFF_SIZE + 1];

	i = 0;
	while ((i = read(fd, buf, BUFF_SIZE)) > 0 )
	{
		buf[i] = '\0';
		file = ft_realloc(file, buf);
		if (find_line(file,  
	}
}

int		parser(t_ins *ins, int fd)
{
	int			i;
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || (read(fd, buf, 0) < 0))
		return (2);
	if (!file)
	{
		*file = ft_strnew(BUFF_SIZE + 1);
		get_instructions(ins, file, fd);
	}
	if (find_line(ins, file))
		return (1);
	while ((i = read(fd, buf, BUFF_SIZE) > 0))
	{
		buf[i] = '\0';
		line = ft_realloc(line, buf);
		if (find_line(ins, file))
		{
			return (1);
		}
	}
	if (*str)
		last_line();
	if (ins->rows != ins->i || exit == 0)
		return (2);
	return (0);
}

int		main(int argc, char **argv)
{
	int			i;
	int			status;
	t_ins		*ins = NULL;
	t_cord		*coord = NULL;

//	argument portion
	i = 1;
	init_instruction(ins);
	init_coordinates(coord);
	while (argv[i])
	{
		ins->fd = open(argv[i]);
		// after while loop should be map done being checked
		while (status = parser(ins, fd) > 0)
		{
			if (status == 2)
			{
				map_error(ins, ins->coord);
				break ;
			}
		}
		solve(ins, ins->coord);
		i++;
	}
//	stdin
	return (0);
}

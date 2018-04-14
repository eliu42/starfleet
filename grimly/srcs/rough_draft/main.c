/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:49:06 by eliu              #+#    #+#             */
/*   Updated: 2018/04/13 19:15:47 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

void	initiate_struct(t_ins *ins)
{
	ins = ft_memalloc(sizeof(t_ins));
	ins->enter = 0;
	ins->exit = 0;
}

int		main(int argc, char **argv)
{
	t_ins	*ins = NULL;
	int		fd;
	int		i;
	char	*line;

	i = 1;
	initiate_struct(ins);
	if (argc > 1)
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			while (ghetto_next_line(ins, fd, &line) > 0)
			{
				free(line);
			}
			close(fd);
		}
	}
	ft_putendl("map is good");
	return (0);
}

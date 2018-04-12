/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:49:06 by eliu              #+#    #+#             */
/*   Updated: 2018/04/11 23:31:46 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

void	initialize(t_ins *ins)
{
	ins->rows = 0;
	ins->cols = 0;
	ins->str = NULL;
}

int		main(int argc, char **argv)
{
	t_ins	*ins;
	char	*buffer;
	int		fd;

	ins = NULL;
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		get_next_line(fd, &buffer);
//		initialize(&ins);
		if (get_instructions(buffer, ins) != '\0')
			return (ft_error("MAP ERROR"));
/*		while (get_next_line(0, buffer) > 0)
		{
			validate_card(buffer);
		}
		solve(buffer);
*/	}

	return (0);
}

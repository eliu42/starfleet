/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 23:55:32 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 07:24:59 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

/*
**	Takes in multiple map arguments or reads from STDIN
*/



int		main(int arg, char **argv)
{
	int		i;
	char	buf[BUFF_SIZE + 1];
	t_ins	*ins;

	i = 0;
	ins = init_instructions(ins);
	if (argc != 1)
	{
		while (argv[i])
		{
			ins->fd = open(argv[i], O_RDONLY);
			validate(ins, buf, 0, BUFF_SIZE);
		}
		i++;
	}
	validate(ins, buf, 0, BUFF_SIZE);
	return (0);
}

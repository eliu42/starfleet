/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 19:24:56 by eliu              #+#    #+#             */
/*   Updated: 2018/04/13 22:57:40 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/grimly_header.h"

int		struct_init(t_ins *ins)
{
	ft_memalloc(ins);
	ins->rows = 0;
	ins->cols = 0;
	ins->str = NULL;
	ins->enter = 0;
	ins->exit = 0;
}

int		invalid_char(

int		check_line(t_ins *ins, char **file, char **line)
{
	if (ins->cols != ft_strlen(*line) || invalid_char(*line))
	{
		return (-1);
	}

}

int		find_line(t_ins *ins, char **file, char **line)
{
	size_t		i;
	char		*temp;

	i = 0;
	while ((*str[i]))
	{
		if ((*str)[i] == '\n')
		{
			if (check_line(ins, file, line))
			{
				return (-1);
			}

		}
	}
}

int		get_first_line(t_ins *ins, char **line, int fd)
{
	int			i;
	char		*temp;
	static char	*file = NULL;


	while ((i = read(fd, temp, BUFF_SIZE + 1) > 0))
	{
		temp[i] = '\0';
		line = ft_realloc(line, temp);
		if (find_line(ins, file, line))
			return (1);	
	}

}

int		main(int argc, char **argv)
{
	int			i;
	int			fd;
	static char	*line;
	t_ins		*ins = NULL;

//	argument portion
	i = 1;
	struct_init(ins);
	while (argv[i])
	{
		fd = open(argv[i], O_RDONLY);
		while (parser(ins, &line, fd) > 0)
		{
			free(line);
		}
		i++;
	}

//	stdin


	return (0);
}

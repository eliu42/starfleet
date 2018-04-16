/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 11:46:47 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 19:18:36 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

/*
**	Checks line by line to see if it matches col size, with a new line at the
**	end. Also checks for any stray characters that don't belong in the map.
*/

char	set_flags(t_ins *ins, char c)
{
ft_putendl("inside set flags");
	int	i;
ft_putendl("double check dictionary:");
ft_putendl(ins->str);
	i = 0;
	if (c == ins->str[3])
	{
		ins->enter += 1;
	}
	else if (c == ins->str[4])
	{
		ins->exit += 1;
	}
	ft_putendl("before while loop");
ft_putstr("the char being checked is: ");
ft_putchar(c);
ft_putchar('\n');
	while (ins->str[i])
	{
		ft_putnbr(i);
		if (c == ins->str[i])
			return (0);
		i++;;
	}
	ft_putendl("before set flags return");
	return (1);
}

char	check_line(t_ins *ins, char *line)
{
ft_putendl("the line being checked is:");
ft_putendl(line);
ft_putendl("the dictionary is:");
ft_putendl(ins->str);
	int	i;

	i = ft_strlen(line) + 1;
	if (i != ins->cols /*|| line[i] != '\n'*/)
	{
		ft_putendl("doesn't match col or new line");
		return (1);
	}
	ft_putendl("before while loop");
	while (i >= 0)
	{
		N
		ft_putnbr(i);
		N
		if (set_flags(ins, line[i]))
			return (1);
		i--;
	}
	ft_putendl("before check linereturn");
	return (0);
}

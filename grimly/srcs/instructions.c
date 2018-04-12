/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:44:59 by eliu              #+#    #+#             */
/*   Updated: 2018/04/11 23:32:00 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/grimly_header.h"

/*
**	Validate first line of instructions, and store them for later validation.
*/
// needs confirmation, good for now
int		find_dimensions(t_ins *ins, char *str)
{
	t_ins.rows = ft_atoi(str);
	while (ft_isdigit(*str))
		str++;
	if (*str != 'x')
	{
		s_ins.cols = -1;
		return ;
	}
	str++;
	s_ins.cols = ft_atoi(str);
	return (ft_numlen(t_ins.rows) + ft_numlen(t_ins.cols) + 1);
}

/*
**	Why am I mallocing here? When do things need to be mallocked?
*/

void	find_valid_characters(t_ins *ins, char *str)
{
	ins.str = ft_strdup(str);
}

char	get_instructions(t_ins *ins, char *str)
{
	find_valid_characters(&ns, str + find_dimensions(*ins, str));
	if (ins.rows * ins.cols >= 10000000000)
		return (1);
	return (0);
}

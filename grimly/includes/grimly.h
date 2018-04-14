/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:51:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/13 22:57:39 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIMLY_H
# define GRIMLY_H
# include "./libft.h"

typedef struct		s_cord
{
	char			up;
	char			left;
	char			right;
	char			down;
}					t_cord;

typedef struct		s_ins
{
	long			rows;
	long			cols;
	char			*str;
	char			enter;
	int				exit;
	struct s_cord	*t_cord;
}					t_ins;

void				characters(char c);
char				check_line(t_ins *ins, char *line);
int					find_dimensions(t_ins *ins, char *str);
int					find_line(t_ins ins, char **str, char **line);
void				find_valid_characters(t_ins *ins, char *str);
char				get_instructions(t_ins *ins, char *str, int fd);
int					ghetto_next_line(t_ins *ins, int fd, char **line);
void				initialize(t_ins *ins);
void				solve(char *str);
char				valid_map(char *str);

#endif

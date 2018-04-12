/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:51:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/11 20:02:44 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIMLY_H
# define GRIMLY_H
# include "./libft.h"

typedef struct		s_cord
{
	int				up;
	int				left;
	int				right;
	int				down;
	int				next;
}					t_cord;

typedef struct		s_ins
{
	long			rows;
	long			cols;
	char			*str;
}					t_ins;


void				initialize(t_ins *ins);
void				solve(char *str);
void				characters(char c);
char				get_instructions(char *str, t_ins *ins);
int					find_dimensions(t_cord *ins, char *str);
char				valid_card(char *str);
void				find_valid_characters(t_ins *ins, char *str);

#endif

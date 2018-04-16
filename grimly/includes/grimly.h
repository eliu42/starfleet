/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:51:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 08:09:53 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIMLY_H
# define GRIMLY_H
# include "./libft.h"
# define FULL ins->legend[0]
# define EMPTY ins->legend[1]
# define PATH ins->legend[2]
# define ENTRANCE ins->legend[3]
# define EXIT ins->legend[4]

typedef struct		s_queue
{
	long			y;
	long			x;
	char			direction;
	struct t_cord	*next;
}					t_queue;

typedef struct		s_ins
{
	int				fd;
	char			*file;
	long			y;
	long			x;
	long			rows;
	long			cols;
	char			*legend;
	int				entrance;
	int				start[];
	int				exit;
	char			**map;
	struct t_cord	*coord;
	struct t_ins	*next;
}					t_ins;
/*
typedef struct		s_map
{
	long			start[2];
	long			rows;
	long			cols;
	char			**map;
	struct t_cord	*coord;
	struct t__ins	*next;
}					t_map;
*/

char				*create_map(t_ins *ins);
int					get_instructions(t_ins *ins);
void				init_coordinates(t_ins *ins);
void				init_instructions(t_ins *ins);
void				store_line(t_ins ins, int i);
int					store_map(t_ins *ins);
int					validate(t_ins *ins, char *buf, int r);
int					validate_file(t_ins *ins);
int					validate_legend(t_ins *ins);
int					validate_line(t_ins *ins);
int					validate_map(t_ins *ins);


/*
void				characters(char c);
int					check_coordinate(t_ins *ins, char c);
char				check_row(t_ins *ins, char *line);
int					find_dimensions(t_ins *ins, char *str);
t_ins				*find_fd(t_ins *ins, int fd);
int					find_line(t_ins *ins, char **file);
void				find_valid_characters(t_ins *ins, char *str);
char				get_instructions(t_ins *ins, char **file, int fd);
int					ghetto_next_line(t_ins *ins, int fd, char **line);
void				map_error(t_ins *ins);
void				init_coordinates(t_cord *coord);
void				init_instructions(t_ins *ins);
void				initiate_map(t_ins *ins);
int					parser(t_ins *ins, char **file, int fd);
void				solver(char *str);
int					store_row(t_ins *ins, char *row);
char				valid_map(char *str);
*/
#endif

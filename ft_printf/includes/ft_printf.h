/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:09:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 21:02:04 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdbool.h>
# include "libft.h"
# include <stdio.h>
# include <stdarg.h>

/*
**	I only need a flag for the type of variable (conversion), maybe multiple
**	for (flags) since there can be multiple ones in the same conversion. I 
**	will also probably need the value of the argument stored somewhere (void).
*/
/*
typedef struct			s_printf
{
	char				input;
	char				percent;
	int					n_total;
	char				c;
	char				wide_c;
	char				*s;
	char				*wide_s;
	int					i;
	int					d;
	long int			long_d;
	char				o;
	long unsigned int	long_o;
	unsigned int		u;
	long unsigned int	long_u;
	unsigned int		x;
	char				x_big;
	unsigned int		p;
	t_mod				*mod;
	t_flag				*flag;
}						t_printf;
*/
typedef struct			s_mod
{
	bool				j;
	bool				z;
	bool				h;
	bool				l;
	bool				double_h;
	bool				double_l;
}						t_mod;

typedef struct			s_flag
{
	bool				hash;
	bool				zero;
	bool				minus;
	bool				plus;
	bool				space;
	bool				precision;
	bool				field_width;
}						t_flag;


typedef struct			s_printf
{
	bool				input;
	bool				percent;
	bool				n_total;
	bool				c;
	bool				w_char;
	bool				s;
	bool				w_string;
	bool				i;
	bool				d;
	bool				d_long;
	bool				o;
	bool				o_long;
	bool				u;
	bool				u_long;
	bool				x;
	bool				x_big;
	bool				p;
	t_mod				*mod;
	t_flag				*flag;
}						t_printf;

int						parse(char *format, t_printf *conversions);
int						parse_conversion(char *format, t_printf *conversions);
int						parse_flag_type(char *format, t_printf *conversions);
int						parse_modifier_type(char *format, t_printf *conversions);
int						parse_variable_type(char *format, t_printf *conversions);


bool					is_d_conversion(char f, t_printf *conversions);
bool					is_d_long_conversion(char f, t_printf *conversions);
bool					is_i_conversion(char f, t_printf *conversions);
bool					is_o_conversion(char f, t_printf *conversions);
bool					is_o_long_conversion(char f, t_printf *conversions);
bool					is_p_conversion(char f, t_printf *conversions);
bool					is_u_conversion(char f, t_printf *conversions);
bool					is_u_long_conversion(char f, t_printf *conversions);
bool					is_x_conversion(char f, t_printf *conversions);
bool					is_x_big_conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);
bool					is__conversion(char f, t_printf *conversions);


bool					is_h_mod(char *format, t_printf *conversions);
bool					is_hh_mod(char *format, t_printf *conversions);
bool					is_l_mod(char *format, t_printf *conversions);
bool					is_ll_mod(char *format, t_printf *conversions);
bool					is_j_mod(char *format, t_printf *conversions);
bool					is_z_mod(char *format, t_printf *conversions);
bool					is__mod(char *format, t_printf *conversions);

bool					is_hash_flag(char f, t_printf *conversions);
bool					is_minus_flag(char f, t_printf *conversions);
bool					is_plus_flag(char f, t_printf *conversions);
bool					is_space_flag(char f, t_printf *conversions);
bool					is_zero_flag(char f, t_printf *conversions);









void					*casting(t_printf *conversions, char c);
void					*char_type(t_printf *conversions, char c);
void					*num_type(t_printf *conversions, char c);
int						is_char(char *format, t_printf *conversions);
int						is_char_type(char *format, t_printf *conversions);
int						is_conversion(t_printf *conversions, char c);
int						is_flag(t_printf *conversions, char c);
int						is_percent(char *format, t_printf *conversions);
int						is_modifier(t_printf *conversions, char c);					
int						is_num(t_printf *conversions, char c);
int						is_num_type(char *format, t_printf *conversions);

void					zero_struct(t_printf *conversions);


int						convert(t_printf *printf);
int						ft_printf(const char * restrict format, ...);
void					*find_conversion(const char * restrict format, char c);
void					*find_flag(const char * restrict format, t_printf *printf);

#endif

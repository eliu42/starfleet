/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:09:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/17 19:25:10 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft_header.h"

/*
**	I only need a flag for the type of variable (conversion), maybe multiple
**	for (flags) since there can be multiple ones in the same conversion. I 
**	will also probably need the value of the argument stored somewhere (void).
*/

typedef struct		s_printf
{
	char			flag;
	char			conversions;
	void			*argument;
}					t_printf;


int					convert(t_printf printf);
int					ft_printf(const char * restrict format, ...);
void				*find_conversion(const char * restrict format);
void				*find_flag(const char * restrict format, t_printf printf);

#endif

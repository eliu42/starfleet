/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 19:51:10 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 18:28:50 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

static void	zero_flag(t_flag *flag)
{
	flag->hash = 0;
	flag->zero = 0;
	flag->plus = 0;
	flag->minus = 0;
	flag->space = 0;
	flag->precision = 0;
	flag->field_width = 0;
}

static void	zero_mod(t_mod *mod)
{
	mod->j = 0;
	mod->z = 0;
	mod->h = 0;
	mod->l = 0;
	mod->double_h = 0;
	mod->double_l = 0;
}

void		zero_struct(t_printf *conversions)
{
	conversions->input = 0;
	conversions->percent = 0;
	conversions->n_total = 0;
	conversions->c = 0;
	conversions->wide_c = 0;
	conversions->s = NULL;
	conversions->wide_s = NULL;
	conversions->i = 0;
	conversions->d = 0;
	conversions->long_d = 0;
	conversions->o = 0;
	conversions->long_o = 0;
	conversions->u = 0;
	conversions->long_u = 0;
	conversions->x = 0;
	conversions->x_big = 0;
	conversions->p = 0;
	ft_memalloc(conversions->mod);
	zero_mod(conversions->mod);
	ft_memalloc(conversions->flag);
	zero_flag(conversions->flag);
}

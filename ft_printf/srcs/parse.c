/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:05:54 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 18:29:11 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	parse_variable_type(char f, t_prbool *conversions)
{
	if (is_percent(f, conversions))
	{
		return (true);
	}
	if (is_char_type(f, conversions))
	{
		return (true);
	}
	if (is_num_type(f, conversions))
	{
		return (true);
	}
	return (false);
}

bool	parse_modifier_type(char f, t_prbool *conversions)
{
	if (is_h_mod(f, conversions))
	{
		return (true);
	}
	if (is_hh_mod(f, conversions))
	{
		return (true);
	}
	if (is_l_mod(f, conversions))
	{
		return (true);
	}
	if (is_ll_mod(f, conversions))
	{
		return (true);
	}
	if (is_j_mod(f, conversions))
	{
		return (true);
	}
	if (is_z_mod(f, conversions))
	{
		return (true);
	}
	return (false);
}

bool	parse_flag_type(char f, t_prbool *conversions)
{
	if (is_hash_flag(f, conversions))
	{
		return (true);
	}
	if (is_minus_flag(f, conversions))
	{
		return (true);
	}
	if (is_zero_flag(f, conversions))
	{
		return (true);
	}
	if (is_plus_flag(f, conversions))
	{
		return (true);
	}
	if (is_space_flag(f, conversions))
	{
		return (true);
	}
	return (false);
}

/*
**	Returns 0 if final conversion is found. Otherwise returns 1 to keep reading
**	through flags and modifiers.
*/

int		parse_conversion(char f, t_printf *conversions)
{
	if (!parse_variable_type(f, conversions))
	{
		return (0);
	}
	else if (!parse_modifier_type(f, conversions))
	{
		return (1);
	}
	else if (!parse_flag_type(f, conversions))
	{
		return (1);
	}
	return (-1);
}

int		parse(char *format, t_printf *conversions, va_list va_args)
{
	int		error;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (error = parse_conversion(*format, conversions) > 0)
			{
				
				format++;
			}
			if (error == -1)
				return (-1);
			print_conversion(format, conversions, va_args);	
		}
	}
	return (1);
}

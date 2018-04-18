/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:49:55 by eliu              #+#    #+#             */
/*   Updated: 2018/04/17 19:25:09 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
**	Seperates conversions into strings/chars, and number types (int, long, etc).
*/

void	*find_conversion(const char * restrict format, char c)
{
	if (c == '%')
		;
	else if (is_string(format))
	{
		find_alpha(format);
	}
	else if (is_number(format))
	{
		find_bytes(format);
		find_sign(format);
		find_base(format);
	}
}

/*
**	Twenty lines.
*/

void	*find_flag(const char * restrict format, char c)
{
	if (c == '#')
		;
	else if (c == '+')
		;
	else if (c == '-')
		;
	else if (c == ' ')
		;
	else if (c == 'hh')
		;
	else if (c == 'h')
		;
	else if (c == 'l')
		;
	else if (c == 'll')
		;
	else if (c == 'j')
		;
	else if (c == 'z')
		;
}

/*
**	Format contains all of the conversions symbols '%' and flags eg. sdoiu.
**	The elipse contains all of the subsequent variables to be converted by
*/

int		ft_printf(const char * restrict format, ...)
{
	char		var;
	va_list		ap;


	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			var = find_type(*format);
		}
	}
	va_end(ap);
	return (0); // if everything was gucci
}

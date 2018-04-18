/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 00:12:16 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 08:49:24 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

int		ft_isspace(int c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}
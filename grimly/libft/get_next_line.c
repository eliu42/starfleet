/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:27:48 by eliu              #+#    #+#             */
/*   Updated: 2018/04/13 22:57:37 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/get_next_line_header.h"

static int			find_line(char **str, char **line)
{
	size_t			i;
	char			*temp;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] == '\n')
		{
			temp = *str;
			*line = ft_strsub(*str, 0, i);
			*str = ft_strsub(*str, i + 1, ft_strlen(*str) - i);
			free(temp);
			return (1);
		}
		i++;
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	int				i;
	char			buf[BUFF_SIZE + 1];
	static char		*str = NULL;

	if (!str)
		str = ft_strnew(BUFF_SIZE + 1);
	if (fd < 0 || !line || (read(fd, buf, 0) < 0))
		return (-1);
	if (find_line(&str, line))
		return (1);
	while ((i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[i] = '\0';
		str = ft_strjoin_memdel(str, buf);
		if (find_line(&str, line))
			return (1);
	}
	if (str[0])
	{
		*line = ft_strdup(str);
		ft_strclr(str);
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 07:47:26 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 13:23:39 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_get_line(const int fd, char **line)
{
	char	*buffer;
	char	*ptr;
	int		i;

	if ((buffer = (char *)malloc(sizeof(*buffer) * (BUFF_SIZE + 1))) == NULL)
		return (-1);
	i = read(fd, buffer, BUFF_SIZE);
	if (i > 0)
	{
		buffer[i] = '\0';
		ptr = ft_strjoin(*line, buffer);
		free(*line);
		*line = ptr;
	}
	free(buffer);
	return (i);
}

static int	ft_put_cont(const int fd, char **cont, char **line)
{
	int	i;

	while (*line == NULL)
	{
		i = ft_get_line(fd, cont);
		if (i == 0)
		{
			if (ft_strlen(*cont) == 0)
				return (0);
			*cont = ft_strjoin(*cont, "\n");
		}
		if (i < 0)
			return (-1);
		else
			*line = ft_strchr(*cont, '\n');
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		*stack = NULL;
	char			*ln;
	char			*ptr;
	int				i;

	if (!stack && (stack = (char *)malloc(sizeof(*stack))) == NULL)
		return (-1);
	if (!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	ln = ft_strchr(stack, '\n');
	i = ft_put_cont(fd, &stack, &ln);
	if (i == 0 || i == -1)
	{
		if (i == 0)
			*line = ft_strdup("");
		return (i);
	}
	*line = ft_strsub(stack, 0, ft_strlen(stack) - ft_strlen(ln));
	ptr = ft_strdup(ln + 1);
	ft_strdel(&stack);
	stack = ptr;
	return (i);
}

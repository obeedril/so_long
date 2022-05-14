/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:21:36 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/30 19:21:38 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static char	*univer(t_vars *vars, int n, char *str, char **line)
{
	char	*tmp_str;

	tmp_str = str;
	check_rectangle(n, vars);
	str = ft_strjoin(str, *line);
	free (tmp_str);
	tmp_str = NULL;
	vars->c_line++;
	free(*line);
	*line = NULL;
	return (str);
}

char	*map_parser(char *argv, t_vars *vars)
{
	char	*line;
	int		fd;
	char	*str;
	int		n;
	int		first;

	line = NULL;
	n = 0;
	first = 0;
	vars->c_sym = 0;
	vars->c_line = 0;
	fd = open(argv, O_RDONLY);
	str = (char *)malloc(sizeof(char));
	*str = 0;
	while ((get_next_line(fd, &line)))
	{
		n = ft_strlen(line);
		if (first == 0 && ++first)
			vars->c_sym = n;
		str = univer(vars, n, str, &line);
	}
	n = ft_strlen(line);
	str = univer(vars, n, str, &line);
	close(fd);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:09:37 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:25:06 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	get_next_line(int fd, char **line)
{
	int		was_rd;
	int		i;
	char	sym;

	was_rd = 1;
	i = 0;
	sym = 0;
	*line = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	while (was_rd > 0 && sym != '\n')
	{
		was_rd = read(fd, &sym, 1);
		if (sym != '\n' && was_rd != 0)
			line[0][i++] = sym;
	}
	line[0][i] = '\0';
	return (was_rd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_name_map_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:17:53 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 20:19:37 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_name_map(char *str)
{
	int	i;
	int	flag;
	int	dot;

	i = 0;
	flag = 0;
	dot = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			dot = 1;
			if (str[i + 1] != 'b' || str[i + 2] != 'e' || str[i + 3] != 'r'
				|| str[i + 4] != '\0')
			{
				flag = 4;
				break ;
			}
		}
		i++;
	}
	if (dot == 0)
		flag = 4;
	type_error(flag);
}

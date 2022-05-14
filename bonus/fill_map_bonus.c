/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:19:03 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/30 19:18:43 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	steps(t_vars *vars)
{
	char	*tmp_str;

	tmp_str = vars->str_steps;
	vars->str_steps = ft_itoa(vars->steps);
	free (tmp_str);
	tmp_str = NULL;
	mlx_string_put(vars->mlx, vars->mlx_win, 10, 15, 0x00FF0000, "Steps:");
	mlx_string_put(vars->mlx, vars->mlx_win, 70, 15, 0x00FF0000,
		vars->str_steps);
}

void	fill_map(t_vars *vars)
{
	int	i;
	int	tmp_l;
	int	tmp_s;

	i = -1;
	tmp_l = vars->c_line;
	tmp_s = vars->c_sym;
	vars->x = 0;
	vars->y = 0;
	while (vars->str[++i] != '\0')
	{
		if (--tmp_s >= 0 && tmp_l > 0)
		{
			draw_map(vars, i);
			vars->x += 50;
			if (tmp_s == 0)
			{
				vars->y += 50;
				vars->x = 0;
				tmp_s = vars->c_sym;
				tmp_l--;
			}
		}
	}
	steps(vars);
}

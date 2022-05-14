/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:19:03 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/22 20:24:44 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	draw_player(t_vars *vars)
{
	vars->img = vars->fone;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win,
		vars->img, vars->x, vars->y);
	if (vars->left == 1)
		vars->img = vars->player_2;
	else
		vars->img = vars->player_1;
}

static void	draw_collectables(t_vars *vars)
{
	vars->img = vars->fone;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win,
		vars->img, vars->x, vars->y);
	vars->img = vars->collect;
}

static void	draw_exit(t_vars *vars)
{
	vars->img = vars->fone;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win,
		vars->img, vars->x, vars->y);
	if (vars->lock == 1)
		vars->img = vars->exit_op;
	else
		vars->img = vars->exit_cl;
}

static void	draw_map(t_vars *vars, int i)
{
	if (vars->str[i] == '1')
		vars->img = vars->wall;
	else if (vars->str[i] == '0')
		vars->img = vars->fone;
	else if (vars->str[i] == 'P')
		draw_player(vars);
	else if (vars->str[i] == 'C')
		draw_collectables(vars);
	else if (vars->str[i] == 'E')
		draw_exit(vars);
	mlx_put_image_to_window(vars->mlx, vars->mlx_win, vars->img,
		vars->x, vars->y);
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
		if (tmp_s >= 0 && tmp_l > 0)
		{
			draw_map(vars, i);
			vars->x += 50;
			tmp_s--;
			if (tmp_s == 0)
			{
				vars->y += 50;
				vars->x = 0;
				tmp_s = vars->c_sym;
				tmp_l--;
			}
		}
	}
}

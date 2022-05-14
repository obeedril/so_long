/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:41:47 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/30 21:13:12 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	draw_player_exit(t_vars *vars, int i)
{
	vars->img = vars->fone;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win,
		vars->img, vars->x, vars->y);
	if (vars->str[i] == 'P')
	{
		if (vars->left == 1)
			vars->img = vars->player_2;
		else
			vars->img = vars->player_1;
	}
	if (vars->str[i] == 'E')
	{
		if (vars->lock == 1)
			vars->img = vars->exit_op;
		else
			vars->img = vars->exit_cl;
	}
}

static void	draw_collectables(t_vars *vars)
{
	vars->koef = (vars->c_collect - vars->c_collect_start) * 2;
	vars->img = vars->fone;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win,
		vars->img, vars->x, vars->y);
	if (vars->time <= (5 * vars->koef))
		vars->img = vars->collect;
	if (vars->time > (5 * vars->koef) && vars->time <= (10 * vars->koef))
		vars->img = vars->collect_1;
	if (vars->time > (10 * vars->koef) && vars->time <= (15 * vars->koef))
		vars->img = vars->collect_2;
	if (vars->time > (15 * vars->koef) && vars->time <= (20 * vars->koef))
		vars->img = vars->collect_3;
	if (vars->time > (20 * vars->koef))
	{
		vars->time = 0;
		vars->img = vars->collect;
	}
	vars->time++;
}

static void	draw_enemy_1(t_vars *vars)
{
	if (vars->time_en <= 20)
		vars->img = vars->flame;
	if (vars->time_en > 20 && vars->time_en <= 40)
		vars->img = vars->flame_1;
	if (vars->time_en > 40 && vars->time_en <= 60)
		vars->img = vars->flame_2;
	if (vars->time_en > 60 && vars->time_en <= 80)
		vars->img = vars->flame_3;
	if (vars->time_en > 80 && vars->time_en <= 100)
		vars->img = vars->flame_4;
	if (vars->time_en > 100 && vars->time_en <= 120)
		vars->img = vars->flame_5;
	if (vars->time_en > 120 && vars->time_en <= 140)
		vars->img = vars->flame_6;
	if (vars->time_en > 140 && vars->time_en <= 160)
		vars->img = vars->flame_7;
	if (vars->time_en > 160 && vars->time_en <= 180)
		vars->img = vars->flame_8;
	if (vars->time_en > 180 && vars->time_en <= 200)
		vars->img = vars->flame_9;
}

static void	draw_enemy(t_vars *vars)
{
	vars->img = vars->fone;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win,
		vars->img, vars->x, vars->y);
	draw_enemy_1(vars);
	if (vars->time_en > 200)
	{
		vars->time_en = 0;
		vars->img = vars->flame;
	}
	vars->time_en++;
}

void	draw_map(t_vars *vars, int i)
{
	if (vars->str[i] == '1')
		vars->img = vars->wall;
	else if (vars->str[i] == '0')
		vars->img = vars->fone;
	else if (vars->str[i] == 'P' || vars->str[i] == 'E')
		draw_player_exit(vars, i);
	else if (vars->str[i] == 'C')
		draw_collectables(vars);
	else if (vars->str[i] == 'A')
		draw_enemy(vars);
	mlx_put_image_to_window(vars->mlx, vars->mlx_win, vars->img,
		vars->x, vars->y);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keycodes_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:24:22 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:26:20 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	keycode_2(t_vars *vars)
{
	if (vars->str[vars->p_p + 1] != '1' && vars->str[vars->p_p + 1] != 'E')
		move_right(vars);
	else if (vars->lock == 1 && vars->str[vars->p_p + 1] == 'E')
	{
		move_right(vars);
		vars->str[vars->p_p] = 'E';
		vars->win = 1;
	}	
}

static void	keycode_0(t_vars *vars)
{
	if (vars->str[vars->p_p - 1] != '1' && vars->str[vars->p_p - 1] != 'E')
		move_left(vars);
	else if (vars->lock == 1 && vars->str[vars->p_p - 1] == 'E')
	{
		move_left(vars);
		vars->str[vars->p_p] = 'E';
		vars->win = 1;
	}
}

static void	keycode_1(t_vars *vars)
{
	if (vars->str[vars->p_p + vars->c_sym] != '1'
		&& vars->str[vars->p_p + vars->c_sym] != 'E')
		move_down(vars);
	else if (vars->lock == 1 && vars->str[vars->p_p + vars->c_sym] == 'E')
	{
		move_down(vars);
		vars->str[vars->p_p] = 'E';
		vars->win = 1;
	}
}

static void	keycode_13(t_vars *vars)
{
	if (vars->str[vars->p_p - vars->c_sym] != '1'
		&& vars->str[vars->p_p - vars->c_sym] != 'E')
		move_up(vars);
	else if (vars->lock == 1 && vars->str[vars->p_p - vars->c_sym] == 'E')
	{
		move_up(vars);
		vars->str[vars->p_p] = 'E';
		vars->win = 1;
	}
}

int	ft_keycodes(int keycode, t_vars *vars)
{
	if (keycode == 53)
		ft_close(vars);
	else if (vars->win == 0)
	{
		if (keycode == 2 || keycode == 124)
			keycode_2(vars);
		else if (keycode == 0 || keycode == 123)
			keycode_0(vars);
		else if (keycode == 1 || keycode == 125)
			keycode_1(vars);
		else if (keycode == 13 || keycode == 126)
			keycode_13(vars);
	}
	if (vars->c_collect_start == vars->c_collect)
		vars->lock = 1;
	mlx_clear_window(vars->mlx, vars->mlx_win);
	fill_map(vars);
	if (vars->steps_to_exit > vars->c_line * vars->c_sym)
		vars->win = 2;
	return (0);
}

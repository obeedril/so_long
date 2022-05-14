/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pictures_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:05:49 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 20:28:18 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

//void	flame()

static void	check_pictures(t_vars *vars)
{
	int	flag;

	flag = 0;
	if (!vars->fone || !vars->wall || !vars->player_1 || !vars->player_2
		|| !vars->collect || !vars->exit_op || !vars->exit_cl
		|| !vars->end_win || !vars->end_lose || !vars->collect_1
		|| !vars->collect_2 || !vars->collect_3 || !vars->flame
		|| !vars->flame_1 || !vars->flame_2 || !vars->flame_3
		|| !vars->flame_4 || !vars->flame_5 || !vars->flame_6
		|| !vars->flame_7 || !vars->flame_8 || !vars->flame_9)
		flag = 11;
	type_error(flag);
}

static void	flame(t_vars *vars)
{
	vars->flame = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_00.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_1 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_01.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_2 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_02.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_3 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_03.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_4 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_04.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_5 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_05.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_6 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_06.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_7 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_07.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_8 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_08.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->flame_9 = mlx_xpm_file_to_image(vars->mlx, "sprites/flame_09.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->end_win = mlx_xpm_file_to_image(vars->mlx, "sprites/win.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->end_lose = mlx_xpm_file_to_image(vars->mlx, "sprites/game_over.xpm",
			&vars->i_wid, &vars->i_hei);
}

void	pictures(t_vars *vars)
{
	vars->fone = mlx_xpm_file_to_image(vars->mlx, "sprites/Fone.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->wall = mlx_xpm_file_to_image(vars->mlx, "sprites/ice_1.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->player_1 = mlx_xpm_file_to_image(vars->mlx, "sprites/snowman_1.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->player_2 = mlx_xpm_file_to_image(vars->mlx, "sprites/snowman_2.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->collect = mlx_xpm_file_to_image(vars->mlx, "sprites/purple_0.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->collect_1 = mlx_xpm_file_to_image(vars->mlx, "sprites/purple_1.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->collect_2 = mlx_xpm_file_to_image(vars->mlx, "sprites/purple_2.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->collect_3 = mlx_xpm_file_to_image(vars->mlx, "sprites/purple_3.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->exit_op = mlx_xpm_file_to_image(vars->mlx, "sprites/open.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->exit_cl = mlx_xpm_file_to_image(vars->mlx, "sprites/closed.xpm",
			&vars->i_wid, &vars->i_hei);
	flame(vars);
	check_pictures(vars);
}

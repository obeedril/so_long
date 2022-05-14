/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pictures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:05:49 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 18:47:07 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_pictures(t_vars *vars)
{
	int	flag;

	flag = 0;
	if (!vars->fone || !vars->wall || !vars->player_1 || !vars->player_2
		|| !vars->collect || !vars->exit_op || !vars->exit_cl
		|| !vars->end_win || !vars->end_lose)
		flag = 11;
	type_error(flag);
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
	vars->exit_op = mlx_xpm_file_to_image(vars->mlx, "sprites/open.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->exit_cl = mlx_xpm_file_to_image(vars->mlx, "sprites/closed.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->end_win = mlx_xpm_file_to_image(vars->mlx, "sprites/win.xpm",
			&vars->i_wid, &vars->i_hei);
	vars->end_lose = mlx_xpm_file_to_image(vars->mlx, "sprites/game_over.xpm",
			&vars->i_wid, &vars->i_hei);
	check_pictures(vars);
}

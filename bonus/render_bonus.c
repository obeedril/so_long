/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:41:14 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:24:33 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	render(t_vars *vars)
{
	int	i;

	i = 0;
	mlx_clear_window(vars->mlx, vars->mlx_win);
	fill_map(vars);
	if (vars->win == 1)
	{
		vars->img = vars->end_win;
		mlx_put_image_to_window(vars->mlx, vars->mlx_win,
			vars->img, vars->map_width / 2 - 100, vars->map_height / 2 - 50);
	}
	else if (vars->win == 2)
	{
		vars->img = vars->end_lose;
		mlx_put_image_to_window(vars->mlx, vars->mlx_win,
			vars->img, vars->map_width / 2 - 100, vars->map_height / 2 - 50);
	}
	return (0);
}

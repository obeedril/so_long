/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win_or_not.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:20:25 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 18:47:39 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	win_or_not(t_vars *vars)
{
	if (vars->win == 1)
		vars->img = vars->end_win;
	else if (vars->win == 2)
		vars->img = vars->end_lose;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win, vars->img,
		vars->map_width / 2 - 100, vars->map_height / 2 - 50);
}

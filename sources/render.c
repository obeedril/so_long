/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:41:14 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 14:25:12 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	render(t_vars *vars)
{
	mlx_clear_window(vars->mlx, vars->mlx_win);
	fill_map(vars);
	return (0);
}

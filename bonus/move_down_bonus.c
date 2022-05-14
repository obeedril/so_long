/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:14:21 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:17:03 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_down(t_vars *vars)
{
	if (vars->str[vars->p_p + vars->c_sym] != 'A')
	{
		if (vars->str[vars->p_p + vars->c_sym] == 'C')
			vars->c_collect_start++;
		vars->str[vars->p_p] = '0';
		vars->str[vars->p_p + vars->c_sym] = 'P';
		vars->p_p += vars->c_sym;
		vars->steps++;
	}
	else
	{
		vars->str[vars->p_p] = '0';
		vars->str[vars->p_p + vars->c_sym] = 'A';
		vars->win = 2;
	}
	if (vars->lock == 1)
		vars->steps_to_exit++;
}

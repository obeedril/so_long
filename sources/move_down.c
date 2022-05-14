/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:14:21 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:18:22 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_down(t_vars *vars)
{
	if (vars->str[vars->p_p + vars->c_sym] == 'C')
		vars->c_collect_start++;
	vars->str[vars->p_p] = '0';
	vars->str[vars->p_p + vars->c_sym] = 'P';
	vars->p_p += vars->c_sym;
	vars->steps++;
	if (vars->lock == 1)
		vars->steps_to_exit++;
	printf("steps = %d\n", vars->steps);
}

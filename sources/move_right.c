/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:11:22 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:18:32 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_right(t_vars *vars)
{
	vars->left = 0;
	if (vars->str[vars->p_p + 1] == 'C')
		vars->c_collect_start++;
	vars->str[vars->p_p] = '0';
	vars->str[vars->p_p + 1] = 'P';
	vars->p_p += 1;
	vars->steps++;
	if (vars->lock == 1)
		vars->steps_to_exit++;
	printf("steps = %d\n", vars->steps);
}

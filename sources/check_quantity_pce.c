/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_quantity_pce.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:52:58 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 14:17:22 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_quantity_pce(t_vars *vars)
{
	int	flag;

	flag = 0;
	if (vars->c_player == 0)
		flag = 6;
	else if (vars->c_exit < 1)
		flag = 7;
	else if (vars->c_collect < 1)
		flag = 8;
	else if (vars->c_player > 1)
		flag = 9;
	type_error(flag);
}

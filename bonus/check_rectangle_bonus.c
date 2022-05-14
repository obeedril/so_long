/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rectangle_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:46:03 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 20:18:10 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_rectangle(int n, t_vars *vars)
{
	int	flag;

	flag = 0;
	if (n != vars->c_sym)
	{
		flag = 5;
		type_error(flag);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:38:54 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 19:07:50 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static int	p_perimeter(t_vars *vars, int i, int n)
{
	int	m;

	m = 1;
	while (vars->str[i] != '\0')
	{
		while (m < vars->c_line - 1)
		{
			if (vars->str[n * m] != '1' || vars->str[n * m + (n - 1)] != '1')
				return (3);
			m++;
			i = n * m;
		}
		if (m == vars->c_line - 1)
		{
			if (i >= n * m && vars->str[i] != '1')
				return (3);
			i++;
		}
	}
	return (0);
}

static int	perimeter(t_vars *vars)
{
	int	i;
	int	n;

	i = 0;
	n = vars->c_sym;
	while (vars->str[i] != '\0')
	{
		if (i < n && vars->str[i] != '1')
			return (3);
		i++;
		if (i > n)
			return (p_perimeter(vars, i, n));
	}
	return (0);
}

int	check_map(t_vars *vars)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (vars->str[0] == '\0')
		flag = 1;
	while (vars->str[i] != '\0')
	{
		if (vars->str[i] != '1' && vars->str[i] != '0' && vars->str[i] != 'C'
			&& vars->str[i] != 'E' && vars->str[i] != 'P'
			&& vars->str[i] != 'A')
			flag = 2;
		i++;
	}
	if (flag == 0)
		flag = perimeter(vars);
	type_error(flag);
	return (0);
}

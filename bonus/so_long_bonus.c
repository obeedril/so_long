/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:48:27 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/30 21:09:27 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	ft_positions(t_vars *vars)
{
	int	i;

	i = 0;
	vars->c_collect = 0;
	vars->c_player = 0;
	vars->c_exit = 0;
	while (vars->str[i] != '\0')
	{
		if (vars->str[i] == 'P')
		{
			vars->p_p = i;
			vars->c_player++;
		}
		else if (vars->str[i] == 'E')
		{
			vars->ex_p = i;
			vars->c_exit++;
		}
		else if (vars->str[i] == 'C')
			vars->c_collect++;
		i++;
	}
	check_quantity_pce(vars);
}

static void	check_argc(int argc)
{
	int	flag;

	flag = 0;
	if (argc != 2)
		flag = 10;
	type_error(flag);
}

static void	zero(t_vars *vars)
{
	vars->c_collect_start = 0;
	vars->lock = 0;
	vars->left = 0;
	vars->steps = 0;
	vars->steps_to_exit = 0;
	vars->win = 0;
	vars->time = 0;
	vars->time_en = 0;
	vars->koef = 0;
	vars->str_steps = NULL;
}

int	main(int argc, char **argv)
{	
	t_vars	vars;

	check_argc(argc);
	zero(&vars);
	check_name_map(argv[1]);
	vars.str = map_parser(argv[1], &vars);
	check_map(&vars);
	ft_positions(&vars);
	vars.mlx = mlx_init();
	vars.map_width = vars.c_sym * 50;
	vars.map_height = vars.c_line * 50;
	vars.mlx_win = mlx_new_window(vars.mlx, vars.map_width,
			vars.map_height, "so_long");
	pictures(&vars);
	fill_map(&vars);
	mlx_key_hook(vars.mlx_win, ft_keycodes, &vars);
	mlx_hook(vars.mlx_win, 17, (1L << 17), ft_close, &vars);
	mlx_loop_hook(vars.mlx, render, &vars);
	mlx_loop(vars.mlx);
	return (0);
}

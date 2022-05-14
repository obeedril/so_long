/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:18:37 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/30 21:09:20 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

typedef struct s_vars {
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*fone;
	char	*wall;
	char	*player_1;
	char	*player_2;
	char	*collect;
	char	*collect_1;
	char	*collect_2;
	char	*collect_3;
	char	*exit_cl;
	char	*exit_op;
	char	*end_win;
	char	*end_lose;
	char	*flame;
	char	*flame_1;
	char	*flame_2;
	char	*flame_3;
	char	*flame_4;
	char	*flame_5;
	char	*flame_6;
	char	*flame_7;
	char	*flame_8;
	char	*flame_9;
	int		c_player;
	int		c_exit;
	int		p_p;
	int		ex_p;
	int		c_collect;
	int		c_collect_start;
	int		steps;
	int		lock;
	int		left;
	int		i_wid;
	int		i_hei;
	int		map_width;
	int		map_height;
	int		c_line;
	int		c_sym;
	int		x;
	int		y;
	char	*str;
	int		win;
	int		time;
	int		time_en;
	int		koef;
	char	*str_steps;
	int		steps_to_exit;
}t_vars;

int		get_next_line(int fd, char **line);
void	fill_map(t_vars	*vars);
int		ft_keycodes(int keycode, t_vars *vars);
int		ft_close(t_vars *vars);
int		check_map(t_vars *vars);
void	type_error(int flag);
void	check_name_map(char *str);
void	check_rectangle(int n, t_vars *vars);
void	check_quantity_pce(t_vars *vars);
void	move_right(t_vars *vars);
void	move_left(t_vars *vars);
void	move_down(t_vars *vars);
void	move_up(t_vars *vars);
void	pictures(t_vars *vars);
int		render(t_vars *vars);
void	draw_map(t_vars *vars, int i);
char	*map_parser(char *argv, t_vars *vars);
#endif
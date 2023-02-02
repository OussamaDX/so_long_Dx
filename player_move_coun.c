/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move_coun.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 03:24:55 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 14:58:21 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_up_cont(t_game_mape *vars, int x, int y)
{
	if (vars->map[x - 1][y] == KEYS)
	{
		vars->map[x - 1][y] = FLOOR;
	}
	if (position(vars->map, 'C').i_player_x == -1)
	{
		vars->door_i = NULL;
		vars->door_o = mlx_xpm_file_to_image(vars->mlx_pointr,
				"design/door_open.xpm", &vars->with, &vars->height);
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->door_o, position(vars->map, 'E').j_player_y * 30,
			position(vars->map, 'E').i_player_x * 30);
	}
	vars->map[x][y] = FLOOR;
	vars->img_img = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/floor.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	x--;
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_up.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

void	move_down_count(t_game_mape *vars, int x, int y)
{
	if (vars->map[x + 1][y] == KEYS)
	{
		vars->map[x + 1][y] = FLOOR;
	}
	if (position(vars->map, 'C').i_player_x == -1)
	{
		vars->door_i = NULL;
		vars->door_o = mlx_xpm_file_to_image(vars->mlx_pointr,
				"design/door_open.xpm", &vars->with, &vars->height);
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->door_o, position(vars->map, 'E').j_player_y * 30,
			position(vars->map, 'E').i_player_x * 30);
	}
	vars->map[x][y] = FLOOR;
	vars->img_img = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/floor.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	x++;
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_down.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

void	move_right_count(t_game_mape *vars, int x, int y)
{
	if (vars->map[x][y + 1] == KEYS)
	{
		vars->map[x][y + 1] = FLOOR;
	}
	if (position(vars->map, 'C').i_player_x == -1)
	{
		vars->door_o = mlx_xpm_file_to_image(vars->mlx_pointr,
				"design/door_open.xpm", &vars->with, &vars->height);
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->door_o, position(vars->map, 'E').j_player_y * 30,
			position(vars->map, 'E').i_player_x * 30);
	}
	vars->map[x][y] = FLOOR;
	vars->img_img = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/floor.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	y++;
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_right.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

void	move_left_count(t_game_mape *vars, int x, int y)
{
	if (vars->map[x][y - 1] == KEYS)
	{
		vars->map[x][y - 1] = FLOOR;
	}
	if (position(vars->map, 'C').i_player_x == -1)
	{
		vars->door_o = mlx_xpm_file_to_image(vars->mlx_pointr,
				"design/door_open.xpm", &vars->with, &vars->height);
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->door_o, position(vars->map, 'E').j_player_y * 30,
			position(vars->map, 'E').i_player_x * 30);
	}
	vars->map[x][y] = FLOOR;
	vars->img_img = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/floor.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	y--;
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_left.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

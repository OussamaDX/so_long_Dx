/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move_coun.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 03:24:55 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 18:34:17 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_up_cont(t_game_mape *vars, int x, int y)
{
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
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	x--;
	if (vars->map[x][y] == KEYS)
	{
		vars->map[x][y] = FLOOR;
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->img_img, y * 30, x * 30);
	}
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_up.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

void	move_down_count(t_game_mape *vars, int x, int y)
{
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
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	x++;
	if (vars->map[x][y] == KEYS)
	{
		vars->map[x][y] = FLOOR;
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->img_img, y * 30, x * 30);
	}
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_down.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

void	move_right_count(t_game_mape *vars, int x, int y)
{
	if (position(vars->map, 'C').i_player_x == -1)
	{
		vars->door_o = mlx_xpm_file_to_image(vars->mlx_pointr,
				"design/door_open.xpm", &vars->with, &vars->height);
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->door_o, position(vars->map, 'E').j_player_y * 30,
			position(vars->map, 'E').i_player_x * 30);
	}
	vars->map[x][y] = FLOOR;
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	y++;
	if (vars->map[x][y] == KEYS)
	{
		vars->map[x][y] = FLOOR;
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->img_img, y * 30, x * 30);
	}
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_right.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

void	move_left_count(t_game_mape *vars, int x, int y)
{
	if (position(vars->map, 'C').i_player_x == -1)
	{
		vars->door_o = mlx_xpm_file_to_image(vars->mlx_pointr,
				"design/door_open.xpm", &vars->with, &vars->height);
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->door_o, position(vars->map, 'E').j_player_y * 30,
			position(vars->map, 'E').i_player_x * 30);
	}
	vars->map[x][y] = FLOOR;
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->img_img, y * 30, x * 30);
	y--;
	if (vars->map[x][y] == KEYS)
	{
		vars->map[x][y] = FLOOR;
		mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
			vars->img_img, y * 30, x * 30);
	}
	vars->plyer_i = mlx_xpm_file_to_image(vars->mlx_pointr,
			"design/player_left.xpm", &vars->with, &vars->height);
	mlx_put_image_to_window(vars->mlx_pointr, vars->mlx_window,
		vars->plyer_i, y * 30, x * 30);
	vars->map[x][y] = PLAYER;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_graph_v3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:31:48 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 20:49:01 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_wall_con(t_game_mape *game, int i, int j)
{
	game->walls_i = mlx_xpm_file_to_image(game->mlx_pointr,
			"design/walls.xpm", &game->with, &game->height);
	check_xpm(game->walls_i);
	mlx_put_image_to_window(game->mlx_pointr, game->mlx_window,
		game->walls_i, j * 30, i * 30);
}

void	ft_coins_con(t_game_mape *game, int i, int j)
{
	game->coins_i = mlx_xpm_file_to_image(game->mlx_pointr,
			"design/coins.xpm", &game->with, &game->height);
	check_xpm(game->coins_i);
	mlx_put_image_to_window(game->mlx_pointr,
		game->mlx_window, game->coins_i, j * 30, i * 30);
}

void	ft_player_con(t_game_mape *game, int i, int j)
{
	game->plyer_i = mlx_xpm_file_to_image(game->mlx_pointr,
			"design/player.xpm", &game->with, &game->height);
	check_xpm(game->plyer_i);
	mlx_put_image_to_window(game->mlx_pointr,
		game->mlx_window, game->plyer_i, j * 30, i * 30);
}

void	ft_exit_con(t_game_mape *game, int i, int j)
{
	game->door_i = mlx_xpm_file_to_image(game->mlx_pointr,
			"design/door.xpm", &game->with, &game->height);
	check_xpm(game->door_i);
	mlx_put_image_to_window(game->mlx_pointr,
		game->mlx_window, game->door_i, j * 30, i * 30);
}

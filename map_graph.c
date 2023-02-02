/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_graph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:42:43 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 03:05:08 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_wall(t_game_mape *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			game->img_img = mlx_xpm_file_to_image(game->mlx_pointr,
					"design/floor.xpm", &game->with, &game->height);
			mlx_put_image_to_window(game->mlx_pointr, game->mlx_window,
				game->img_img, j * 30, i * 30);
			if (game->map[i][j] == WALL)
			{
				game->walls_i = mlx_xpm_file_to_image(game->mlx_pointr,
						"design/walls.xpm", &game->with, &game->height);
				mlx_put_image_to_window(game->mlx_pointr, game->mlx_window,
					game->walls_i, j * 30, i * 30);
			}
			j++;
		}
		i++;
	}
}

void	ft_exit(t_game_mape *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == MAP_EXIT)
			{
				game->door_i = mlx_xpm_file_to_image(game->mlx_pointr,
						"design/door.xpm", &game->with, &game->height);
				mlx_put_image_to_window(game->mlx_pointr,
					game->mlx_window, game->door_i, j * 30, i * 30);
			}
			j++;
		}
		i++;
	}
}

void	ft_coins(t_game_mape *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == KEYS)
			{
				game->coins_i = mlx_xpm_file_to_image(game->mlx_pointr,
						"design/coins.xpm", &game->with, &game->height);
				mlx_put_image_to_window(game->mlx_pointr,
					game->mlx_window, game->coins_i, j * 30, i * 30);
			}
			j++;
		}
		i++;
	}
}

void	ft_player(t_game_mape *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == PLAYER)
			{
				game->plyer_i = mlx_xpm_file_to_image(game->mlx_pointr,
						"design/player.xpm", &game->with, &game->height);
				mlx_put_image_to_window(game->mlx_pointr,
					game->mlx_window, game->plyer_i, j * 30, i * 30);
			}
			j++;
		}
		i++;
	}
}

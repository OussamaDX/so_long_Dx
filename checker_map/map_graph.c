/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_graph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:42:43 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 20:42:33 by ooussaad         ###   ########.fr       */
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
			check_xpm(game->img_img);
			mlx_put_image_to_window(game->mlx_pointr, game->mlx_window,
				game->img_img, j * 30, i * 30);
			if (game->map[i][j] == WALL)
			{
				ft_wall_con(game, i, j);
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
				ft_exit_con(game, i, j);
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
				ft_coins_con(game, i, j);
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
				ft_player_con(game, i, j);
			}
			j++;
		}
		i++;
	}
}

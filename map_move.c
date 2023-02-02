/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:15:55 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 03:13:39 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h" //9

int	key_hook(int keycode, t_game_mape *vars)
{
	if (keycode == 126)
	{
		move_up(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 125)
	{
		move_down(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 124)
	{
		move_right(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 123)
	{
		move_left(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 53)
	{
		exit(0);
	}
	return (0);
}

void	move(t_game_mape *game)
{
	mlx_hook(game->mlx_window, 2, 0, key_hook, game);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:15:55 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 20:11:17 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_hook(int keycode, t_game_mape *vars)
{
	if (keycode == 13 || keycode == 126)
	{
		move_up(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 1 || keycode == 125)
	{
		move_down(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 2 || keycode == 124)
	{
		move_right(vars);
		moves_terminal(vars->count_moves++);
	}
	else if (keycode == 0 || keycode == 123)
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

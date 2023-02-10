/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:56:17 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 18:33:27 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_up(t_game_mape *vars)
{
	int	x;
	int	y;

	x = position(vars->map, 'P').i_player_x;
	y = position(vars->map, 'P').j_player_y;
	if (vars->map[x - 1][y] != WALL)
	{
		if (vars->map[x - 1][y] == MAP_EXIT)
		{
			if (position(vars->map, 'C').i_player_x == -1)
			{
				ft_putstr("winner winner chicken in dinner \n");
				exit(0);
			}
		}
		else
		{
			move_up_cont(vars, x, y);
		}
	}
}

void	move_down(t_game_mape *vars)
{
	int	x;
	int	y;

	x = position(vars->map, 'P').i_player_x;
	y = position(vars->map, 'P').j_player_y;
	if (vars->map[x + 1][y] != WALL)
	{
		if (vars->map[x + 1][y] == MAP_EXIT)
		{
			if (position(vars->map, 'C').i_player_x == -1)
			{
				ft_putstr("winner winner chicken in dinner \n");
				exit(0);
			}
		}
		else
		{
			move_down_count(vars, x, y);
		}
	}
}

void	move_right(t_game_mape *vars)
{
	int	x;
	int	y;

	x = position(vars->map, 'P').i_player_x;
	y = position(vars->map, 'P').j_player_y;
	if (vars->map[x][y + 1] != WALL)
	{
		if (vars->map[x][y + 1] == MAP_EXIT)
		{
			if (position(vars->map, 'C').i_player_x == -1)
			{
				ft_putstr("winner winner chicken in dinner \n");
				exit(0);
			}
		}
		else
		{
			move_right_count(vars, x, y);
		}
	}
}

void	move_left(t_game_mape *vars)
{
	int	x;
	int	y;

	x = position(vars->map, 'P').i_player_x;
	y = position(vars->map, 'P').j_player_y;
	if (vars->map[x][y - 1] != WALL)
	{
		if (vars->map[x][y - 1] == MAP_EXIT)
		{
			if (position(vars->map, 'C').i_player_x == -1)
			{
				ft_putstr("winner winner chicken in dinner \n");
				exit(0);
			}
		}
		else
		{
			move_left_count(vars, x, y);
		}
	}
}

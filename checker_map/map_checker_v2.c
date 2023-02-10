/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_v2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:35:06 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/09 16:40:48 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
//1 -- this use to check if the lines are the same
int	check_len(char **map, t_game_mape *ptr)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(map[0]);
	ptr->coulumes = len;
	while (map[i])
	{
		if (len != ft_strlen(map[i]))
		{
			write (2, "invalid len of map\n", 20);
			exit(1);
		}
		i++;
	}
	return (1);
}

//2 search a PLYER in map if found it then return position i and y
t_game_mape	position(char **map, char c)
{
	int			i;
	int			j;
	t_game_mape	ptr;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
			{
				ptr.i_player_x = i;
				ptr.j_player_y = j;
				return (ptr);
			}
			j++;
		}
		i++;
	}
	ptr.i_player_x = -1;
	ptr.j_player_y = -1;
	return (ptr);
}

int	len_with(char **map)
{
	int	i;

	i = 0;
	while (map[0][i])
	{
		i++;
	}
	return (i);
}

void	flood_fill(char **map, int x, int y)
{
	int	x_len;
	int	y_wid;

	y_wid = len_with(&map[0]);
	x_len = len_hight(map);
	if (x < 0 || y < 0 || x > x_len || y > y_wid
		|| map[x][y] == '1' || map[x][y] == '*' || map[x][y] == 'E')
		return ;
	map[x][y] = '*';
	flood_fill(map, x - 1, y);
	flood_fill(map, x + 1, y);
	flood_fill(map, x, y - 1);
	flood_fill(map, x, y + 1);
}

void	check_path(char **map)
{
	int	x;
	int	y;

	y = position(map, 'P').j_player_y;
	x = position(map, 'P').i_player_x;
	flood_fill(map, x, y);
	invalid_position_exite(map);
	invalid_position_player(map);
}

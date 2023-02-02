/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:26:59 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/01 22:46:33 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// 1 ---- this function is use to check characters in map
int	check_character(t_game_mape *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (ptr->map[i])
	{
		j = 0;
		while (ptr->map[i][j])
		{
			if (ptr->map[i][j] != FLOOR && ptr->map[i][j] != WALL
				&& ptr->map[i][j] != KEYS && ptr->map[i][j] != MAP_EXIT
				&& ptr->map[i][j] != PLAYER)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// 2 ---- this function is use to check (.ber) files
int	check_ber(char *file)
{
	char	*ext;

	ext = ft_strrchr(file, '.');
	if (!file)
		return (0);
	if (ft_strncmp(ext, ".ber", 5))
	{
		write(2, ".ber error", 12);
		exit (1);
	}
	return (1);
}

void	check_walls_cont(char **map, t_game_mape *ptr, int j, int i)
{
	while (map[i][j])
	{
		if (map[0][j] != '1' || map[ptr->row - 1][j] != '1'
		|| map[i][0] != '1' || map[i][ptr->coulumes - 1] != '1')
		{
			write (2, "invalid map\n", 12);
			exit(1);
		}
		j++;
	}
}

// 5 this function is use to check if all walls = 1
int	check_walls(char **map, t_game_mape *ptr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ptr -> coulumes = ft_strlen(map[0]);
	ptr -> row = 0;
	while (map[ptr->row])
		ptr->row++;
	while (map[i])
	{
		j = 0;
		check_walls_cont(map, ptr, j, i);
		if (j != ptr->coulumes)
			return (0);
		i++;
	}
	return (1);
}

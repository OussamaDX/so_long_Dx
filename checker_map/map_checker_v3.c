/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_v3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:22:33 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 16:02:17 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	len_hight(char **map)
{
	int	count1;

	count1 = 0;
	while (map[count1])
	{
		count1++;
	}
	return (count1);
}

void	count_elm(int count_p, int count_c, int count_e, t_game_mape *vars)
{
	vars->count_coins = count_c;
	if (count_p != 1 || count_e != 1 || count_c < 1)
	{
		write (2, "invalid map\n", 12);
		exit (1);
	}
}

// 3 this function is used to check if we have 1 palyer and 1 map exit ..
void	check_doubles(char **str, t_game_mape *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		i = 0;
		while (str[j][i])
		{
			if (str[j][i] == PLAYER)
				vars->count_p++;
			if (str[j][i] == KEYS)
				vars->count_c++;
			if (str[j][i] == MAP_EXIT)
				vars->count_e++;
			i++;
		}
		j++;
	}
	count_elm(vars->count_p, vars->count_c, vars->count_e, vars);
}

void	invalid_position_exite(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'E')
			{
				if (map[i - 1][j] != '*' && map[i + 1][j] != '*' &&
				map[i][j - 1] != '*' && map[1][j + 1] != '*')
				{
					write(1, "error\ninvalid path\n", 20);
					ft_free_ptr(map);
					exit(1);
				}
			}
			j++;
		}
		i++;
	}
}

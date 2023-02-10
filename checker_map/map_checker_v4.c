/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_v4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:28:19 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 20:49:33 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	invalid_position_player(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
			{
				write(1, "error\ninvalid path\n", 20);
				ft_free_ptr(map);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_xpm(void *data)
{
	if (data == NULL)
	{
		write(1, "error xpm", 10);
		exit(1);
	}
}

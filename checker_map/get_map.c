/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:42:00 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 20:04:17 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
//creat a function use to get line of my map (.ber)
int	quit(void)
{
	exit(0);
	return (0);
}

void	start_game( t_game_mape ptr, char *holder)
{
	ptr.mlx_pointr = mlx_init();
	ptr.map = ft_split(holder, '\n');
	ptr.map22 = ft_split(holder, '\n');
	check_character(&ptr);
	check_doubles(ptr.map, &ptr);
	check_walls(ptr.map, &ptr);
	check_len(ptr.map, &ptr);
	check_path(ptr.map22);
	position(ptr.map, 'P');
	ptr.mlx_window = mlx_new_window(ptr.mlx_pointr, len_with(ptr.map22) * 30,
			len_hight(ptr.map22) * 30, "so_long_dx");
	ft_wall(&ptr);
	ft_coins(&ptr);
	ft_player(&ptr);
	ft_exit(&ptr);
	mlx_hook(ptr.mlx_window, 2, 0, key_hook, &ptr);
	mlx_hook(ptr.mlx_window, 17, 0, quit, &ptr);
	mlx_loop(ptr.mlx_pointr);
}

int	main(int argc, char **argv)
{
	int			fd;
	char		*holder;
	t_game_mape	ptr;

	ptr.count_moves = 1;
	holder = NULL;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			perror(argv[1]);
			exit(1);
		}
		check_ber(argv[1]);
		holder = get_next_line(fd);
		start_game(ptr, holder);
	}
	else
	{
		write(1, "argv error", 11);
		return (0);
	}
}

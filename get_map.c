/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:26:54 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 17:56:58 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
//creat a function use to get line of my map (.ber)
void	start_game(char **argv, t_game_mape ptr)
{
	check_character(&ptr);
	check_doubles(ptr.map, &ptr);
	check_ber(argv[1]);
	check_walls(ptr.map, &ptr);
	check_len(ptr.map, &ptr);
	check_path(ptr.map22);
	position(ptr.map, 'P');
	ptr.mlx_pointr = mlx_init();
	ptr.mlx_window = mlx_new_window(ptr.mlx_pointr, len_with(ptr.map22) * 30,
			len_hight(ptr.map22) * 30, "so_long_dx");
	ft_wall(&ptr);
	ft_coins(&ptr);
	ft_player(&ptr);
	ft_exit(&ptr);
	move(&ptr);
	mlx_loop(ptr.mlx_pointr);
}

int	main(int argc, char **argv)
{
	int			fd;
	char		*holder;
	char		*dst;
	t_game_mape	ptr;

	holder = NULL;
	if (argc < 2)
	{
		write(1, "entre 2 arguments", 18);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while (1)
	{
		dst = ft_strjoin(holder, get_next_line(fd));
		holder = dst;
		if (holder[ft_strlen(holder) - 1] != '\n')
		{
			break ;
		}
	}
	ptr.map = ft_split(holder, '\n');
	ptr.map22 = ft_split(holder, '\n');
	start_game(argv, ptr);
}

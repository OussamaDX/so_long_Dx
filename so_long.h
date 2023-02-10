/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:27:14 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 20:42:00 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <mlx.h>

# define PLAYER 	'P'
# define KEYS		'C'
# define WALL		'1'
# define FLOOR		'0'
# define MAP_EXIT	'E'

typedef struct t_game{
	int		i_player_x;
	int		j_player_y;
	int		game_score;
	int		max_score;
	int		coulumes;
	int		row;
	int		number_lines;
	char	**map;
	char	**map22;
	char	*mp;
	void	*mlx_pointr;
	void	*mlx_window;
	void	*img_img;
	int		with;
	int		height;
	void	*plyer_i;
	void	*coins_i;
	void	*walls_i;
	void	*door_i;
	void	*door_o;
	int		count_coins;
	int		count_moves;
	int		count_p;
	int		count_c;
	int		count_e;
}t_game_mape;

void		check_path(char **map);
void		count_elm(int count_p, int count_c, int count_e, t_game_mape *vars);
void		ft_free_ptr(char **ptr);
int			check_len(char **map, t_game_mape *ptr);
t_game_mape	position(char **map, char c);
int			check_character(t_game_mape *ptr);
int			check_ber(char *file);
void		count_elm(int count_p, int count_c, int count_e, t_game_mape *vars);
void		check_doubles(char **str, t_game_mape *vars);
int			check_walls(char **map, t_game_mape *ptr);
int			len_with(char **map);
int			len_hight(char **map);
void		ft_wall(t_game_mape *game);
void		ft_exit(t_game_mape *game);
void		ft_coins(t_game_mape *game);
void		ft_player(t_game_mape *game);
void		move(t_game_mape *game);
void		ft_putstr(char *str);
void		ft_putnbr(int n);
void		moves_terminal(int n);
void		move_up(t_game_mape *vars);
void		move_down(t_game_mape *vars);
void		move_right(t_game_mape *vars);
void		move_left(t_game_mape *vars);
void		move_up_cont(t_game_mape *vars, int x, int y);
void		move_down_count(t_game_mape *vars, int x, int y);
void		move_right_count(t_game_mape *vars, int x, int y);
void		move_left_count(t_game_mape *vars, int x, int y);
void		invalid_position_player(char **map);
void		invalid_position_exite(char **map);
int			key_hook(int keycode, t_game_mape *vars);
void		check_xpm(void *data);
void		ft_wall_con(t_game_mape *game, int i, int j);
void		ft_player_con(t_game_mape *game, int i, int j);
void		ft_exit_con(t_game_mape *game, int i, int j);
void		ft_coins_con(t_game_mape *game, int i, int j);

#endif

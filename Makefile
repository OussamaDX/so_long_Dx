NAME= so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror

MLXFLAGS = -lmlx -framework OpenGL -framework AppKit

SRCS =	checker_map/map_checker.c\
		checker_map/map_graph.c\
		checker_map/map_graph_v3.c\
		checker_map/map_utils.c\
		checker_map/get_map.c \
		checker_map/map_checker_v2.c\
		checker_map/map_checker_v3.c\
		checker_map/map_move.c\
		checker_map/player_move.c\
		checker_map/player_move_coun.c\
		checker_map/map_checker_v4.c\
		./libft/ft_memset.c		\
		./libft/ft_bzero.c		\
		./libft/ft_strlen.c		\
		./libft/ft_calloc.c		\
		./libft/ft_strjoin.c	\
		./libft/ft_split.c		\
		./libft/ft_strlcpy.c	\
		./libft/ft_strchr.c		\
		./libft/ft_strdup.c		\
		./libft/get_next_line.c \
		./libft/ft_strrchr.c	\
		./libft/ft_strncmp.c 	\
		./libft/ft_memcpy.c		\
		./libft/ft_itoa.c		\

OBJ = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
		cc ${CFLAGS}  $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
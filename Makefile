SRCS =			ft_memset.c		\
		  		ft_bzero.c		\
		  		ft_strlen.c		\
		  		ft_calloc.c		\
				ft_strjoin.c	\
				ft_split.c		\
				ft_strlcpy.c	\
				ft_strchr.c		\
				ft_strdup.c		\
				get_next_line.c \
				ft_strrchr.c	\
				ft_strncmp.c 	\
				ft_memcpy.c		\
				ft_strdup.c		\

NAME			= libft.a

CC				= cc

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar rc

OBJS			= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o :%.c
	$(CC) $(CFLAGS) -c $<

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

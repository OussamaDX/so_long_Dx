/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:05:55 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/09 22:55:04 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_new_line(char *map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '\n' && map[i + 1] == '\n') || map[0] == '\n')
		{
			write(1, "error\ninvalid line\n", 21);
			exit(1);
		}	
		i++;
	}
	if (map[i - 1] == '\n')
	{
		write(1, "error\ninvalid line\n", 21);
		exit(1);
	}
}

char	*gnl_read(int fd, char *ptr)
{
	ssize_t	a;
	char	*dst;

	if (!ptr)
		ptr = ft_strdup("");
	dst = (char *)malloc(BUFFER_SIZE + 1);
	if (!dst)
		return (NULL);
	a = 1;
	while (a != 0)
	{
		a = read(fd, dst, BUFFER_SIZE);
		if (a == -1)
		{
			free(ptr);
			free(dst);
			return (NULL);
		}
		dst[a] = '\0';
		ptr = ft_strjoin(ptr, dst);
	}
	check_new_line(ptr);
	free(dst);
	return (ptr);
}

char	*get_next_line(int fd)
{
	static char	*ptr;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	ptr = gnl_read(fd, ptr);
	if (!ptr)
		return (NULL);
	return (ptr);
}

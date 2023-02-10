/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:58:30 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 16:54:49 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *left_str, char *buff)
{
	int		i;
	int		j;
	char	*str;

	if (!left_str)
	{
		left_str = malloc(1);
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(ft_strlen(left_str) + ft_strlen(buff) + 1);
	if (!str)
		return (0);
	i = -1;
	j = 0;
	while (left_str[++i] != '\0')
		str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

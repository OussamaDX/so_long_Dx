/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:14:20 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 17:17:50 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

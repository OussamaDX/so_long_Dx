/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:02:49 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 17:05:42 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	len;
	size_t	i;

	s = NULL;
	len = ft_strlen(s1) + 1;
	i = 0;
	s = (char *)malloc (len * sizeof(char ));
	if (!s || !s1)
		return (NULL);
	ft_memcpy (s, s1, len);
	return (s);
}

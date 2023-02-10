/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:09:58 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 17:18:26 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*src_char;
	char			*dest_char;

	i = 0;
	src_char = (char *)src;
	dest_char = (char *)dst;
	if (dest_char == src_char)
		return (dest_char);
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dst);
}

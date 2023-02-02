/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:07:34 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/02 17:18:17 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int x, size_t n)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = b;
	while (n > i)
	{
		p[i] = (unsigned char)x;
		i++;
	}
	return (p);
}

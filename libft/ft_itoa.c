/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:23:27 by ooussaad          #+#    #+#             */
/*   Updated: 2023/02/10 15:55:55 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_n(int n)
{
	int	k;

	k = 0;
	if (n < 0)
	{
		n *= -1;
		k++;
	}
	while (n > 0)
	{
		k++;
		n = n / 10;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		len;

	len = len_of_n(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (n < 0)
		dst[0] = '-';
	len--;
	if (n < 0)
		n *= -1;
	while (n > 0 && len >= 0)
	{
		dst[len] = (n % 10) + '0';
		n = n / 10;
		len --;
	}
	return (dst);
}

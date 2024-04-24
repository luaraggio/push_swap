/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:56:13 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/25 17:32:18 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_counter(long nbr, int base)
{
	int	counter;

	counter = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		counter++;
	}
	else if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / base;
		counter++;
	}
	return (counter);
}

static int	ft_is_negative(long *n)
{
	if (*n < 0)
	{
		*n = -*n;
		return (1);
	}
	return (0);
}

char	*ft_itoa_base(int n, int base, char *s)
{
	char	*dest;
	long	nn;
	int		i;
	int		sign;

	nn = n;
	i = ft_counter(nn, base);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	sign = ft_is_negative(&nn);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = s[(nn % base)];
		nn /= base;
	}
	if (sign == 1)
		dest[0] = '-';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:28:13 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:28:14 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static	size_t	ft_counter(long nbr)
{
	size_t	counter;

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
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	long int	nn;
	char		*dest;
	size_t		counter;
	size_t		i;

	i = 0;
	nn = n;
	counter = ft_counter(nn);
	if (nn < 0)
	{
		i = 1;
		nn *= -1;
	}
	dest = (char *)malloc(sizeof(char) * (counter + 1));
	if (!dest)
		return (NULL);
	dest[counter] = '\0';
	while (counter--)
	{
		dest[counter] = (nn % 10) + '0';
		nn = nn / 10;
	}
	if (i == 1)
		dest[0] = '-';
	return (dest);
}

/*int	main(void)
{
	long	n = -2147483648;
	char	*result;

	result = ft_itoa(n);
	printf("%s", result);
}*/

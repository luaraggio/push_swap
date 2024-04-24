/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:30:46 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:30:48 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destt;
	char	*srcc;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	destt = (char *) dest;
	srcc = (char *) src;
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (destt);
}

/*int	main(void)
{
	char	srcc[] = "ABCD1";
	char	destt[20];
	int	n;
	printf("Digite a quantidade de bytes que deseja copiar: \n");
	scanf("%d", &n);
	ft_memcpy(&srcc, &destt, n);
	printf("%s\n", destt);
}*/

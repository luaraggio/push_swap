/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:37:03 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:37:05 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*a;

	a = (char *)s;
	while (n > 0)
	{
		a[n - 1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	a[] = "String de substituicao";
	char	c;
	int	n;

	printf("Digite um caractere: \n");
	scanf("%c", &c);
	printf("Digite o numero de vezes que queira substituir: \n");
	scanf("%d", &n);
	ft_memset(a, c, n);
	printf("%s", a);
}*/

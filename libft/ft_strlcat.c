/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:39:03 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:39:04 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = 0;
	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	else if (size <= j)
		return (size + i);
	total = i + j;
	i = 0;
	while (src[i] != '\0' && j < (size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (total);
}

/*int	main(void)
{
	char	dst[40]
	char	src[]
	int	i
}*/

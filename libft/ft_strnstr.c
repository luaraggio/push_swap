/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:39:55 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 19:01:51 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if ((!big || !little) && !len)
		return (NULL);
	if (!(*little))
		return ((char *) big);
	while ((big[i] != '\0') && (i < len))
	{
		if (little[j] == big[i])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i - j]);
		}
		else
		{
			i = (i - j) + 1;
			j = 0;
		}
	}
	return (NULL);
}

/*int	main(void)
{
	const char	b[] = "Luaaaaarra oi";
	const char	l[] = "ara";
	size_t	len = 10;
	char	*re;
	
	re = ft_strnstr(b, l, len);
	printf("%s", re);
}*/

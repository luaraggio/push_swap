/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:38:46 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:38:47 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		len;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		nstr = (char *)malloc((len + 1) * (sizeof(char)));
		if (!nstr)
			return (NULL);
		while (*s1 != '\0')
			*(nstr)++ = *(s1)++;
		while (*s2 != '\0')
			*(nstr)++ = *(s2)++;
		*nstr = '\0';
		nstr -= len;
		return (nstr);
	}
	return (NULL);
}

/*int	main(void)
{
	char const	*s1 = "Socorro, ";
	char const	*s2 = "Luara";
	char	*nstr;

	nstr = ft_strjoin(s1, s2);
	printf("%s", nstr);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:40:03 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 18:14:16 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char				*ss;
	unsigned char		cc;
	int					i;

	i = 0;
	cc = (unsigned char) c;
	ss = (char *) s;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ss[i] == cc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	s[] = "caac";
	char	*so;
	so = ft_strrchr(s, 'c');
	printf("%s", so);
}*/

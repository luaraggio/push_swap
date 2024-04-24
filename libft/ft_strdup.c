/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:38:21 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:38:22 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*(dest)++ = *(src)++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*ss;

	ss = (char *) s;
	dup = malloc((ft_strlen(ss) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, ss);
	return (dup);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:37:58 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:37:59 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_counter(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			counter++;
		while (*s != c && *s)
			s++;
	}
	return (counter);
}

static void	ft_le(char const *s, char c, char **a)
{
	size_t	le;
	size_t	i;

	i = 0;
	if (s)
	{
		le = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				le++;
				s++;
			}
			a[i] = ft_substr(s - le, 0, le);
			i++;
			le = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_counter(s, c);
	a = (char **)malloc((l + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	ft_le(s, c, a);
	a[l] = 0;
	return (a);
}

/*int	main(void)
{
	char	*s = "split  ||this|for|me|||||!|";
	char	c = '|';
	char	**result;
	
	result = ft_split(s, c);
	int	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free (result[i]);
		i++;
	}
	free (result);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:21:25 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/25 17:33:24 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_lowerx(unsigned int n)
{
	int		i;
	char	*x;

	x = ft_utoa_base(n, 16, "0123456789abcdef");
	i = ft_print_string(x);
	free(x);
	return (i);
}

int	ft_print_upperx(unsigned int n)
{
	int		i;
	char	*x;

	x = ft_utoa_base(n, 16, "0123456789ABCDEF");
	i = ft_print_string(x);
	free(x);
	return (i);
}

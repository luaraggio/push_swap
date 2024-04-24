/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:21:50 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:21:52 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	unsigned char	c;
	printf("Digite um digito ou uma letra: \n");
	scanf("%c", &c);
	printf("%d", ft_isalnum(c));
}*/

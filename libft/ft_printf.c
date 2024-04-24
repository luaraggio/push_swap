/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:19:00 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/25 17:34:16 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	convert_format(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (c == 's')
		len += ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		len += ft_print_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_print_decimal(va_arg(args, int));
	else if (c == 'u')
		len += ft_print_un(va_arg(args, unsigned long));
	else if (c == 'x')
		len += ft_print_lowerx(va_arg(args, unsigned int));
	else if (c == 'X')
		len += ft_print_upperx(va_arg(args, unsigned int));
	else if (c == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += convert_format(args, s[i + 1]);
			i++;
		}
		else
		{
			len += write(1, &s[i], 1);
		}
		i++;
	}
	va_end(args);
	return (len);
}

/*int main()
{	
	//int i;
	//int a;

	ft_printf("isso é um  %d ", 1);


}*/

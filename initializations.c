/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:50:21 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/24 17:45:58 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_node	*create_list(int args, char c)
{
	t_node	*stack;

	stack = malloc(sizeof(t_node));
	if (!stack)
		return (NULL);
	stack->args = args;
	stack->top = -1;
	stack->stack = calloc(sizeof(int), (args));
	stack->c = c;
	return (stack);
}

void	init_stack(t_node *stack, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = stack->args - 1;
	while (i >= 0)
	{
		stack->stack[i] = ft_atoi(argv[j]);
		stack->top++;
		j++;
		i--;
	}
}

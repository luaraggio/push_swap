/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:50:33 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/24 16:50:34 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	short_sort(t_node *stack)
{
	if (!is_sorted(stack))
	{
		if ((stack->stack[0] > stack->stack[1])
			&& (stack->stack[0] > stack->stack[2]))
			swap(stack);
		else if ((stack->stack[0] < stack->stack[1])
			&& (stack->stack[0] < stack->stack[2])
			&& (stack->stack[2] > stack->stack[1]))
		{
			rotate(stack);
			swap(stack);
		}
		else if ((stack->stack[0] < stack->stack[1])
			&& (stack->stack[0] < stack->stack[2]))
			reverse_rotate(stack);
		else if ((stack->stack[0] > stack->stack[1])
			&& (stack->stack[0] < stack->stack[2]))
			rotate(stack);
		else
		{
			swap(stack);
			rotate(stack);
		}
	}
}

void	small_sort(t_node *stack_a, t_node *stack_b)
{
	int	smaller;

	while (stack_a->top > 2)
	{
		smaller = find_smaller(stack_a);
		if (stack_a->stack[stack_a->top - 1] == smaller)
			swap(stack_a);
		else if (stack_a->stack[stack_a->top - 2] == smaller)
		{
			rotate(stack_a);
			rotate(stack_a);
		}
		else if (stack_a->stack[1] == smaller)
		{
			reverse_rotate(stack_a);
			reverse_rotate(stack_a);
		}
		else if (stack_a->stack[0] == smaller)
			reverse_rotate(stack_a);
		push(stack_a, stack_b);
	}
	short_sort(stack_a);
	push(stack_b, stack_a);
	if (stack_a->args == 5)
		push(stack_b, stack_a);
}

void	simple_sort(t_node *stack_a, t_node *stack_b)
{
	if (stack_a->args == 3)
		short_sort(stack_a);
	else if (stack_a->args <= 5)
		small_sort(stack_a, stack_b);
}

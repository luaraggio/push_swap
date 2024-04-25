/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:49:49 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/24 18:52:23 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	send_back_to_a(t_node *stack_a, t_node *stack_b)
{
	int	moves;
	int	i;
	int	pos_b;

	i = stack_b->top + 1;
	pos_b = stack_b->top;
	moves = stack_a->args * 2;
	while (--i >= 0)
	{
		if (i >= stack_b->top / 2
			&& get_moves(stack_a, stack_b->stack[i]) + stack_b->top - i < moves)
		{
			pos_b = i;
			moves = get_moves(stack_a, stack_b->stack[i]) + stack_b->top - i;
		}
		else if (i < stack_b->top / 2
			&& (get_moves(stack_a, stack_b->stack[i]) + (i + 1)) < moves)
		{
			pos_b = i;
			moves = get_moves(stack_a, stack_b->stack[i]) + (i + 1);
		}
	}
	i = find_position(stack_a, moves, stack_b->stack[pos_b]);
	movements(stack_a, stack_b, i, pos_b);
}

void	movements(t_node *stack_a, t_node *stack_b, int index_a, int index_b)
{
	int	next_top;

	next_top = stack_b->top - 1;
	while (stack_b->top != next_top)
	{
		if (index_a >= stack_a->top / 2 && index_b >= stack_b->top / 2)
			moves_1(stack_a, stack_b, index_a, index_b);
		else if (index_a < stack_a->top / 2 && index_b < stack_b->top / 2)
			moves_2(stack_a, stack_b, index_a, index_b);
		else if (index_a >= stack_a->top / 2 && index_b < stack_b->top / 2)
			moves_3(stack_a, stack_b, index_a, index_b);
		else if (index_a < stack_a->top / 2 && index_b >= stack_b->top / 2)
			moves_4(stack_a, stack_b, index_a, index_b);
	}
}

void	complex_sort(t_node *stack_a, t_node *stack_b)
{
	int	smaller;
	int	higher;

	smaller = find_smaller(stack_a);
	higher = find_higher(stack_a);
	while (!is_sorted(stack_a))
	{
		if ((stack_a->stack[stack_a->top] < stack_a->stack[stack_a->top - 1]
				&& stack_a->stack[stack_a->top] > stack_a->stack[0])
			|| stack_a->stack[stack_a->top] == smaller
			|| stack_a->stack[stack_a->top] == higher)
			rotate(stack_a);
		else
			push(stack_a, stack_b);
	}
	while (stack_b->top >= 0)
	{
		send_back_to_a(stack_a, stack_b);
	}
	while (!is_sorted(stack_a))
		moves_5(stack_a);
}

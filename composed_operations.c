/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   composed_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:49:54 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/24 16:49:56 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	double_swap(t_node *stack_a, t_node *stack_b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = stack_a->stack[stack_a->top];
	stack_a->stack[stack_a->top] = stack_a->stack[stack_a->top - 1];
	stack_a->stack[stack_a->top - 1] = tmp_a;
	tmp_b = stack_b->stack[stack_b->top];
	stack_b->stack[stack_b->top] = stack_b->stack[stack_b->top - 1];
	stack_b->stack[stack_b->top - 1] = tmp_b;
	ft_printf("ss\n");
}

void	double_rotate(t_node *stack_a, t_node *stack_b)
{
	int	tmp_a;
	int	tmp_b;
	int	tmp_top_a;
	int	tmp_top_b;

	tmp_a = stack_a->stack[stack_a->top];
	tmp_top_a = stack_a->top;
	while (tmp_top_a > 0)
	{
		stack_a->stack[tmp_top_a] = stack_a->stack[tmp_top_a - 1];
		tmp_top_a--;
	}
	stack_a->stack[tmp_top_a] = tmp_a;
	tmp_b = stack_b->stack[stack_b->top];
	tmp_top_b = stack_b->top;
	while (tmp_top_b > 0)
	{
		stack_b->stack[tmp_top_b] = stack_b->stack[tmp_top_b - 1];
		tmp_top_b--;
	}
	stack_b->stack[tmp_top_b] = tmp_b;
	ft_printf("rr\n");
}

void	double_reverse_rotate(t_node *stack_a, t_node *stack_b)
{
	int	i;
	int	j;
	int	tmp_a;
	int	tmp_b;

	i = 0;
	tmp_a = stack_a->stack[i];
	while (i < stack_a->top)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->stack[i] = tmp_a;
	j = 0;
	tmp_b = stack_b->stack[j];
	while (j < stack_b->top)
	{
		stack_b->stack[j] = stack_b->stack[j + 1];
		j++;
	}
	stack_b->stack[j] = tmp_b;
	ft_printf("rrr\n");
}

#include "include/push_swap.h"

void	moves_1(t_node *stack_a, t_node *stack_b, int index_a, int index_b)
{
	int	value_top_a;
	int	value_top_b;

	value_top_a = stack_a->stack[index_a];
	value_top_b = stack_b->stack[index_b];
	while (stack_a->stack[stack_a->top] != value_top_a
		&& stack_b->stack[stack_b->top] != value_top_b)
		double_rotate(stack_a, stack_b);
	while (stack_a->stack[stack_a->top] != value_top_a)
		rotate(stack_a);
	while (stack_b->stack[stack_b->top] != value_top_b)
		rotate(stack_b);
	push(stack_b, stack_a);
}

void	moves_2(t_node *stack_a, t_node *stack_b, int index_a, int index_b)
{
	int	value_top_a;
	int	value_top_b;

	value_top_a = stack_a->stack[index_a];
	value_top_b = stack_b->stack[index_b];
	while (stack_a->stack[stack_a->top] != value_top_a
		&& stack_b->stack[stack_b->top] != value_top_b)
		double_reverse_rotate(stack_a, stack_b);
	while (stack_a->stack[stack_a->top] != value_top_a)
		reverse_rotate(stack_a);
	while (stack_b->stack[stack_b->top] != value_top_b)
		reverse_rotate(stack_b);
	push(stack_b, stack_a);
}

void	moves_3(t_node *stack_a, t_node *stack_b, int index_a, int index_b)
{
	int	value_top_a;
	int	value_top_b;

	value_top_a = stack_a->stack[index_a];
	value_top_b = stack_b->stack[index_b];
	while (stack_a->stack[stack_a->top] != value_top_a)
		rotate(stack_a);
	while (stack_b->stack[stack_b->top] != value_top_b)
		reverse_rotate(stack_b);
	push(stack_b, stack_a);
}

void	moves_4(t_node *stack_a, t_node *stack_b, int index_a, int index_b)
{
	int	value_top_a;
	int	value_top_b;

	value_top_a = stack_a->stack[index_a];
	value_top_b = stack_b->stack[index_b];
	while (stack_a->stack[stack_a->top] != value_top_a)
		reverse_rotate(stack_a);
	while (stack_b->stack[stack_b->top] != value_top_b)
		rotate(stack_b);
	push(stack_b, stack_a);
}

void	moves_5(t_node *stack_a)
{
	int	i;
	int	higher;

	i = 0;
	higher = find_higher(stack_a);
	while (i <= stack_a->top)
	{
		if (stack_a->stack[i] == higher)
			break ;
		i++;
	}
	if (i >= stack_a->top / 2)
		rotate(stack_a);
	else
		reverse_rotate(stack_a);
}

#include "include/push_swap.h"

void	push(t_node *stack_src, t_node *stack_dest)
{
	stack_dest->top++;
	stack_dest->stack[stack_dest->top] = stack_src->stack[stack_src->top];
	stack_src->top--;
	write(1, "p", 1);
	write(1, &stack_dest->c, 1);
	write(1, "\n", 1);
}

void	swap(t_node *stack)
{
	int	tmp;

	tmp = stack->stack[stack->top];
	stack->stack[stack->top] = stack->stack[stack->top - 1];
	stack->stack[stack->top - 1] = tmp;
	write(1, "s", 1);
	write(1, &stack->c, 1);
	write(1, "\n", 1);
}

void	reverse_rotate(t_node *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->stack[i];
	while (i < stack->top)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[i] = tmp;
	write(1, "rr", 2);
	write(1, &stack->c, 1);
	write(1, "\n", 1);
}

void	rotate(t_node *stack)
{
	int	top_tmp;
	int	tmp;

	tmp = stack->stack[stack->top];
	top_tmp = stack->top;
	while (top_tmp > 0)
	{
		stack->stack[top_tmp] = stack->stack[top_tmp - 1];
		top_tmp--;
	}
	stack->stack[top_tmp] = tmp;
	write(1, "r", 1);
	write(1, &stack->c, 1);
	write(1, "\n", 1);
}

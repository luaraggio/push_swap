#include "include/push_swap.h"

int	is_sorted(t_node *stack)
{
	int	i;

	i = stack->top;
	while (i >= 1)
	{
		if (stack->stack[i] < stack->stack[i - 1])
			i--;
		else
			return (0);
	}
	return (1);
}

void	sort(t_node *stack_a, t_node *stack_b)
{
	if (is_sorted(stack_a))
		return ;
	if (stack_a->args == 2)
		swap(stack_a);
	else if (stack_a->args <= 5)
		simple_sort(stack_a, stack_b);
	else
		complex_sort(stack_a, stack_b);
}

int     main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1);
	if (!is_valid(argv))
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = create_list(argc - 1, 'a');
	stack_b = create_list(argc - 1, 'b');
	init_stack(stack_a, argv);
	sort(stack_a, stack_b);
	free(stack_a->stack);
	free(stack_a);
	free(stack_b->stack);
	free(stack_b);
	return (0);
}

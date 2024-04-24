#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct	s_node
{
	int	top;
	int	args;
	int	*stack;
	char	c;
}		t_node;

//Sources:
t_node  *create_list(int args, char c);
void  init_stack(t_node *stack, char **argv);
void    moves_1(t_node *stack_a, t_node *stack_b, int index_a, int index_b);
void    moves_2(t_node *stack_a, t_node *stack_b, int index_a, int index_b);
void    moves_3(t_node *stack_a, t_node *stack_b, int index_a, int index_b);
void    moves_4(t_node *stack_a, t_node *stack_b, int index_a, int index_b);
void    moves_5(t_node *stack_a);
void    sort(t_node *stack_a, t_node *stack_b);
void    send_back_to_a(t_node *stack_a, t_node *stack_b);
void    movements(t_node *stack_a, t_node *stack_b, int index_a, int index_b);
void    complex_sort(t_node *stack_a, t_node *stack_b);
void    double_swap(t_node *stack_a, t_node *stack_b);
void    double_rotate(t_node *stack_a, t_node *stack_b);
void    double_reverse_rotate(t_node *stack_a, t_node *stack_b);
void    short_sort(t_node *stack);
void    small_sort(t_node *stack_a, t_node *stack_b);
void    simple_sort(t_node *stack_a, t_node *stack_b);
void    push(t_node *stack_src, t_node *stack_dest);
void    swap(t_node *stack);
void    reverse_rotate(t_node *stack);
void    rotate(t_node *stack);
int     find_position(t_node *stack_a, int moves, int value);
int     get_moves(t_node *stack_a, int value);
int     find_smaller(t_node *stack);
int     find_higher(t_node *stack);
int     is_sorted(t_node *stack);
int     is_valid(char **argv);

#endif

#include "push_swap.h"

int swap(t_stack **stack)
{
    t_stack *top;
    t_stack *second;
    t_stack *tmp_node;

    if (*stack && (*stack)->next)
    {
        top = *stack;
        second = top->next;
        tmp_node = top;
        top = second;
	    second = tmp_node;
    }
    return (0);
}

int sa(t_stack **stack_a)
{
    swap(stack_a);
    ft_putendl_fd("sa", 1);
    return (0);
}

int sb(t_stack **stack_b)
{
    swap(stack_b);
    ft_putendl_fd("sb", 1);
    return (0);
}

int ss(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_putendl_fd("ss", 1);
    return (0);
}
#include "push_swap.h"

int swap(t_stack **stack)
{
    t_stack *top;
    t_stack *second;
    int tmp_val;
   // int tmp_i;

    //if (ft_lstsize(*stack) < 2)
    //  return (-1);
    if (ft_lstsize_stack(*stack) == 0)
		return (1);
    if (*stack && (*stack)->next)
    {
        top = *stack;
        second = top->next;
        // if (!top && !second)
        tmp_val = top->value;
        // tmp_i = top->index;
        top->value = second->value;
	    //top->index = second->index;
	    second->value = tmp_val;
	    //second->index = tmp_i;
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
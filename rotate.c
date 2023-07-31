#include "push_swap.h"

int rotate(t_stack **stack)
{
    t_stack* current;
    t_stack* last;

    if (*stack && (*stack)->next) 
    {
        last = *stack;
        *stack = last->next;

        current = *stack;
        while (current->next != NULL)
            current = current->next;
        current->next = last;
        last->next = NULL;
    }
    return (0);
}

int ra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_putendl_fd("ra", 1);
    return (0);
}

int rb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_putendl_fd("rb", 1);
    return (0);
}

int rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putendl_fd("rr", 1);
    return (0);
}
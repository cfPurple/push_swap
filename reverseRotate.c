#include "push_swap.h"

int reverseRotate(t_stack **stack)
{
    t_stack *top;
    t_stack *bottom;

    if (*stack && (*stack)->next)
    {
        top = *stack;
        bottom = ft_lstlast_stack(top);
        while (top)
        {
            if (top->next->next == NULL)
            {
                top->next = NULL;
                break;
            }
            top = top->next;
        }
        bottom->next = *stack;
        *stack = bottom;
    }
    return (0);
}

int rra(t_stack **stack_a)
{
    reverseRotate(stack_a);
    ft_putendl_fd("rra", 1);
    return (0);
}

int rrb(t_stack **stack_b)
{
    reverseRotate(stack_b);
    ft_putendl_fd("rrb", 1);
    return (0);
}

int rrr(t_stack **stack_a, t_stack **stack_b)
{
    reverseRotate(stack_a);
    reverseRotate(stack_b);
    ft_putendl_fd("rrr", 1);
    return (0);
}
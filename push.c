#include "push_swap.h"

int push(t_stack **stack1, t_stack **stack2)
{
   if (*stack1 == NULL)
        return (1);
    t_stack* first_node = *stack1;  
    *stack1 = (*stack1)->next;
    first_node->next = *stack2;
    *stack2 = first_node;      
	return (0);

}

int pa(t_stack **stack1, t_stack **stack2)
{
    push(stack2, stack1);
    ft_putendl_fd("pa", 1);
    return (0);
}

int pb(t_stack **stack1, t_stack **stack2)
{
    push(stack1, stack2);
    ft_putendl_fd("pb", 1);
    return (0);
}

#include "push_swap.h"

void    create_stack(t_stack **stack, int ac, char **av)
{
    int i;
    t_stack  *new_node;
    char	**args;	
    t_stack *tmp;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
    if (ac < 2)
        exit (0);
    tmp = *stack;
    *stack = (*stack)->next;
    free(tmp);
    while(args[i])
    {
        new_node = ft_lstnew_stack(ft_atoi(args[i++]));
        ft_lstadd_back_stack(stack, new_node);
    }
    indexing(stack);
    if (ac == 2)
		ft_free(args);
}

void    sort(t_stack **stack_a, t_stack **stack_b)
{
    if (ft_lstsize_stack(*stack_a) < 4)
        tiny_sort(stack_a);
    else if (ft_lstsize_stack(*stack_a) < 6)
        small_sort(stack_a,stack_b);
    else
        radix_sort(stack_a, stack_b);
}

int is_sorted(t_stack **stack)
{
    t_stack *current;

    current = *stack;
    while (current && current->next)
    {
        if (current->value > current->next->value)
            return (0);
        current = current->next;
    }
    return (1);
}

void    free_stack(t_stack **stack)
{
    t_stack *current;
    t_stack *next;

    current = *stack;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *stack = NULL;
}

int get_max_bits(t_stack **stack)
{
    t_stack* head = *stack;
    int max = head->index;
    int max_bits = 0;

    while (head)
    {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

#include "push_swap.h"

int	find_highest(t_stack **stack)
{
	int		max;

	t_stack *current;

	current = *stack;
	max = current->value;
	while (current)
	{
		if (current->value > max)
			max = current->value;
		current = current->next;
	}
	return (max);
}

int	find_lowest(t_stack **stack)
{
	int		low;

	t_stack *current;

	current = *stack;
	low = current->value;
	while (current)
	{
		if (current->value < low)
			low = current->value;
		current = current->next;
	}
	return (low);
}
// for 3 numbers
void tiny_sort(t_stack **stack_a)
{
    int highest_num;

    highest_num = find_highest(stack_a);
    if ((*stack_a)->value == highest_num)
        ra(stack_a);
    else if ((*stack_a)->next->value == highest_num)
        rra(stack_a);
    if ((*stack_a)->value > (*stack_a)->next->value)
        sa(stack_a);
}
//for 5 numbers
void small_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *last;
	last = ft_lstlast_stack(*stack_a);
	while(ft_lstsize_stack(*stack_a) > 3)
	{
		if ((*stack_a)->value == find_lowest(stack_a))
			pb(stack_a, stack_b);
		else if (last->value == find_lowest(stack_a))
			rra(stack_a);
		else
			ra(stack_a);
	}
	tiny_sort(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
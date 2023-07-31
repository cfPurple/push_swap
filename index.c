#include "push_swap.h"

void	indexing(t_stack **stack)
{
	t_stack	*current;
	int		i;

	i = 0;
	current = get_next_num(stack);
	while (current)
	{
		current->index = i++;
		current = get_next_num(stack);
	}
}

static t_stack *get_next_num(t_stack **stack)
{
	t_stack	*current;
	t_stack	*min;
	int		minfound;

	min = NULL;
	minfound = 0;
	current = *stack;
	while (current)
	{
		if ((current->index == 0) && (!minfound || current->value < min->value))
		{
		    min = current;
	        minfound = 1;
		}
		current = current->next;
	}
	return (min);
}

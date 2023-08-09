#include "push_swap.h"

/*
void print_list(t_stack *list)
{
    t_stack *current;
    current = list;
    while(current)
    {
        printf("V=%d ", current->value);
        printf("I=%d / ", current->index);
        current = current->next;
    }
    printf("\n");
}
*/

int main(int ac, char **av)
{
    t_stack  *stack_a;
    t_stack  *stack_b;
    t_stack  *tmp;

    check_arg(ac, av);
    stack_a = (t_stack *)malloc(sizeof(t_stack));
    if (stack_a == NULL)
        return (1);
    stack_b = (t_stack *)malloc(sizeof(t_stack));
      if (stack_b == NULL)
        return (1);
    create_stack(&stack_a, ac, av);
    tmp = stack_b;
    stack_b = stack_b->next;
    free (tmp);
    if (!is_sorted(&stack_a))
        sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);

    return (0);
}
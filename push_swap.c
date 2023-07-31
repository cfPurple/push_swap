#include "push_swap.h"
void print_list(t_stack *list)
{
    t_stack *current;
    current = list;
    while(current)
    {
        printf("V=%d ", current->value);
        printf("I=%d /", current->index);
        current = current->next;
    }
    printf("\n");
}
int main(int ac, char **av)
{
    t_stack  *stack_a;
    t_stack  *stack_b;

    check_arg(ac, av);
    stack_a = (t_stack *)malloc(sizeof(t_stack));
    stack_a = NULL;
    stack_b = (t_stack *)malloc(sizeof(t_stack));
    stack_b = NULL;
    create_stack(&stack_a, ac, av);
    if (!is_sorted(&stack_a))
        sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
    return (0);
}
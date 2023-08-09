#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}				t_stack;

int main(int ac, char **av);
void	create_stack(t_stack **stack, int ac, char **av);
void	sort(t_stack **stack_a, t_stack **stack_b);
void radix_sort(t_stack** stack_a, t_stack** stack_b) ;
void tiny_sort(t_stack **stack_a);
int is_sorted(t_stack **stack);
void	free_stack(t_stack **stack);
int get_max_bits(t_stack** stack);
int num_valid(char *num, char **av, int i);
void	check_arg(int ac, char **av);
int push(t_stack **stack1, t_stack **stack2);
int pa(t_stack **stack1, t_stack **stack2);
int pb(t_stack **stack1, t_stack **stack2);
int swap(t_stack **stack);
int sa(t_stack **stack_a);
int sb(t_stack **stack_b);
int ss(t_stack **stack_a, t_stack **stack_b);
int rotate(t_stack **stack);
int ra(t_stack **stack_a);
int rb(t_stack **stack_b);
int rr(t_stack **stack_a, t_stack **stack_b);
int reverseRotate(t_stack **stack);
int rra(t_stack **stack_a);
int rrb(t_stack **stack_b);
int rrr(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_lstlast_stack(t_stack *lst);
t_stack	*ft_lstnew_stack(int content);
void	ft_lstadd_back_stack(t_stack **lst, t_stack *new);
int	ft_lstsize_stack(t_stack *lst);
int	find_highest(t_stack **stack);
void	ft_free(char **str);
void	indexing(t_stack **stack);
static	t_stack	*get_next_num(t_stack **stack);
void	small_sort(t_stack **stack_a, t_stack **stack_b);
int	find_lowest(t_stack **stack);


void	print_list(t_stack *list);


#endif
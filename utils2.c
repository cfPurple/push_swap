#include "push_swap.h"

t_stack	*ft_lstlast_stack(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_lstnew_stack(int content)
{
	t_stack	*tab;

	tab = malloc(sizeof(t_stack));
	if (tab == NULL)
		return (NULL);
	tab->value = content;
	tab->next = NULL;
	return (tab);
}

void	ft_lstadd_back_stack(t_stack **lst, t_stack *new)
{
	t_stack	*list;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = ft_lstlast_stack(*lst);
	list->next = new;
}

int	ft_lstsize_stack(t_stack *lst)
{
	int		i;
	t_stack	*list;

	i = 0;
	list = lst;
	while (str)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
}
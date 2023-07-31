#include "push_swap.h"

int num_valid(char *num, char **av, int i)
{
    int j;
    int t;
    long long  number;

    j = 0;
    t = 0;
    number = ft_atoi(num);
    if (num[j] == '-')
        j++;
    while(num[j])
    {
        if (!ft_isdigit(num[j]))
            return (0);
        j++;
    }
    if (number < -2147483648 || number > 2147483647)
        return (0);
    i++;
    while (av[i])
    {
        if (ft_atoi(av[i]) == number )
            return (0);
        i++;
    }
    return (1);
}


void    check_arg(int ac, char **av)
{
    int i;
    char	**args;	

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
    while(args[i])
    {
        if(!num_valid(args[i], args, i))
        {
            ft_putendl_fd("Error", 1);
            exit (0);
        }
        i++;
    }
    if (ac == 2)
		ft_free(args);
}
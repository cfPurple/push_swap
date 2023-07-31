/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:10:47 by cfelix            #+#    #+#             */
/*   Updated: 2022/12/06 17:13:09 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*skip_white_space(char *str)
{
	while ((*str == ' ' || *str == '\n' || *str == '\t')
		|| (*str == '\v' || *str == '\r' || *str == '\f'))
		str++;
	return (str);
}

static long long	lil_atoi(char *str)
{
	long long	somme;

	somme = 0;
	while (*str >= '0' && *str <= '9')
	{
		somme = ((somme * 10) + (*str - '0'));
		str++;
	}
	return (somme);
}

long long	ft_atoi(const char *str)
{
	long long	signe;

	signe = 1;
	str = skip_white_space((char *)str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	return (signe * lil_atoi((char *)str));
}

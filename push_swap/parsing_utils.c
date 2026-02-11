/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:00:25 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/11 13:21:12 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int check_empty(char *str)
{
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (0);
	return (1);
}
int check_digits(char *str)
{
	int i;

	i = 0;
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i + 1] == '\0')
			return (0);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
long ft_atoi(char *str)
{
    int i;
    long nbr;
    long signal;

    i = 0;
    nbr = 0;
    signal = 1;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            signal *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        if (nbr > (LONG_MAX - (str[i] - 48)) / 10)
        {
            write(2, "Error\n", 6);
            exit(1);
        }
        nbr = nbr * 10 + (str[i] - 48);
        i++;
    }
    return (signal * nbr);
}

int ft_range(long nbr)
{
	if (nbr > INT_MAX)
		return (0);
	if (nbr < INT_MIN)
		return (0);
	return (1);
}
int check_dup(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}


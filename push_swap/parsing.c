/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:35:06 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/17 13:11:19 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_pushback(t_stack **stack_a, int value)
{
    t_stack *node;

    node = new_node(value);
    if (!node)
        return (0);
    push_back(stack_a, node);
    return (1);
}
t_stack *parsing(char **argv, int argc)
{
	char *str;
	char **split;
	int i;
	t_stack *stack_a;
	int nbr;

	str = ft_strjoin(argv, argc);
	split = ft_split(str, ' ');
	free(str);
	stack_a = NULL;
	i = 0;
	while (split[i])
	{
		if (!check_empty(split[i]) || !check_digits(split[i]))
			return (free_array(split), free_stack(&stack_a), NULL);
		nbr = ft_atoi(split[i]);
		if (!ft_range(nbr) || !check_dup(stack_a, nbr))
			return (free_array(split), free_stack(&stack_a), NULL);
		if (!stack_pushback(&stack_a, nbr))
            return (free_array(split), free_stack(&stack_a), NULL);
		i++;
	}
	free_array(split);
	return (stack_a);
}

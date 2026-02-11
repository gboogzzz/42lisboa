/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:35:06 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/11 17:33:12 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack **parsing(char **argv, int argc)
{
	char *str;
	char **split;
	int i;
	t_stack *stack_a;
	int nbr;

	str = ft_strjoin(argv, argc);
	split = ft_split(str, " ");
	free(str);
	stack_a = NULL;
	i = 0;
	while (split[i])
	{
		if (!check_empty(split[i]) || !check_digits(split[i]))
			return (free_array(split), NULL);
		nbr = ft_atoi(split[i]);
		if (!ft_range(split[i]) || !check_dup(split[i]))
			return (free_array(split), NULL);
		push_back(nbr, stack_a);
		i++;
	}
	free(split);
	return (stack_a);
}

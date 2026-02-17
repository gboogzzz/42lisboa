/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:40:55 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/17 17:20:13 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_size(t_stack **stack)
{
	int size;
	t_stack *current;

	size = 0;
	if (!stack || !*stack)
		return (0);
	current = *stack;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
int is_sorted(t_stack **stack)
{
	t_stack *current;
	int size;
	
	size = stack_size(stack);
	if (!stack || !*stack)
		return (1);
	if (size == 1)
		return (1);
	current = *stack;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
t_stack *get_min(t_stack **stack)
{
	t_stack *current;
	t_stack *min;
	
	if (!stack || !*stack)
		return (NULL);
	current = *stack;
	min = *stack;
	while (current != NULL)
	{
		if (min->value > current->value)
			min = current;
		current = current->next;
	}
	return (min);
}

t_stack *get_max(t_stack **stack)
{
	t_stack *current;
	t_stack *max;
	
	if (!stack || !*stack)
		return (NULL);
	current = *stack;
	max = *stack;
	while (current != NULL)
	{
		if (max->value < current->value)
			max = current;
		current = current->next;
	}
	return (max);
}
int get_index_of_value(t_stack **stack, int value)
{
	int index;
	t_stack *current;
	
	index = 0;
	current = *stack;
	while (current != NULL)
	{
		if (current->value == value)
			return (index);
		index++;
		current = current->next;
	}
	return (-1);
}

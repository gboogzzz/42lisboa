/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:33:57 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/18 14:46:07 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_front(t_stack **stack, t_stack *node)
{
	if (!stack || !node)
		return;
	node->next = *stack;
	*stack = node;
}

t_stack *pop_front(t_stack **stack)
{
	t_stack *current;
	
	if (!stack || !*stack)
		return (NULL);
	current = *stack;
	*stack = current->next;
	return (current);
}

t_stack *last_node(t_stack **stack)
{
	t_stack *current;
	
	if (!stack || !*stack)
		return (NULL);
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

t_stack *before_lastnode(t_stack **stack)
{
	t_stack *current;
	int size;
	
	size = stack_size(stack);
	if (size < 2)
		return (NULL);
	current = *stack;
	while (current->next->next != NULL)
		current = current->next;
	return (current);
}
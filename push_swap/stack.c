/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:41:03 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/11 16:26:51 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_node(int value)
{
	t_stack *node;
	
	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}
void push_back(t_stack **stack, t_stack *node)
{
	t_stack *current;
	if (!stack || !node)
		return;
	if (!*stack)
	{
		*stack = node;
		return;
	}
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = node;
}
void free_stack(t_stack **stack)
{
	t_stack *current;
	t_stack *temp;
	
	if (!stack || !*stack)
		return;
	current = *stack;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*stack = NULL;
}

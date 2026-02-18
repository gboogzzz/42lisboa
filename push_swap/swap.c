/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:34:08 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/18 13:42:38 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stack **stack_a)
{
	int size;
	t_stack *first;
	t_stack *second;
	
	size = stack_size(stack_a);
	if (size < 2)
		return;
	first = pop_front(stack_a);
	second = pop_front(stack_a);	
	push_front(stack_a, first);
	push_front(stack_a, second);
	write(1, "sa\n", 3);
}

void swap_b(t_stack **stack_b)
{
	int size;
	t_stack *first;
	t_stack *second;
	
	size = stack_size(stack_b);
	if (size < 2)
		return;
	first = pop_front(stack_b);
	second = pop_front(stack_b);	
	push_front(stack_b, first);
	push_front(stack_b, second);
	write(1, "sb\n", 3);
}

void swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	write(1, "ss\n", 3);
}
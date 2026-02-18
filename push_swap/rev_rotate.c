/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:38:11 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/18 15:53:47 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rev_rotate_a(t_stack **stack_a)
{
	t_stack *last;
	t_stack *before_last;

	if(!stack_a || !*stack_a)
		return;
	last = last_node(stack_a);
	before_last = before_lastnode(stack_a);
	before_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write(1, "rra\n", 4);
}

void rev_rotate_b(t_stack **stack_b)
{
	t_stack *last;
	t_stack *before_last;

	if(!stack_b || !*stack_b)
		return;
	last = last_node(stack_b);
	before_last = before_lastnode(stack_b);
	before_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	write(1, "rra\n", 4);
}

void rev_rotate_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate_a(stack_a);
	rev_rotate_b(stack_b);
	write(1, "rrr\n", 4);
}
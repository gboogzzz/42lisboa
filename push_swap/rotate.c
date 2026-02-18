/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:43:52 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/18 15:04:45 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_a(t_stack **stack_a)
{
	t_stack *current;
	int size;
	
	size = stack_size(stack_a);
	if (size < 2)
		return;
	current = pop_front(stack_a);
	push_back(stack_a, current);
	write(1, "rr\n", 3);
}
void rotate_b(t_stack **stack_b)
{
	t_stack *current;
	int size;
	
	size = stack_size(stack_b);
	if (size < 2)
		return;
	current = pop_front(stack_b);
	push_back(stack_b, current);
	write(1, "rr\n", 3);
}

void rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	write(1, "rr\n", 3);
}
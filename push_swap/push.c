/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:27:27 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/18 13:42:13 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *first_b;
	
	if (!stack_b || !*stack_b)
		return;
	first_b = pop_front(stack_b);
	push_front(stack_a, first_b);
	write(1, "pa\n", 3);
}

void push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *first_a;
	
	if (!stack_a || !*stack_a)
		return;
	first_a = pop_front(stack_a);
	push_front(stack_b, first_a);
	write(1, "pb\n", 3);
}

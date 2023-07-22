/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:41:36 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/22 01:14:36 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;
	t_stack	*before_tail;

	tail = get_stack_bottom(*stack);
	before_tail = get_stack_before_bottom(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->next = tmp;
	before_tail->next = NULL;
}

void	do_rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
}

void	do_rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
}

void	do_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
}

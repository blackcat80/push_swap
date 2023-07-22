/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:43:58 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/22 01:14:45 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h" 

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	do_pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
}

void	do_pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}

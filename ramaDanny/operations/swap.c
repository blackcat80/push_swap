/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:17:00 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/04 17:17:00 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap.h"

/*
	**Función que intercambia el primer y segundo elemento de la pila.
*/
void	ft_swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;
	t_node	*last;

	first = stack->top;
	if (!first)
		return ;
	second = first->next;
	third = second->next;
	last = first->prev;
	if (first == second)
		return ;
	if (third != first)
	{
		ft_connect(last, second);
		ft_connect(second, first);
		ft_connect(first, third);
	}
	stack->top = second;
}
/*
	**Función general que permite intercambiar el primer y segundo elemento de
	**una pila.
*/
void	ft_swap(t_stack *stack, char *option)
{
	ft_swap(stack);
	ft_printf("%s", option);
}
/*
	**Función que intercambia el primer y segundo elemento de las pilas stack_a
	**y stack_b.
*/
void	ft_double_swap(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("%s", SWAP);
}
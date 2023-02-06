/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:45:32 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/04 16:45:32 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap.h"

/*
	**Función que mueve el top de la pila stack al final de la misma.
*/
void	ft_rev_rotate(t_stack *stack)
{
	stack->top = stack->top->prev;
}
/*
	**Función general que permite mover el top de una pila al final de la misma.
*/
void	ft_rev_rotate(t_stack *stack, char *option)
{
	ft_rev_rotate(stack);
	ft_putstr_fd(option, 1);
}
/*
	**Función que mueve el top de las pilas stack_a y stack_b al final de ambas.
*/
void	ft_double_rev_rotate(t_stack *stack_a, t_stack *stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	ft_printf("%s", REV_ROTATE);
}
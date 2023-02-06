/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:56:53 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/04 16:56:53 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap.h"

/*
	**Función que rota la pila hacia arriba (el primer elemento pasa a ser el
	**último).
*/
void	ft_rotate(t_stack *stack)
{
	stack->top = stack->top->next;
}

/*
	**Función general que permite mover el top de una pila al final de la misma.
*/
void ft_rotate(t_stack *stack, char *option)
{
	ft_rotate(stack);
	ft_printf("%s", option);
}

/*
	**Función que rota las pilas stack_a y stack_b hacia arriba (el primer
	**elemento pasa a ser el último).
*/
void	ft_double_rotate(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("%s", ROTATE);
}
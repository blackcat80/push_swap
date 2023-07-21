/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:42:31 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/20 03:57:33 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

/* free_stack:
	Libera cada elemento en una pila determinada y establece 
	el puntero de la pila en NULL.
*/
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

/* exit_error:
	Escribe "Error\n" en la salida estándar después de liberar las pilas a y b.
	Sale con el código de error estándar 1.
*/
void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}

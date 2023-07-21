/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:21:51 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/19 18:21:51 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

/*  is_sorted:
   Comprueba si una pila de elementos está ordenada en forma ascendente.
   Devuelve: 1 si la pila está ordenada, 0 si no lo está.
*/

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

/*  ft_strcmp:
   Compara las strings
   Devuelve: 0 si coinciden, 1 si no.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*  print_checker_res:
   Verifica si el stack_a esta ordenado, y el stack_b vacío.
*/

void	print_checker_res(t_stack *stack_a, t_stack *stack_b)
{
	if (is_sorted(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
	{
		write(1, "KO\n", 3);
	}
}

/* ft_putstr:
	Imprime una cadena dada de caracteres en la salida estándar.
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

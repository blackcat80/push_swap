/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:33:28 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/21 01:46:14 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

/*  función comentada, solo por si se quiere consultar
    los valores actuales del stack_a y poner puntos de control.

void	print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		printf("%d ", stack->value);
		stack = stack->next;
	}
	printf("\n");
}*/

/* Función execute_commands:
   Ejecuta diferentes operaciones en las pilas stack_a y stack_b, dependiendo
   del comando proporcionado.Si el comando no coincide con ninguna operación 
   conocida, muestra "Error\n" en la salida estándar.
   Argumentos:
     - command: Puntero a una cadena que representa el comando a ejecutar.
     - stack_a: Puntero al puntero que apunta a la pila A.
     - stack_b: Puntero al puntero que apunta a la pila B.
*/

void	execute_commands(char *command, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(command, "sa\n"))
		do_sa(stack_a);
	else if (!ft_strcmp(command, "sb\n"))
		do_sb(stack_b);
	else if (!ft_strcmp(command, "pa\n"))
		do_pa(stack_a, stack_b);
	else if (!ft_strcmp(command, "pb\n"))
		do_pb(stack_a, stack_b);
	else if (!ft_strcmp(command, "ra\n"))
		do_ra(stack_a);
	else if (!ft_strcmp(command, "rb\n"))
		do_rb(stack_b);
	else if (!ft_strcmp(command, "rra\n"))
		do_rra(stack_a);
	else if (!ft_strcmp(command, "rrb\n"))
		do_rrb(stack_b);
	else if (!ft_strcmp(command, "rrr\n"))
		do_rrr(stack_a, stack_b);
	else if (!ft_strcmp(command, "rr\n"))
		do_rr(stack_a, stack_b);
	else if (!ft_strcmp(command, "ss\n"))
		do_ss(stack_a, stack_b);
	else
		ft_putstr("Error\n");
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2 || !is_correct_input(av, ac))
		exit_error(NULL, NULL);
	stack_a = fill_stack_values(ac, av);
	assign_index(stack_a, get_stack_size(stack_a) + 1);
	line = get_next_line(0);
	while (line != NULL)
	{
		execute_commands(line, &stack_a, &stack_b);
		free(line);
		line = get_next_line(0);
	}
	print_checker_res(stack_a, stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

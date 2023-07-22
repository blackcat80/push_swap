/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:33:28 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/22 01:20:23 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

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

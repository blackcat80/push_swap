/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:56:10 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/22 02:39:51 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 600
# endif

// Estructura del stack

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

// Operations 

void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		push(t_stack **src, t_stack **dest);
void		swap(t_stack *stack);
void		rotate(t_stack **stack);
void		rev_rotate(t_stack **stack);

// Input Check

int			is_correct_input(char **av, int ac);
int			is_digit(char c);
int			is_sign(char c);
long int	ft_atoi(const char *str);

// Utils 

void		free_stack(t_stack **stack);
void		exit_error(t_stack **stack_a, t_stack **stack_b);
int			ft_strcmp(const char *s1, const char *s2);
void		print_checker_res(t_stack *stack_a, t_stack *stack_b);
int			is_sorted(t_stack *stack);
void		ft_putstr(char *str);

// Stack 

t_stack		*get_stack_bottom(t_stack *stack);
t_stack		*get_stack_before_bottom(t_stack *stack);
t_stack		*stack_new(int value);
void		stack_add_bottom(t_stack **stack, t_stack *new);
int			get_stack_size(t_stack	*stack);
t_stack		*fill_stack_values(int ac, char **av);
void		assign_index(t_stack *stack_a, int ac);

// Get Next Line  

char		*ft_cutline(char *butterp);
char		*ft_returnline(char *bufferp);
char		*ft_addbuffer(char *bufferp, char *buffer);
char		*ft_read(int fd, char *buffer);
char		*get_next_line(int fd);
char		*true_free(char **str);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_calloc(size_t count, size_t size);

#endif

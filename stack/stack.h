
#ifndef STACK_H
# define STACK_H

# include "libft.h" 

typedef struct s_node
{
	int				element;
	int				group;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
}			t_stack;

void	ft_new_stack(t_stack *stack);
t_node	*ft_new_stack_node(int element);
t_node	*ft_stack_pop(t_stack *stack);
void	ft_stack_push(t_stack *stack, t_node *node);
void	ft_connect(t_node *first, t_node *second);

#endif

#include "../push_swap.h"

void	ft_connect(t_node *first, t_node *second)
{
	first->next = second;
	second->prev = first;
}

t_node	*ft_new_stack_node(int element)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->element = element;
	node->group = 0;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

void	ft_new_stack(t_stack *stack)
{
	stack->size = 0;
	stack->top = NULL;
}

t_node	*ft_stack_pop(t_stack *stack)
{
	t_node	*last;
	t_node	*node;

	node = stack->top;
	if (!node)
		return (NULL);
	stack->top = node->next;
	last = node->prev;
	ft_connect(last, stack->top);
	node->prev = NULL;
	node->next = NULL;
	stack->size--;
	return (node);
}

void	ft_stack_push(t_stack *stack, t_node *node)
{
	t_node	*top;
	t_node	*last;

	top = stack->top;
	if (!top)
		ft_connect(node, node);
	else
	{
		last = top->prev;
		ft_connect(last, node);
		ft_connect(node, top);
	}
	stack->top = node;
	stack->size++;
}

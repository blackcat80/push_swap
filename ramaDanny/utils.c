#include "push_swap.h"

size_t	add_at_end(t_stack **stack, t_stack *new_item)
{
	t_stack	*tmp;

	if (!new_item)
		return (0);
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_item;
	return (1);
}


size_t	add_at_end(t_stack **stack, t_stack *new_item)
{
	t_stack	*tmp;

	if (!new_item)
		return (0);
	tmp = *stack;
	if (ft_lstlast(tmp) == 0)
		return (0);
	tmp->next = new_item;
	return (1);
}
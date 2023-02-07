

#include "../push_swap.h"

static int	ft_can_swap_a(t_stack *stack_a)
{
	t_node	*top;
	t_node	*second;

	if (stack_a->size < 2)
		return (0);
	top = stack_a->top;
	second = stack_a->top->next;
	if (top->group != second->group)
		return (0);
	if (top->element > second->element)
		return (1);
	return (0);
}

static int	ft_can_swap_b(t_stack *stack_b)
{
	t_node	*top;
	t_node	*second;

	if (stack_b->size < 2)
		return (0);
	top = stack_b->top;
	second = stack_b->top->next;
	if (top->group != second->group)
		return (0);
	if (top->element < second->element)
		return (1);
	return (0);
}

void	ft_can_swap(t_stack *stack_a, t_stack *stack_b)
{
	int	sa;
	int	sb;

	sa = ft_can_swap_a(stack_a);
	sb = ft_can_swap_b(stack_b);
	if (sa && sb)
		ft_double_swap(stack_a, stack_b);
	if (!sa && sb)
		ft_swap(stack_b, SWAP_B);
}

static void	ft_split_stack(t_stack *stack_a, t_stack *stack_b, t_pivot pivot)
{
	int	qtd;

	qtd = pivot.qtd;
	while (qtd > 0)
	{
		ft_can_swap(stack_a, stack_b);
		if (stack_a->top->element < pivot.value)
		{
			stack_a->top->group = pivot.index;
			ft_push(stack_a, stack_b, PUSH_B);
			qtd--;
		}
		else
			ft_rotate(stack_a, ROTATE_A);
	}
}

static t_pivot	ft_get_pivot(int *sort, int size, int first)
{
	t_pivot	 pivot;

	if (size < 10)
		pivot.index = size / 2;
	else if (size < 50)
		pivot.index = size / 3;
	else if (size < 90)
		pivot.index = size / 5;
	else if (size < 110)
		pivot.index = size / 7;
	else if (size < 150)
		pivot.index = size / 9;
	else
		pivot.index = size / 11;
	if (pivot.index > size - 3)
		pivot.index = size - 3;
	pivot.value = sort[pivot.index];
	pivot.qtd = pivot.index;
	pivot.first = first;
	return (pivot);
}

void	ft_sort_all(t_stack *stack_a, t_stack *stack_b, int *sort, int first)
{
	t_pivot	pivot;

	pivot.index = 0;
	if (stack_a->size > 3)
	{
		pivot = ft_get_pivot(sort, stack_a->size, first);
		ft_split_stack(stack_a, stack_b, pivot);
		ft_sort_all(stack_a, stack_b, sort + pivot.index, 0);
	}
	ft_sort_three(stack_a, sort + pivot.index);
	ft_return_stack(stack_a, stack_b, pivot, sort);
}

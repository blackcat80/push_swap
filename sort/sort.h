

#ifndef SORT_H
# define SORT_H



typedef struct s_pivot
{
	int	index;
	int	value;
	int	qtd;
	int	group;
	int	first;
}	t_pivot;

void	ft_sort(t_stack *stack_a, int *sort);
void	ft_sort_all(t_stack *stack_a, t_stack *stack_b, int *sort, int first);
void	ft_sort_three(t_stack *stack_a, int *sort);
void	ft_return_stack(t_stack *stack_a,
			t_stack *stack_b,
			t_pivot pivot, int *sort);

#endif

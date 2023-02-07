#include"./push_swap.h"

/*
	**Función que mueve el top de la pila stack al final de la misma.
*/
void	ft_reverse_rotate_(t_stack *stack)
{
	stack->top = stack->top->prev;
}
/*
	**Función general que permite mover el top de una pila al final de la misma.
*/
void	ft_rev_rotate(t_stack *stack, char *option)
{
	ft_revere_rotate_(stack);
	ft_printf("%s",option);
}
/*
	**Función que mueve el top de las pilas stack_a y stack_b al final de ambas.
*/
void	ft_double_rev_rotate(t_stack *stack_a, t_stack *stack_b)
{
	ft_reverse_rotate_(stack_a);
	ft_reverse_rotate_(stack_b);
	ft_printf("%s", REV_ROTATE);
}
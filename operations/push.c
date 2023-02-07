#include"./push_swap.h"
/* Función que extrae el primer elemento de la pila stack_pop y lo inserta en 
  la pila stack_push ejem: ft_pop_push(stack_b, stack_a) o 
  ft_pop_push(stack_a, stack_b). */

static void	ft_pop_push(t_stack *stack_pop, t_stack *stack_push)
{
	t_node	*node;

	node = ft_stack_pop(stack_pop);
	ft_stack_push(stack_push, node);
}

/* Función general que permite mover un elemento de una pila a otra.
	eje: ft_push(stack_a, stack_b, PUSH_A) o ft_push(stack_b, stack_a, PUSH_B). */

void ft_push(t_stack *stack_a, t_stack *stack_b, char *option)
{
	ft_pop_push(stack_a, stack_b);
	ft_printf("%s", option);
}
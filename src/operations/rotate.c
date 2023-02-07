#include"../push_swap.h"

//Función que rota la pila hacia arriba, 
//el primer elemento pasa a ser el último.

static void	ft_rotate_op(t_stack *stack)
{
	stack->top = stack->top->next;
}

// Función general que permite mover el top de una 
//pila al final de la misma.

void	ft_rotate(t_stack *stack, char *option)
{
	ft_rotate_op(stack);
	ft_printf("%s", option);
}

// Función que rota las pilas stack_a y stack_b hacia arriba 
//(el primer elemento pasa a ser el último).

void	ft_double_rotate(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate_op(stack_a);
	ft_rotate_op(stack_b);
	ft_printf("%s", ROTATE);
}

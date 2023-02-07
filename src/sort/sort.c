#include "../push_swap.h"

/* La función "ft_sort_three" se utiliza para ordenar tres elementos en una pila "stack_a". 
La función toma dos argumentos, la pila y un arreglo de enteros "sort".
Si el tamaño de la pila no es igual a tres, la función simplemente retorna sin hacer nada. 
De lo contrario, la función identifica los tres elementos en la pila como "top", "mid" y "bottom", 
y los ordena de manera que el elemento "bottom" sea el primer elemento en la pila, seguido de "mid" y finalmente "top".
Esto se logra a través de operaciones de rotación y intercambio en la pila.
La función utiliza funciones "ft_rotate_a", "ft_rev_rotate_a" y "ft_swap_a" para realizar estas operaciones en la pila.*/

void	ft_sort_three(t_stack *stack_a, int *sort)
{
	t_node	*top;
	t_node	*mid;

	if (stack_a->size != 3)
		return ;
	top = stack_a->top;
	mid = top->next;
	if (sort[2] == top->element)
		ft_rotate(stack_a, ROTATE_A);
	if (sort[2] == mid->element)
		ft_rev_rotate(stack_a, REV_ROTATE_A);
	mid = stack_a->top->next;
	if (sort[0] == mid->element)
		ft_swap(stack_a, SWAP_A);
}

/* Si el tamaño de la pila es igual a dos, la función utiliza la función "ft_swap_a" para intercambiar los dos elementos de la pila, 
de manera que el elemento más grande quede en la parte inferior de la pila.*/

static void	ft_sort_two(t_stack *stack_a)
{
	if (stack_a->size == 2)
		ft_swap(stack_a, SWAP_A);
}

/* La función "ft_sort" se utiliza para ordenar los elementos de una pila stack_a.  
La función toma dos argumentos: la pila y un arreglo de enteros "sort".
La función inicializa una nueva pila "stack_b". Luego, utiliza la función "ft_sort_two" para ordenar dos elementos en la pila "stack_a" si es que existen. 
A continuación, utiliza "ft_sort_three" para ordenar tres elementos en la pila "stack_a" si es que existen.
Finalmente, la función utiliza la función "ft_sort_all" para ordenar todos los elementos restantes en la pila "stack_a". 
La función "ft_sort_all" toma cuatro argumentos: la pila "stack_a", la pila "stack_b", el arreglo de enteros "sort" y un entero "start".
 Este último argumento se utiliza para indicar el primer elemento en el arreglo "sort" que se va a ordenar.
*/

void	ft_sort(t_stack *stack_a, int *sort)
{
	t_stack	stack_b;

	ft_new_stack(&stack_b);
	ft_sort_two(stack_a);
	ft_sort_three(stack_a, sort);
	ft_sort_all(stack_a, &stack_b, sort, 1);
}

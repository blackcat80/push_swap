#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include"../libft/libft.h"

# define SUCCESS 0

# define SWAP_A			"sa\n"
# define SWAP_B			"sb\n"
# define SWAP			"ss\n"
# define PUSH_A			"pa\n"
# define PUSH_B			"pb\n"
# define ROTATE_A		"ra\n"
# define ROTATE_B		"rb\n"
# define ROTATE			"rr\n"
# define REV_ROTATE_A	"rra\n"
# define REV_ROTATE_B	"rrb\n"
# define REV_ROTATE		"rrr\n"

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

typedef struct s_pivot
{
	int		index;
	int		value;
	int		qtd;
	int		group;
	int		first;
}			t_pivot;

// ========================== OPERATIONS ============================= //

void	ft_push(t_stack *stack_a, t_stack *stack_b, char *option);
void	ft_rev_rotate(t_stack *stack, char *option);
void	ft_double_rev_rotate(t_stack *stack_a, t_stack *stack_b);
void	ft_rotate(t_stack *stack, char *option);
void	ft_double_rotate(t_stack *stack_a, t_stack *stack_b);
void	ft_swap(t_stack *stack, char *option);
void	ft_double_swap(t_stack *stack_a, t_stack *stack_b);

// ========================== PARSE =================================== //

void	ft_parse(int argc, char **argv, t_list **reverse_input, int **sort);
void	ft_list_to_array(t_list	**list, int **sort);
void	ft_add_number_sorting(t_list *new, t_list **list);

// ========================== SORT ===================================== //

void	ft_sort(t_stack *stack_a, int *sort);
void	ft_sort_three(t_stack *stack_a, int *sort);
void	ft_sort_all(t_stack *stack_a, t_stack *stack_b, int *sort, int first);
void	ft_return_stack(t_stack *stack_a, t_stack *stack_b,
			t_pivot pivot, int *sort);

// ========================== STACK ===================================== //

void	ft_connect(t_node *first, t_node *second);
void	ft_new_stack(t_stack *stack);
t_node	*ft_stack_pop(t_stack *stack);
t_node	*ft_new_stack_node(int element);
void	ft_stack_push(t_stack *stack, t_node *node);

//free_resorces.c
void	ft_free_list(t_list **lst);
void	ft_free_char_2pointer(char **pointer);
void	ft_free_null(void *pointer);

//main.c
void	ft_error_exit(void);

#endif

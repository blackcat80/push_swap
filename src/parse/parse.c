#include "../push_swap.h"

//Función que comprueba si una cadena de caracteres es un número.

static int	ft_is_string_number(char *string)
{
	int	i;

	i = 0;
	if (*string == '-')
		string++;
	while (string[i])
		if (!ft_isdigit(string[i++]))
			return (0);
	return (1);
}

//Función que comprueba si un número es un entero.

static int	ft_is_integer(long number)
{
	if (number > INT_MAX)
		return (0);
	if (number < INT_MIN)
		return (0);
	return (1);
}

// almacena en un entero.

static int	ft_parse_number(char *str_number, int *number)
{
	int	lnumber;

	if (!ft_is_string_number(str_number))
		return (0);
	lnumber = ft_atoi(str_number);
	*number = (int)lnumber;
	return (ft_is_integer(lnumber));
}

// Función que parsea los argumentos de entrada y los almacena en una lista

static void	ft_parse_input(char **input, t_list **reverse_input, int **sort)
{
	int		*number;
	t_list	*sorted_list;

	sorted_list = NULL;
	while (*input)
	{
		number = malloc(sizeof(int));
		if (!ft_parse_number(*input++, number))
			ft_error_exit();
		ft_add_number_sorting(ft_lstnew(number), &sorted_list);
		ft_lstadd_front(reverse_input, ft_lstnew(number));
	}
	ft_list_to_array(&sorted_list, sort);
	ft_free_list(&sorted_list);
}

// Función que analiza los argumentos de entrada y los almacena en una lista

void	ft_parse(int argc, char **argv, t_list **reverse_input, int **sort)
{
	char	**input;

	if (argc == 1)
		exit(0);
	if (argc > 2)
		ft_parse_input(argv + 1, reverse_input, sort);
	else
	{
		input = ft_split(argv[1], ' ');
		ft_parse_input(input, reverse_input, sort);
		ft_free_char_2pointer(input);
	}
}

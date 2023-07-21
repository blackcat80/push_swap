/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:43:05 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/20 03:57:25 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

/*  arg_is_number:
   Comprueba si el argumento es un número. +1 1 y -1 son todos números válidos.
   Devuelve: 1 si el argumento es un número, 0 si no lo es.
*/
static int	arg_is_number(char *av)
{
	int	i;

	i = 0;
	if (av[0] == '\0')
		return (0);
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && is_digit(av[i]))
		i++;
	if (av[i] != '\0' && !is_digit(av[i]))
		return (0);
	return (1);
}

/*  have_duplicates:
   Comprueba si hay duplicados dentro de un arreglo de enteros.
   Devuelve: 1 si hay duplicados, 0 si no los hay.
*/

static int	have_duplicates(int *num, int tmp, int max)
{
	int	i;

	i = 1;
	while (i < max)
	{
		if (tmp == num[i])
			return (1);
		i++;
	}
	return (0);
}

/* ft_atoi:
   Convierte una cadena alfanumérica de caracteres en un entero largo.
*/

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}

/*  is_correct_input:
   Comprueba si los argumentos dados son todos números, sin duplicados.
   Devuelve: 1 si los argumentos son válidos, 0 si no.
*/

int	is_correct_input(char **av, int ac)
{
	int	i;
	int	*num;
	int	nb_zeros;
	int	temp;

	nb_zeros = 0;
	i = 1;
	num = malloc(sizeof(int) * ac);
	while (av[i])
	{
		if (!arg_is_number(av[i]))
			return (0);
		num[i] = ft_atoi(av[i]);
		temp = num[i];
		if (have_duplicates(num, temp, i))
			return (0);
		i++;
	}
	free(num);
	if (nb_zeros > 1)
		return (0);
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:47:22 by csitja-b          #+#    #+#             */
/*   Updated: 2023/02/01 19:52:36 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int main()
{
	stack_a *s = stack_ini();

	push(s, 1);
	stack_print(s);
	push(s, 2);
	stack_print(s);
	push(s, 3);
	stack_print(s);
	push(s, 4);
	stack_print(s);
	printf("\n");

	printf("POP %d - ", pop(s));
	stack_print(s);
	printf("POP %d - ", pop(s));
	stack_print(s);
	printf("POP %d - ", pop(s));
	stack_print(s);
	printf("POP %d - ", pop(s));
	stack_print(s);
	stack_destroy(s);
	return 0;
}



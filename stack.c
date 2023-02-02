/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:28:32 by csitja-b          #+#    #+#             */
/*   Updated: 2023/02/02 18:36:10 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

struct _stack 
{
	int *items;
	short num_items;
};

stack_a *stack_ini()
{
	stack_a *s = NULL;

	s = (stack_a *)malloc(sizeof(stack_a));
	if (s == NULL)
		return (NULL);

	s ->items = NULL;
	s ->num_items = 0;
	return (s);
}

void push(stack_a *s, int value)
{
	s-> items = (int *)realloc(s->items, (s->num_items + 1)*sizeof(int));
	if (s == NULL) 
	{
		return ;
	}
	s ->items[s->num_items] = value;
	s ->num_items++;
}

int pop(stack_a *s)
{
	if (s->num_items == 0) 
	{
		return -1;
	}
	int last = s->items[s->items[s->num_items -1]];
	if (s->num_items -1 > 0)
	{
		s->items = (int *) realloc (s->items, (s->num_items -1)*sizeof(int));
	}
	else 
	{
		free(s->items);
		s->items = NULL;
	}
	return (last);
}

void stack_destroy(stack_a *s)
{
	if (s->items != NULL) free(s->items);
	free(s);
}

void stack_print(stack_a *s)
{
	for (int i = 0; i < s->num_items; i++)
		printf("%d", s->items[i]);
	printf("\n");
}



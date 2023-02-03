/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:28:32 by csitja-b          #+#    #+#             */
/*   Updated: 2023/02/03 21:30:25 by csitja-b         ###   ########.fr       */
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
		return ;
	s ->items[s->num_items] = value;
	s ->num_items++;
}

int pop(stack_a *s)
{
	if (s->num_items == 0) 
		return -1;
	int last = s->items[s->items[s->num_items -1]];
	if (s->num_items -1 > 0)
	{
		s->items = (int *) realloc (s->items, (s->num_items -1)*sizeof(int));
		if (s->items == NULL)
			return (-1);
	}
	else 
	{
		free(s->items);
		s->items = NULL;
	}
	s->num_items--;
	return last;
}

void stack_destroy(stack_a *s)
{
	if (s->items != NULL)
		free(s->items);
	free(s);
}

void stack_print(stack_a *s)
{
	for (int i = 0; i < s->num_items; i++)
		printf("%d", s->items[i]);
	printf("\n");
}

/*
void	ft_connect(t_node *first, t_node *second)
{
	first->next = second;
	second->prev = first;
}

t_node	*ft_new_stack_node(int element)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->element = element;
	node->group = 0;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

void	ft_new_stack(t_stack *stack)
{
	stack->size = 0;
	stack->top = NULL;
}

t_node	*ft_stack_pop(t_stack *stack)
{
	t_node	*last;
	t_node	*node;

	node = stack->top;
	if (!node)
		return (NULL);
	stack->top = node->next;
	last = node->prev;
	ft_connect(last, stack->top);
	node->prev = NULL;
	node->next = NULL;
	stack->size--;
	return (node);
}

void	ft_stack_push(t_stack *stack, t_node *node)
{
	t_node	*top;
	t_node	*last;

	top = stack->top;
	if (!top)
		ft_connect(node, node);
	else
	{
		last = top->prev;
		ft_connect(last, node);
		ft_connect(node, top);
	}
	stack->top = node;
	stack->size++;
}*/

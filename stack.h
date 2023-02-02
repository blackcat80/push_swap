/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:22:20 by csitja-b          #+#    #+#             */
/*   Updated: 2023/02/01 22:36:43 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
#include <stdlib.h>
#include <stdio.h>

typedef struct _stack stack_a;

stack_a *stack_ini();
void push(stack_a *s, int value);
int pop(stack_a *s);
void stack_destroy(stack_a *s);
void stack_print(stack_a *s);

#endif
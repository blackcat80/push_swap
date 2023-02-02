/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:13:05 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/02 18:13:57 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft/libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

    if (!ptr) 
		return malloc(size);
    if (!size) 
	{
		free(ptr);
        return (NULL);
    }
    new_ptr = malloc(size);
    ft_memcpy(new_ptr, ptr, size);
    free(ptr);
    return (new_ptr);
}

void	push(stack_a *s, int value)
{
	s-> items = (int *)ft_realloc(s->items, (s->num_items + 1)*sizeof(int));
	if (s == NULL)
		return ;
	s ->items[s->num_items] = value;
	s ->num_items++;
}
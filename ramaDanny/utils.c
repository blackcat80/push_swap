/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:13:05 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/03 21:29:22 by csitja-b         ###   ########.fr       */
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

/*
void *realloc(void *ptr, size_t size) {
  if (ptr == NULL) {
    return malloc(size);
  }
  if (size == 0) {
    free(ptr);
    return NULL;
  }
  void *new_ptr = malloc(size);
  if (new_ptr == NULL) {
    return NULL;
  }
  size_t old_size = malloc_size(ptr);
  size_t copy_size = (old_size < size) ? old_size : size;
  memcpy(new_ptr, ptr, copy_size);
  free(ptr);
  return new_ptr;
}*/

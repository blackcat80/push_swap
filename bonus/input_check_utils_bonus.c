/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_utils_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:40:54 by csitja-b          #+#    #+#             */
/*   Updated: 2023/07/22 01:47:57 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

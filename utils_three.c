/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:13:27 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:13:46 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_steps_to_index(t_list *stack_a, int index)
{
	int	steps;

	steps = 0;
	while (stack_a->index != index)
	{
		stack_a = stack_a->next;
		steps++;
	}
	return (steps);
}

int	get_steps_to_top(t_list *stack_a, int index, int size)
{
	int	mid;
	int	steps;

	mid = size / 2;
	steps = 0;
	if (index > mid)
	{
		while (stack_a)
		{
			if (stack_a->index == index)
				break ;
			stack_a = stack_a->next;
		}
		while (stack_a)
		{
			stack_a = stack_a->next;
			steps++;
		}
		steps++;
	}
	else
		steps = get_steps_to_index(stack_a, index);
	return (steps);
}

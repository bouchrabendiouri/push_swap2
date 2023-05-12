/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:11:36 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:11:50 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_index(t_list *stack_a)
{
	int	index;

	index = 0;
	while (stack_a)
	{
		stack_a->index = index;
		stack_a = stack_a->next;
		index++;
	}
}

int	get_min(t_list *stack_a)
{
	int	min;

	min = stack_a->content;
	while (stack_a)
	{
		if (stack_a->content < min)
			min = stack_a->content;
		stack_a = stack_a->next;
	}
	return (min);
}

int	get_max(t_list *stack_a)
{
	int	max;

	max = stack_a->index;
	while (stack_a)
	{
		if (stack_a->content > max)
			max = stack_a->content;
		stack_a = stack_a->next;
	}
	return (max);
}

int	get_hold_first(t_list *stack_a, int start, int end)
{
	int	min;
	int	index;

	min = end;
	index = -1;
	while (stack_a)
	{
		if (stack_a->content >= start && stack_a->content < end)
			return (stack_a->index);
		stack_a = stack_a->next;
	}
	return (index);
}

int	get_hold_second(t_list *stack_a, int start, int end, int hold_first)
{
	int	index;

	index = -1;
	while (stack_a)
	{
		if (stack_a->content >= start && stack_a->content
			< end && stack_a->index != hold_first)
			index = stack_a->index;
		stack_a = stack_a->next;
	}
	return (index);
}

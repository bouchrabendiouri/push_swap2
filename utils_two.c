/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:12:32 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:12:55 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute(t_list **stack_a, t_list **stack_b, int size, int index)
{
	int	mid;

	mid = size / 2;
	if (index > mid)
	{
		while ((*stack_a)->index != index)
			rra(&(*stack_a), 1);
	}
	else
	{
		while ((*stack_a)->index != index)
			ra(&(*stack_a), 1);
	}
	pb(&(*stack_b), &(*stack_a), 1);
}

int	get_index(t_list *stack_b)
{
	int	max;
	int	index;

	if (!stack_b)
		return (-1);
	max = stack_b->content;
	index = stack_b->index;
	while (stack_b)
	{
		if (stack_b->content > max)
		{
			max = stack_b->content;
			index = stack_b->index;
		}
		stack_b = stack_b->next;
	}
	return (index);
}

void	push_to_a_helper(t_var *var, t_list **stack_a, t_list **stack_b)
{
	if (var->index > var->mid)
	{
		while ((*stack_b)->index != var->index)
			rrb(&(*stack_b), 1);
	}
	else
	{
		while ((*stack_b)->index != var->index)
			rb(&(*stack_b), 1);
	}
	pa(&(*stack_a), &(*stack_b), 1);
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	t_var	*var;

	var = (t_var *)malloc(sizeof(t_var));
	while (lstsize(&(*stack_b)))
	{
		var->mid = (lstsize(&(*stack_b)) / 2);
		if (lstsize(&(*stack_b)) == 1)
		{
			pa(&(*stack_a), &(*stack_b), 1);
			break ;
		}
		init_index(*stack_b);
		var->index = get_index(*stack_b);
		if (var->index == 0)
		{
			pa(&(*stack_a), (&(*stack_b)), 1);
			continue ;
		}
		push_to_a_helper(var, &(*stack_a), &(*stack_b));
	}
	free(var);
}

int	update_min(t_list *stack, int start, int end)
{
	while (stack)
	{
		if (stack->content >= start && stack->content < end)
			return (0);
		stack = stack->next;
	}
	return (1);
}

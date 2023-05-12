/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_hundered.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:19:10 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:19:25 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_hundred_helper(t_var *var, t_list **stack_a, t_list **stack_b)
{
	if (var->hold_second == -1)
		execute(&(*stack_a), &(*stack_b), var->size, var->hold_first);
	else if (get_steps_to_top(*stack_a, var->hold_first, var->size)
		< get_steps_to_top(*stack_a, var->hold_second, var->size))
		execute(&(*stack_a), &(*stack_b), var->size, var->hold_first);
	else
		execute(&(*stack_a), &(*stack_b), var->size, var->hold_second);
	var->size = lstsize(&(*stack_a));
	if (update_min(*stack_a, var->min, var->min + var->range))
		var->min = var->min + var->range;
	init_index(*stack_a);
}

void	one_hundered(t_list **stack_a, t_list **stack_b)
{
	t_var	*var;

	var = (t_var *)malloc(sizeof(t_var));
	init_index(*stack_a);
	var->min = get_min(*stack_a);
	var->range = ((get_max(*stack_a) - var->min) + 1) / 5;
	var->size = lstsize(&(*stack_a));
	while (var->size)
	{
		var->hold_first = get_hold_first(
				*stack_a, var->min, var->min + var->range);
		if (var->hold_first == -1)
		{
			var->min = var->min + var->range;
			continue ;
		}
		var->hold_second = get_hold_second
			(*stack_a, var->min, var->min + var->range, var->hold_first);
		one_hundred_helper(var, &(*stack_a), &(*stack_b));
	}
	push_to_a(&(*stack_a), &(*stack_b));
	free(var);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   acses_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:57:36 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 16:58:22 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_acses(t_list *stack_a)
{
	int	min;

	if (stack_a)
	{
		min = stack_a->content;
		stack_a = stack_a->next;
	}
	while (stack_a)
	{
		if (min > stack_a->content)
			return (-1);
		min = stack_a->content;
		stack_a = stack_a->next;
	}
	return (0);
}

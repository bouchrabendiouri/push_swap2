/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:07:28 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:07:42 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	a_is_sorted(t_list *nums)
{	
	while (nums)
	{
		if (nums->next)
		{
			if (nums->content > nums->next->content)
				return (1);
		}
		nums = nums->next;
	}
	return (0);
}

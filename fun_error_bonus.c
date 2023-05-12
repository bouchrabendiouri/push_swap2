/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_error_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:03:00 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:03:15 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error_lst(t_list *p, int k)
{
	t_list	*s;

	if (k == -1)
		write (2, "Error\n", 6);
	else if (k == 1)
		write (2, "Error\n", 6);
	else
		write (2, "Error\n", 6);
	if (!p)
		exit (5);
	while (p)
	{
		s = p;
		p = p->next;
		free(s);
	}
	exit (1);
}

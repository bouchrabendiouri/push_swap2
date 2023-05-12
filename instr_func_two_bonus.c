/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_func_two_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:06:40 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:06:57 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_list **lst, int k)
{
	t_list	*p;
	t_list	*new;

	if (!(*lst) || !(*lst)->next)
		return ;
	p = (*lst);
	while (p->next->next)
		p = p->next;
	new = p->next;
	p->next = NULL;
	lstadd_front(lst, new);
	if (k)
		write (1, "rra\n", 4);
}

void	rrb(t_list **lst, int k)
{
	t_list	*p;
	t_list	*new;

	if (!(*lst) || !(*lst)->next)
		return ;
	p = (*lst);
	while (p->next->next)
		p = p->next;
	new = p->next;
	p->next = NULL;
	lstadd_front(lst, new);
	if (k)
		write (1, "rrb\n", 4);
}

void	pa(t_list **a, t_list **b, int k)
{
	t_list	*p;

	if (!b || !*b)
		return ;
	p = (*b);
	(*b) = (*b)->next;
	p->next = NULL;
	lstadd_front(a, p);
	if (k)
		write (1, "pa\n", 3);
}

void	pb(t_list **b, t_list **a, int k)
{
	t_list	*new;

	if (!a || !*a)
		return ;
	new = (*a);
	(*a) = (*a)->next;
	new->next = NULL;
	lstadd_front(b, new);
	if (k)
		write (1, "pb\n", 3);
}

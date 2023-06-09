/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_func_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:22:46 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:23:15 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ss(t_list *stack_a, t_list *stack_b)
{
	int		swap;

	if (!stack_a || !stack_b || !stack_a->next || !stack_b->next)
		return ;
	swap = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = swap;
	swap = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = swap;
}

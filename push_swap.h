/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:16:09 by bbendiou          #+#    #+#             */
/*   Updated: 2023/05/10 17:16:25 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct s_var{
	int	hold_first;
	int	hold_second;
	int	min;
	int	size;
	int	range;
	int	index;
	int	mid;
	int	steps;
}	t_var;

void	five_hundered(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **b);
int		ft_atoi(char *str, t_list *p);
char	**ft_split(char *s, char c);
void	ft_error_lst(t_list *p, int k);
char	*get_next_line(int fd);
t_list	**sa(t_list **lst, int k);
void	sb(t_list **lst, int k);
void	ra(t_list **lst, int k);
void	rb(t_list **lst, int k);
void	rr(t_list **a, t_list **b, int k);
void	rra(t_list **lst, int k);
void	rrb(t_list **lst, int k);
void	pa(t_list **a, t_list **b, int k);
void	pb(t_list **b, t_list **a, int k);
void	ss(t_list *stack_a, t_list *stack_b);
int		a_is_sorted(t_list *nums);
void	lstadd_back(t_list **lst, t_list *new);
t_list	*lstnew(int content);
void	lstadd_front(t_list **lst, t_list *new);
int		lstsize(t_list **lst);
t_list	*lstlast(t_list *lst);
void	one_hundered(t_list **stack_a, t_list **stack_b);
int		acses(t_list *stack_a);
int		sort_three_sa_rra(t_list **a);
int		sort_three_sa_ra(t_list **a);
int		sort_three_sa_and_write(t_list **a);
int		sort_three_ra_and_write(t_list **a);
int		sort_three_rra_and_write(t_list **a);
int		sort_three(t_list **a);
void	execute(t_list **stack_a, t_list **stack_b, int size, int index);
int		get_steps_to_top(t_list *stack_a, int index, int size);
void	push_to_a(t_list **stack_a, t_list **stack_b);
int		update_min(t_list *stack, int start, int end);
void	init_index(t_list *stack_a);
int		get_min(t_list *stack_a);
int		get_max(t_list *stack_a);
int		get_hold_first(t_list *stack_a, int start, int end);
int		get_hold_second(t_list *stack_a, int start, int end, int hold_first);
int		ft_strlen( char *str);
void	push_swap(t_list **stack_a);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strjoin(char *s1, char *s2);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:29:11 by sokaraku          #+#    #+#             */
/*   Updated: 2024/01/09 17:44:11 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* Swaps the first two elements at the top of the stack A.*/
void	sa(d_node **first_a)
{
	int	tmp;

	if (!(*first_a) || !(*first_a)->next)
		return ;
	tmp = (*first_a)->data;
	(*first_a)->data = (*first_a)->next->data;
	(*first_a)->next->data = tmp;
}

/*Pushes the top element of B's stack (push) to the top of A's stack (store).*/
void	pa(d_node **store, d_node **push)
{
	d_node	*tmp;

	if (!(*push))
		return ;
	tmp = *push;
	*push = (*push)->next;
	if (*push)
		(*push)->prev = NULL;
	ft_lstadd_front(store, tmp);
}

/*Shift up all the nodes of stack B once. It can be done by simply placing
the first node to the last position of the stack.*/
void	ra(d_node **first_node)
{
	d_node	*first;

	if (!(*first_node))
		return ;
	first = *first_node;
	ft_lstadd_back(first_node, first);
	(*first_node) = (*first_node)->next;
	first->next = NULL;
}

/*Shift down all the nodes of stack A once. It can be done by simply placing
the last node to the first position of the stack.*/
void	rra(d_node **first_node)
{
	d_node	*last_prev;

	if (!(*first_node) || !(*first_node)->next)
		return ;
	last_prev = ft_lstlast(*first_node)->prev;
	ft_lstadd_front(first_node, ft_lstlast(*first_node));
	last_prev->next = NULL;
}

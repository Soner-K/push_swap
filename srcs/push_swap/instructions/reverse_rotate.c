/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:19:45 by sokaraku          #+#    #+#             */
/*   Updated: 2024/01/30 14:50:04 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

/**
 * @brief Shifts down all the stack's nodes once.
 * The last node becomes the first.
 * @param stack Address of the stack's first node.
 * @returns Returns 0 if stack's size is strictly less than 2.
 * Returns 1 otherwise (the operation was successful).
 */
char	lst_reverse_rotate(t_node **stack)
{
	t_node	*last_prev;

	if (!(*stack) || !(*stack)->next)
		return (0);
	last_prev = ft_lstlast(*stack)->prev;
	ft_lstadd_front(stack, ft_lstlast(*stack));
	last_prev->next = NULL;
	return (1);
}

void	rra(t_node **first_a, char show)
{
	if (lst_reverse_rotate(first_a))
		if (show == 1)
			ft_putstr("rra\n", 1);
}

void	rrb(t_node **first_b, char show)
{
	if (lst_reverse_rotate(first_b))
		if (show == 1)
			ft_putstr("rrb\n", 1);
}

void	rrr(t_node **first_a, t_node **first_b, char show)
{
	if (!(*first_a) || !(*first_a)->next || !(*first_b) || !(*first_b)->next)
		return ;
	if (lst_reverse_rotate(first_a) && lst_reverse_rotate(first_b))
		if (show == 1)
			ft_putstr("rrr\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:07:26 by sokaraku          #+#    #+#             */
/*   Updated: 2023/12/24 16:44:26 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}					d_node;

d_node				*ft_lstnew(int data);
d_node				*ft_lstlast(d_node *node);
void				add_node(d_node **node, d_node *insert);
void				clear_list(d_node **node);
void				ft_lstadd_front(d_node **lst, d_node *new);
void				ft_lstadd_back(d_node **lst, d_node *new);
d_node				*create_list(int ac, char **av);
void				print_list(d_node *first_a, d_node *first_b);

void				sa(d_node **first_a);
void				sb(d_node **first_b);
void				ss(d_node **first_a, d_node **first_b);
void				pa(d_node **store, d_node **push);
void				pb(d_node **store, d_node **push);
void				ra(d_node **stack_a);
void				rb(d_node **first_node);
void				rr(d_node **first_a, d_node **first_b);
void				rra(d_node **first_node);
void				rrb(d_node **first_node);
void				rrr(d_node **first_a, d_node **first_b);

long				ft_atol(const char *nptr);
char				error(char **av);

void				execute(char *str, d_node **stack_a, d_node **stack_b);
int					ft_strcmp(const char *s1, const char *s2);
#endif
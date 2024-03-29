/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:07:26 by sokaraku          #+#    #+#             */
/*   Updated: 2024/02/05 14:45:55 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define LONG_MAX 9223372036854775807
# define NO_CONVERSION -1

# define SA 1
# define SB 2
# define SS 3

# define RA 4
# define RB 5
# define RR 6

# define RRA 7
# define RRB 8
# define RRR 9

# define PA 10
# define PB 11

typedef struct s_node
{
	long			data;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_cost
{
	int				times_f;
	int				times_s;
	char			ins_f;
	char			ins_s;
	char			error;
}					t_cost;

typedef struct s_sizes
{
	long			lstsize_a;
	long			lstsize_b;
}					t_sizes;

// 						UTILS

void				clear_list(t_node **lst);
void				ft_bzero(void *s, size_t n);
char				*ft_fuse(char *s1, char *s2);
void				ft_lstadd_back(t_node **lst, t_node *new);
void				ft_lstadd_front(t_node **lst, t_node *new);
t_node				*ft_lstlast(t_node *lst);
t_node				*ft_lstnew(int data);
long				ft_lstsize(t_node *lst);
int					ft_min(int a, int b);
void				ft_putstr(char *s, int fd);
void				ft_quit(void);
int					ft_strlen(char *s);
long				len_strs(char **av);

// 					INSTRUCTIONS

// -> push.c
char				lst_push(t_node **store, t_node **push);
void				pa(t_node **store, t_node **push, char show);
void				pb(t_node **store, t_node **push, char show);

// -> reverse_rotate.c

char				lst_reverse_rotate(t_node **stack);
void				rra(t_node **first_node, char show);
void				rrb(t_node **first_node, char show);
void				rrr(t_node **first_a, t_node **first_b, char show);

// -> rotate.c

char				lst_rotate(t_node **stack);
void				ra(t_node **stack_a, char show);
void				rb(t_node **first_node, char show);
void				rr(t_node **first_a, t_node **first_b, char show);

// -> swap.c

char				lst_swap(t_node **stack);
void				sa(t_node **first_a, char show);
void				sb(t_node **first_b, char show);
void				ss(t_node **first_a, t_node **first_b, char show);

// 						PARSING

t_node				*create_list(int ac, char **av, int i);
long				ft_atol(const char *nptr);
void				*ft_calloc(size_t nmemb, size_t size);
void				ft_clear(char **tab);
char				ft_error(char **tab);
char				**ft_split(char const *s, char c);
char				*to_string(int ac, char **av);

// 						EXECUTE

// -> exec.c

void				do_it_first(t_node **a, t_node **b, t_cost set);
void				do_it_second(t_node **a, t_node **b, t_cost set);

// 						SORTING

// -> adjusted_instructions.c

t_cost				new_rotate(t_cost a, t_cost b);
t_cost				new_reverse_rotate(t_cost a, t_cost b);

// ->find_positions.c

long				find_max_pos(t_node *stack);
long				find_min_pos(t_node *stack);
long				find_pos_in_stack(t_node *lst, long value);

// -> smallest_cost_to_a.c

t_cost				smallest_cost_to_a(t_node *a, t_sizes sizes, long value);

// -> smallest_cost_to_b.c

t_cost				smallest_cost_to_b(t_node *a, t_node *b, t_sizes sizes);

// -> sort_for_three.c

void				sort_for_three(t_node **stack_a);

// -> sorting.c

char				is_sorted(t_node *lst);
void				sort(t_node **a, t_node **b, t_sizes *sizes);

// -> to_top.c

t_cost				to_top(long pos, long lstsize, char a);

// long				closest_smallest_in_b(int value, t_node *stack_b);
// long				closest_biggest_in_a(int value, t_node *stack_a);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:18:28 by sokaraku          #+#    #+#             */
/*   Updated: 2024/01/09 19:51:57 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	len_tab(char **av)
{
	int	i;

	i = 0;
	if (!av || !av[0])
		return (0);
	while (av[i])
		i++;
	return (i);
}

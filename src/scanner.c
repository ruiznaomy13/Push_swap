/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:48:14 by ncastell          #+#    #+#             */
/*   Updated: 2023/07/12 19:17:43 by ncastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/push_swap.h"

int	probe_order(t_stack *a)
{
	t_node	*tmp;

	tmp = a->first;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	max_location(t_stack *a)
{
	t_node	*tmp;
	int		max_index;
	int		max_position;

	tmp = a->first;
	max_index = -1;
	max_position = -1;
	while (tmp)
	{
		if (tmp->index > max_index)
		{
			max_index = tmp->index;
			max_position = tmp->position;
		}
		tmp = tmp->next;
	}
	return (max_position);
}

int	sec_max_loc(t_stack *stack)
{
	t_node	*tmp;
	int		max_position;

	tmp = stack->first;
	max_position = -1;
	while (tmp)
	{
		if (tmp->index == stack->size - 1)
			max_position = tmp->position;
		tmp = tmp->next;
	}
	return (max_position);
}

int	min_location(t_stack *a)
{
	t_node	*tmp;

	tmp = a->first;
	while (tmp)
	{
		if (tmp->index == 1)
			return (tmp->position);
		tmp = tmp->next;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:49:36 by ncastell          #+#    #+#             */
/*   Updated: 2023/07/12 19:17:48 by ncastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/push_swap.h"

void	three_nums(t_stack *a)
{
	int	mx;

	mx = max_location(a);
	if (mx == 1)
		ft_rrotate(a, 'a');
	else if (mx == 0)
		ft_rotate(a, 'a');
	if (!probe_order(a))
		ft_swap(a, 'a');
}

void	five_nums(t_stack *a, t_stack *b)
{
	int		i;
	int		size;

	i = 0;
	size = a->size;
	while (a->size > 3)
	{
		if (a->first->index == 1 || a->first->index == size)
			ft_push(a, b, 'b');
		else 
			ft_rotate(a, 'a');
	}
	three_nums(a);
	if (b->first->index == size)
		ft_swap(b, 'b');
	ft_push(b, a, 'a');
	if (a->first->index == 1 && b->size == 0)
		ft_rrotate(a, 'a');
	else
		ft_push(b, a, 'a');
	ft_rotate(a, 'a');
}

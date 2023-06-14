/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:49:32 by ncastell          #+#    #+#             */
/*   Updated: 2023/06/14 19:14:31 by ncastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     args_checker(char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        printf("%c\n", s[i]);
        if(isdigit(s[i]) == 0){
            printf("Estoy aqui\n");
            if ((s[i] == '-' || s[i] == '+') && isdigit(s[i++]) != 0)
            {
                i++;
            } else {
                return 0;
            }
            
        } else {
            i++;
        }
    }
    printf("Num %s\n", s);
    return 1;
}

void ft_error(int type, t_stack *a)
{
    if (type == 1)
        write(2, "ERROR\n", 6);
    ft_free(a);
    exit(type);
}

void	ft_free(t_stack *stack)
{
	t_node	*tmp;

	while (stack->first)
	{
		tmp = stack->first->next;
		free(stack->first);
		stack->first = tmp;
	}
}
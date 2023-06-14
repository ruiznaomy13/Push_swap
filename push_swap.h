/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:48:57 by ncastell          #+#    #+#             */
/*   Updated: 2023/06/14 17:19:14 by ncastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <string.h> /*BORRAR*/

typedef struct s_node
{
    struct s_node   *next;
    struct s_node   *previous;
    int             num;
}   t_node;

typedef struct s_stack
{
    t_node  *first;
    int     size;
}   t_stack;

int     main(int argc, char **argv);
void    start_stack(t_stack *a, t_stack *b);

#endif
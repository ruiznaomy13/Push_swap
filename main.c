/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:48:40 by ncastell          #+#    #+#             */
/*   Updated: 2023/06/14 19:11:24 by ncastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv){
    t_stack a;
    t_stack b;
    int     i;
    // int     j;
    // char    *num;

    i = 1;
    if (argc < 2)
        ft_error(1, &a);
    else {
        start_stack(&a, &b);
        while(i < argc)
        {
            printf("argv %d %s\n", i, argv[i]);
            args_checker(argv[i]);
            // printf("%s ", argv[i]);
            i++;
        }
    }
}
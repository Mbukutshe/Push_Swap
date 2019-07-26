/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:58:33 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/26 23:15:17 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int c, char **argv)
{

	stack_a  *stack;
    stack_b  *temp;
    char            **res;
    static int      size;

    if ((stack = malloc(sizeof(stack_a))) == NULL)
        return (0);
    if ((temp = malloc(sizeof(stack_b))) == NULL)
        return (0);
    if (c > 1 && ft_strequ(argv[1], "") == 0)
    {
        if (stack != NULL)
        {
            res = ft_strsplit(argv[1], ' ');
            if (ft_handle(stack, res, &size))
            {
                free(stack);
                free(temp);
                return(0);
            }
			ft_generate_a(stack, temp, &size);
		}
	}
	free(stack);
	free(temp);
	return (0);
}

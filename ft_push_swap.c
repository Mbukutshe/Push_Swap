/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:58:33 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/17 09:33:35 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int c, char **argv)
{

	static stack_a  *stack;
    static stack_b  *temp;
    char            **res;
    int             size;

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
                return (0);
            }
			ft_putendl("rra");
			ft_putendl("pb");
			ft_putendl("sa");
			ft_putendl("rra");
			ft_putendl("pa");
		}
	}
	free(stack);
	free(temp);
	return (0);
}

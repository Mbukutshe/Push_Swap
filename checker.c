/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:21:47 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/14 16:21:22 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int c, char **argv)
{
	static stack_a	*stack;
	static stack_b	*temp;
	char			**res;
	static char		*instr;
	static int		i;
	int				size;

	if ((stack = malloc(sizeof(stack_a))) == NULL)
		return (0);
	if ((temp = malloc(sizeof(stack_b))) == NULL)
		return (0);
	if (c > 1 && ft_strequ(argv[1], "") == 0)
	{
		i = 1;
		if (stack != NULL)
		{
			res = ft_strsplit(argv[1], ' ');
			if (ft_handle(stack, res, &size))
			{
				free(stack);
				free(temp);
				return (0);
			}
			while (get_next_line(0, &instr) == 1)
			{
				if (i == 1)
				{
					if (ft_handle_instr(ft_instr(instr)))
					{
						ft_putendl_fd("Error", 2);
						return (0);
					}
				}
				else
				{	
					if (ft_handle_instr(instr))
					{
						ft_putendl_fd("Error", 2);
						return (0);
					}
				}
				ft_follow_instr(&stack, &temp, instr, size);
				ft_print(&stack, size);
				i++;
			}
		}
	}
	free(stack);
	free(temp);
	return (0);
}

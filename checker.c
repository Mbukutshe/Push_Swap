/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:21:47 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/26 23:09:37 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int c, char **argv)
{
	stack_a	*stack;
	stack_b	*temp;
	char			**res;
	static char		*instr;
	static int		i;
	static int		size;

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
				if (i == 1 && ft_strlen(instr) > 2)
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
				ft_putendl(instr);
				ft_follow(&stack, &temp, instr, &size);
				i++;
			}
			if (ft_sorted(&stack, size))
				ft_putendl("OK");
			else
				ft_putendl("KO");
		}
	}
	ft_print(&stack, size);
	free(stack);
	free(temp);
	return (0);
}

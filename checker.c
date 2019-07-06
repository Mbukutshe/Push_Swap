/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:21:47 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/05 23:23:06 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	static stack_a	*stack;
	static stack_b	*temp;
	char			**res;

	if ((stack = malloc(sizeof(stack_a))) == NULL)
		return (0);
	if ((temp = malloc(sizeof(stack_b))) == NULL)
		return (0);
	if (c == 2)
	{
		if (!stack)
		{
			res = ft_split(argv[1], ' ');
			if (ft_check(res))
			{
				ft_putendl("Error");
				return (0);
			}
			ft_populate(stack, res);
			if (ft_dup(stack))
			{
				ft_putendl("Error");
				return (0);
			}
		}
	}
	free(stack);
	free(temp);
	return (0);
}

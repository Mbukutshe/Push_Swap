/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:58:33 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 15:14:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int c, char **av)
{
	t_stack			*a;
	t_stack			*b;
	char			**res;
	static int		size;

	if ((a = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (0);
	b = NULL;
	res = NULL;
	if (c > 1 && ft_is_right(av))
	{
		res = ft_core_process(c, res, av);
		if (ft_handle(a, res, &size))
		{
			ft_free(&a, &b);
			return (0);
		}
		ft_generate_a(&a, &b, &size);
	}
	ft_free(&a, &b);
	return (0);
}

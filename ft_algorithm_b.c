/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:22:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/21 14:27:37 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_generate_b(stack_a *a, stack_b *b, int *size)
{
	while (ft_sorted_desc(b) == 0)
	{
		if (ft_is_less(b))
			ft_putendl("rb");
		if (ft_is_bigger(b) && !ft_sorted_desc(b))
		{
			ft_putendl("pa");
			ft_push_a(&a, &b, size);
		}
		if (ft_is_bigger(b))
			ft_putendl("rra");
		else if (ft_first_state(b) == 0)
			ft_putendl("sb");
	}
	while (ft_list_size(b) > 1)
	{
		ft_putendl("pa");
		ft_push_a(&a, &b, size);
	}
}

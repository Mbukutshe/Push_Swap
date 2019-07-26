/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:22:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/26 12:07:22 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_generate_b(stack_a *a, stack_b *b, int *size)
{
	int		s;

		s = stack_b_size("") - 1;
		if (ft_is_less(&b))
		{
			ft_putendl("rb");
			ft_shift_b(&b, s);
		}
		if (ft_is_bigger(&b, s))
		{
			ft_putendl("pa");
			ft_push_a(&a, &b, size);
		}
		if (ft_is_bigger(&b, s))
		{
			ft_putendl("rrb");
			ft_reverse_b(&b, s);
		}
		if (ft_first_state(&b, s))
		{
			ft_putendl("sb");
			ft_swap_b(&b);
		}
	while (ft_list_size(b) > 0)
	{
		s = stack_b_size("");
		ft_putendl("pa");
		ft_push_a(&a, &b, &s);
	}
}

int				ft_is_les(stack_b **head, int s)
{
	stack_b *ptr;
	stack_b *c;

	ptr = *head;
	if (s > 1)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		c = *head;
		while (c->next != NULL)
		{
			if (c->next->v < ptr->v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:09:22 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/15 16:00:32 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_shift_a(stack_a **a, int s)
{
	stack_a *ptr;

	ptr = *a;
	if (s > 1)
	{
		while (s-- > 1)
		{
			ft_swap_a(&ptr);
			ptr = ptr->next;
		}
	}
}

void		ft_shift_b(stack_b **b, int s)
{
	stack_b *ptr;

	ptr = *b;
	if (s > 1)
	{
		while (s-- > 1)
		{
			ft_swap_b(&ptr);
			ptr = ptr->next;
		}
	}
}

void		ft_shift_both(stack_a **a, stack_b **b, int s)
{
	ft_shift_a(a, s);
	ft_shift_b(b, stack_b_size(""));
}

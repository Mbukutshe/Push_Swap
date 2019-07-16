/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 08:11:38 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/16 09:47:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_swap_a(stack_a **a)
{
	stack_a **ptr;
	int		temp;
	int		size;

	size = ft_list_size(*a);
	if (size > 1)
	{
		ptr = a;
		temp = (*ptr)->v;
		(*ptr)->v = (*ptr)->next->v;
		(*ptr)->next->v = temp;
	}
}

void		ft_swap_b(stack_b **b)
{
	stack_b **ptr;
	int		temp;

	if (stack_b_size("") > 1)
	{
		ptr = b;
		temp = (*ptr)->v;
		(*ptr)->v = (*ptr)->next->v;
		(*ptr)->next->v = temp;
	}
}

void		ft_swap_both(stack_a *a, stack_b *b)
{
	ft_swap_a(&a);
	ft_swap_b(&b);
}

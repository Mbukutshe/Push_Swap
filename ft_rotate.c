/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:09:22 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:32:32 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_shift_a(t_stack **a, int s)
{
	t_stack		*ptr;

	ptr = *a;
	if (s > 1)
	{
		while (ptr->next != NULL)
		{
			ft_swap_a(&ptr, s);
			ptr = ptr->next;
		}
	}
}

void		ft_shift_b(t_stack **b, int s)
{
	t_stack		*ptr;

	ptr = *b;
	if (s > 2)
	{
		while (ptr->next != NULL)
		{
			ft_swap_b(&ptr);
			ptr = ptr->next;
		}
	}
}

void		ft_shift_both(t_stack **a, t_stack **b, int s)
{
	ft_shift_a(a, s);
	ft_shift_b(b, stack_b_size(""));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:16:49 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 11:46:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rra(t_stack **a, int *size)
{
	if (ft_is_less(*a, *size) && *size > 1)
	{
		if (ft_sorted(a, *size))
			return ;
		ft_putendl("rra");
		ft_reverse_a(a, *size);
	}
	return ;
}

void		ft_ra(t_stack **a, int *size)
{
	if (ft_is_bigger(*a, *size) && *size > 1)
	{
		if (ft_sorted(a, *size))
			return ;
		ft_putendl("ra");
		ft_shift_a(a, *size);
	}
	return ;
}

void		ft_pb(t_stack **a, t_stack **b, int *size)
{
	if ((ft_is_less(*a, *size) || ft_must_push(*a, *size)) && *size > 0)
	{
		ft_ra(a, size);
		ft_rra(a, size);
		if (ft_sorted(a, *size))
			return ;
		ft_putendl("pb");
		ft_push_b(a, b, size);
		ft_execute_both(a, b, size);
		ft_sb(b);
	}
	return ;
}

void		ft_sa(t_stack **a, int *size)
{
	if (ft_first_state(*a, *size) && !ft_must_push(*a, *size) && *size > 1)
	{
		ft_ra(a, size);
		ft_rra(a, size);
		if (ft_sorted(a, *size))
			return ;
		ft_swap_a(a, *size);
		ft_putendl("sa");
	}
	return ;
}

int			ft_find_biggest(t_stack *ptr, int v)
{
	while (ptr->next != NULL)
	{
		if (v < ptr->next->v)
			v = ptr->next->v;
		ptr = ptr->next;
	}
	return (v);
}

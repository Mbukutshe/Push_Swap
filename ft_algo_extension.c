/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_extension.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:28:09 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 11:19:16 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_another_processes(t_stack **a, t_stack **b, int *size)
{
	ft_execute_both(a, b, size);
	ft_sa(a, size);
}

int			ft_execute_rra(t_stack **a, int *size)
{
	if (*size > 1)
	{
		if (ft_is_less(*a, *size))
			return (1);
	}
	return (0);
}

int			ft_execute_rrb(t_stack **b, int size)
{
	if (size > 1)
	{
		if (ft_is_les(*b))
			return (1);
	}
	return (0);
}

int			ft_execute_a(t_stack **a, int *size)
{
	if (*size > 1)
	{
		if (ft_first_state(*a, *size) && ft_must_push(*a, *size))
			return (1);
	}
	return (0);
}

int			ft_execute_b(t_stack **b, int s)
{
	if (s > 1)
	{
		if (ft_how_big(*b))
			return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_b_extension.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:52:32 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 11:19:35 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_put_back(t_stack **a, t_stack **b, int *size)
{
	int		c;

	c = stack_b_size("");
	while (c > 0)
	{
		ft_pa(a, b, size);
		ft_execute_both(a, b, size);
		ft_normal_sa(a, size);
		ft_sb(b);
		if (!ft_sorted(a, *size))
			ft_generate_a(a, b, size);
		c--;
	}
	return ;
}

void		ft_rb(t_stack **b)
{
	int		s;

	s = stack_b_size("");
	if (ft_is_les(*b) && s > 1)
	{
		if (!ft_sorted_desc(*b))
			return ;
		ft_putendl("rb");
		ft_shift_b(b, s);
	}
	return ;
}

void		ft_pa(t_stack **a, t_stack **b, int *size)
{
	if (stack_b_size("") > 0)
	{
		ft_putendl("pa");
		ft_push_a(a, b, size);
	}
	return ;
}

void		ft_pasa(t_stack **a, t_stack **b, int *size)
{
	if (ft_pa_sa(*a, *b) && stack_b_size("") > 1)
	{
		if (ft_first_state(*a, *size) && *size > 1)
		{
			ft_swap_a(a, *size);
			ft_putendl("sa");
		}
	}
	return ;
}

void		ft_rrb(t_stack **b)
{
	int		s;

	s = stack_b_size("");
	if (ft_is_big(*b) && s > 1)
	{
		if (!ft_sorted_desc(*b))
			return ;
		ft_putendl("rrb");
		ft_reverse_b(b, s);
	}
	return ;
}

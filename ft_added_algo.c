/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_added_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:41:59 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 11:27:31 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sb(t_stack **b)
{
	if (ft_how_big(*b) && stack_b_size("") > 1)
	{
		if (!ft_sorted_desc(*b))
			return ;
		ft_putendl("sb");
		ft_swap_b(b);
	}
}

void		ft_normal_sa(t_stack **a, int *size)
{
	if (ft_first_state(*a, *size))
	{
		ft_ra(a, size);
		ft_rra(a, size);
		ft_swap_a(a, *size);
		ft_putendl("sa");
	}
}

int			ft_get_mid(int size)
{
	if ((size % 2) == 0)
		return (size / 2);
	else
		return ((size / 2) + 1);
}

void		ft_get_biggest(t_stack **a)
{
	t_stack		*ptr;
	int			back;
	int			front;
	int			v;

	ptr = *a;
	front = 0;
	back = 0;
	if (stack_b_size("") == 0)
		return ;
	v = ft_find_biggest(ptr, ptr->v);
	ptr = *a;
	while (ptr->next && ptr->v != v)
	{
		front++;
		ptr = ptr->next;
	}
	ptr = ptr->next;
	while (ptr)
	{
		back++;
		ptr = ptr->next;
	}
	ft_put_top(a, front, back);
}

void		ft_put_top(t_stack **b, int front, int back)
{
	if (front > back || back == 0)
	{
		while (back-- > -1)
		{
			if (!ft_sorted_desc(*b))
				return ;
			ft_reverse_b(b, stack_b_size(""));
			ft_putendl("rrb");
		}
	}
	else
	{
		while (front-- > 0)
		{
			if (!ft_sorted_desc(*b))
				return ;
			ft_shift_b(b, stack_b_size(""));
			ft_putendl("rb");
		}
	}
}

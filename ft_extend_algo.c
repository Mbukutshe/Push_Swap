/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extend_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:01:16 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 11:21:04 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_is_bigger(t_stack *head, int s)
{
	t_stack *ptr;
	t_stack *c;

	ptr = head;
	c = head;
	if (s > 1)
	{
		while (c->next != NULL)
		{
			if (c->next->v > ptr->v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

void		ft_put_all_back(t_stack **a, t_stack **b, int *size)
{
	int		i;

	i = stack_b_size("");
	while (i > 0)
	{
		ft_get_biggest(b);
		ft_push_a(a, b, size);
		ft_putendl("pa");
		ft_another_processes(a, b, size);
		i--;
	}
}

void		ft_execute_both(t_stack **a, t_stack **b, int *size)
{
	if (!(*size > 1 && stack_b_size("") > 1))
		return ;
	if (ft_execute_ra(a, size) && ft_execute_rb(b, stack_b_size("")))
	{
		if (ft_sorted(a, *size) || !ft_sorted_desc(*b))
			return ;
		ft_putendl("rr");
		ft_shift_both(a, b, *size);
	}
	if (ft_execute_rra(a, size) && ft_execute_rrb(b, stack_b_size("")))
	{
		if (ft_sorted(a, *size) || !ft_sorted_desc(*b))
			return ;
		ft_putendl("rrr");
		ft_reverse_both(a, b, *size);
	}
	if (ft_execute_a(a, size) && ft_execute_b(b, stack_b_size("")))
	{
		if (ft_sorted(a, *size) || !ft_sorted_desc(*b))
			return ;
		ft_putendl("ss");
		ft_swap_both(a, b, *size);
	}
	return ;
}

int			ft_execute_ra(t_stack **a, int *size)
{
	if (*size > 1)
	{
		if (ft_is_bigger(*a, *size))
			return (1);
	}
	return (0);
}

int			ft_execute_rb(t_stack **b, int size)
{
	if (size > 1)
	{
		if (ft_is_big(*b))
			return (1);
	}
	return (0);
}

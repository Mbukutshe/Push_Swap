/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:09:14 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:53:06 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_generate_a(t_stack **a, t_stack **b, int *size)
{
	if (!ft_sorted(a, *size) && *size >= 50)
		ft_sort_100(a, b, size);
	while (ft_sorted(a, *size) == 0)
	{
		ft_execute_both(a, b, size);
		ft_ra(a, size);
		ft_rra(a, size);
		ft_pb(a, b, size);
		ft_another_processes(a, b, size);
	}
	ft_generate_b(a, b, size);
	return ;
}

int			ft_is_less(t_stack *head, int s)
{
	t_stack *ptr;
	t_stack *c;

	ptr = head;
	if (s > 1)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		c = head;
		while (c->next != NULL)
		{
			if (c->next->v < ptr->v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

int			ft_last_less(t_stack *head)
{
	t_stack		*ptr;
	t_stack		*c;
	int			size;

	ptr = head;
	size = ft_list_size(head);
	if (size > 1)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		c = head;
		if (c->v > ptr->v)
			return (1);
	}
	return (0);
}

int			ft_must_push(t_stack *head, int s)
{
	t_stack		*ptr;

	ptr = head;
	if (s > 1)
	{
		if (ptr->v < ptr->next->v)
			return (1);
	}
	return (0);
}

int			ft_first_state(t_stack *head, int size)
{
	t_stack *ptr;

	ptr = head;
	if (size > 1)
	{
		if (ptr->v > ptr->next->v)
			return (1);
	}
	return (0);
}

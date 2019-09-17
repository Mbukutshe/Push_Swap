/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:22:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:49:55 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_generate_b(t_stack **a, t_stack **b, int *size)
{
	while (ft_sorted_desc(*b))
	{
		ft_execute_both(a, b, size);
		ft_rrb(b);
		ft_rb(b);
		ft_pa(a, b, size);
		ft_pasa(a, b, size);
		ft_sb(b);
		ft_put_back(a, b, size);
		ft_generate_a(a, b, size);
	}
	ft_put_back(a, b, size);
	return ;
}

int			ft_pa_sa(t_stack *a, t_stack *b)
{
	t_stack		*ptr_a;
	t_stack		*ptr_b;

	ptr_a = a;
	ptr_b = b;
	if (stack_b_size("") > 1)
	{
		if (ptr_a->v < ptr_b->v)
			return (1);
	}
	return (0);
}

int			ft_is_les(t_stack *head)
{
	t_stack		*ptr;
	t_stack		*c;
	int			s;
	//int			size;

	ptr = head;
	s = stack_b_size("");
	if (s > 1)
	{
		//size = s;
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

int			ft_how_big(t_stack *head)
{
	t_stack		*ptr;
	int			s;

	ptr = head;
	s = stack_b_size("");
	if (s > 2)
	{
		if (ptr->v < ptr->next->v)
			return (1);
	}
	return (0);
}

int			ft_is_big(t_stack *head)
{
	t_stack		*ptr;
	t_stack		*c;
	int			s;

	ptr = head;
	s = stack_b_size("");
	if (s > 1)
	{
		c = head->next;
		while (c != NULL)
		{
			if (c->v < ptr->v)
				return (1);
			c = c->next;
		}
	}
	return (0);
}

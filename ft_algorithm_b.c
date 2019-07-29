/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:22:07 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/29 14:12:48 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_generate_b(stack_a *a, stack_b *b, int *size)
{
	int		s;
	int		c;

	while (ft_sorted_desc(&b) == 0)
	{
		s = stack_b_size("");
		if (ft_is_les(&b) && stack_b_size("") > 1)
		{
			ft_putendl("rb");
			ft_shift_b(&b, s);
		}
		if (ft_is_big(&b))
		{
			ft_putendl("pa");
			ft_push_a(&a, &b, size);
		}
		if (ft_pa_sa(&a, &b))
		{
			if (ft_first_state(&a, *size))
        	{
            	ft_swap_a(&a, *size);
            	ft_putendl("sa");
        	}
		}
		if (ft_is_big(&b) && (stack_b_size("") > 1))
		{
			ft_putendl("rrb");
			ft_reverse_b(&b, s);
		}
		if (ft_how_big(&b))
		{
			ft_putendl("sb");
			ft_swap_b(&b);
		}
		ft_generate_a(a, b, size);
	}
	c = stack_b_size("");
	while (c > 1)
	{
		s = stack_b_size("");
		ft_putendl("pa");
		ft_push_a(&a, &b, &s);
		if (ft_first_state(&a, *size))
        {
            ft_swap_a(&a, *size);
            ft_putendl("sa");
        }
		if (!ft_sorted(&a, *size))
			ft_generate_a(a, b, size);
		c--;
	}
}

int				ft_pa_sa(stack_a **a, stack_b **b)
{
	stack_a *ptr_a;
	stack_b *ptr_b;

	ptr_a = *a;
	ptr_b = *b;
	if (stack_b_size("") > 1)
	{
		if (ptr_a->v < ptr_b->v)
			return (1);
	}
	return (0);
}

int				ft_is_les(stack_b **head)
{
	stack_b *ptr;
	stack_b *c;
	int		s;
	int		size;

	ptr = *head;
	s = stack_b_size("");
	if (s > 1)
	{
		size = s;
		while (s-- > 1)
			ptr = ptr->next;
		c = *head;
		while (size-- > 1)
		{
			if (c->v < ptr->v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

int			ft_how_big(stack_b **head)
{
	stack_b *ptr;
	int		s;

	ptr = *head;
	s = stack_b_size("");
	if (s > 1)
	{
		if (ptr->v < ptr->next->v)
			return (1);
	}
	return (0);
}

int			ft_is_big(stack_b **head)
{
	stack_b *ptr;
	stack_b *c;
	int		s;

	ptr = *head;
	s = stack_b_size("");
	if (s > 1)
	{
		c = ptr->next;
		while (s-- > 1)
		{
			if (c->v < ptr->v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

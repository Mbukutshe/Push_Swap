/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:31:56 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:21:58 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push_a(t_stack **a, t_stack **b, int *s)
{
	t_stack		*pa;
	t_stack		*pb;
	int			size;

	if (stack_b_size("") > 0)
	{
		pb = *b;
		pa = malloc(sizeof(t_stack));
		pa->v = pb->v;
		pa->next = *a;
		*a = pa;
		ft_remove_first(&*b);
		size = stack_b_size("minus");
		stack_a_size(s, "add");
	}
	return ;
}

void		ft_push_b(t_stack **a, t_stack **b, int *s)
{
	t_stack		*pa;
	t_stack		*pb;
	int			size;

	if (*s > 1)
	{
		pa = *a;
		pb = malloc(sizeof(t_stack));
		pb->v = pa->v;
		pb->next = *b;
		*b = pb;
		ft_remove_first(&*a);
		stack_a_size(s, "minus");
		size = stack_b_size("add");
	}
	return ;
}

void		ft_push_both(t_stack *a, t_stack *b, int *s)
{
	ft_push_a(&a, &b, s);
	ft_push_b(&a, &b, s);
	return ;
}

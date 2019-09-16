/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:33:30 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:34:32 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_reverse_a(t_stack **a, int s)
{
	t_stack		*ptr;

	ptr = *a;
	if (s > 2)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ft_add_first(&*a, ptr->v);
		ft_remove_last(*a, s);
	}
}

void		ft_reverse_b(t_stack **b, int s)
{
	t_stack		*ptr;

	ptr = *b;
	if (s > 2)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ft_add_first(&*b, ptr->v);
		ft_remove_last(*b, s);
	}
}

void		ft_reverse_both(t_stack **a, t_stack **b, int s)
{
	ft_reverse_a(a, s);
	ft_reverse_b(b, stack_b_size(""));
}

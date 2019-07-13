/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:09:22 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/13 16:39:17 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_shift_a(stack_a **a)
{
	stack_a *ptr;
	int		value;

	ptr = *a;
	if (ptr)
	{
		value = ptr->v;	
		while (ptr->next->next == NULL)
		{
			ptr->v = ptr->next->v;
			ptr = ptr->next;
		}
		ptr->v = value;
	}
/*	(*ptr)->next = malloc(sizeof(stack_a));
	(*ptr)->next->v = value;
	(*ptr)->next->next = NULL;
	*ptr = (*a)->next;
	*a = *ptr;*/
	free(ptr);
}

void		ft_shift_b(stack_b **b)
{
	stack_b *ptr;
	int		value;

	ptr = *b;
	value = ptr->v;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = malloc(sizeof(stack_b));
	ptr->next->v = value;
	ptr->next->next = NULL;
	ptr = (*b)->next;
	*b = ptr;
	free(ptr);
}

void		ft_shift_both(stack_a **a, stack_b **b)
{
	ft_shift_a(a);
	ft_shift_b(b);
}

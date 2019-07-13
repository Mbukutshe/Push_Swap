/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:31:56 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/13 16:39:14 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push_a(stack_a **a, stack_b **b)
{
	stack_a *pa;
	stack_a **pb;

	pb = b;
	*a = NULL;
	pa = malloc(sizeof(stack_a));
	pa->v = (*pb)->v;
	pa->p = (*pb)->p;
	pa->next = *a;
	*a = pa;
	ft_remove_first(b);
	return ;
}

void		ft_push_b(stack_a **a, stack_b **b)
{
	stack_a **pa;
	stack_b *pb;

	pa = a;
	*b = NULL;
	pb = malloc(sizeof(stack_b));
	pb->v = (*pa)->v;
	pb->p = (*pa)->p;
	pb->next = *b;
	*b = pb;
	ft_remove_first(a);
	return ;
}

void		ft_remove_first(struct node **head)
{
	struct node *ptr;

	ptr = NULL;
	ptr = (*head)->next;
	*head = ptr;
	return ;
}

void		ft_push_both(stack_a **a, stack_b **b)
{
	ft_push_a(a, b);
	ft_push_b(a, b);
	return ;
}

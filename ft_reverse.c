/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:33:30 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/10 11:23:27 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_reverse_a(stack_a **a)
{
	stack_a *ptr;
	stack_a	*current;
	int		v;

	current = *a;
	while (current->next->next != NULL)
		current = current->next;
	v = current->next->v;
	free(current->next);
	current->next = NULL;
	ptr = malloc(sizeof(stack_a));
	ptr->v = v;
	ptr->next = *a;
	*a = ptr;
	free(ptr);
	free(current);
}

void		ft_reverse_b(stack_b **b)
{
	stack_b *ptr;
	stack_b	*current;
	int		v;

	current = *b;
	while (current->next->next != NULL)
		current = current->next;
	v = current->next->v;
	free(current->next);
	current->next = NULL;
	ptr = malloc(sizeof(stack_b));
	ptr->v = v;
	ptr->next = *b;
	*b = ptr;
	free(ptr);
	free(current);
}

void		ft_resverse_both(stack_a **a, stack_b **b)
{
	ft_reverse_a(a);
	ft_reverse_b(b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:31:56 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/04 09:05:10 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push_a(stack_a *a, stack_b *b)
{
	stack_a *ptr_a;
	stack_a *ptr_b;

	ptr_b = b;
	ptr_a = malloc(sizeof(stack_a));
	ptr_a->v = ptr_b->v;
	ptr_a->next = *a;
	*a = ptr_a;
	ft_memdel(&ptr_a);
	ft_memdel(&ptr_b);

}

void		ft_push_b(stack_a *b, stack_b *b)
{
	stack_a *ptr_a;
	stack_b *ptr_b;

	ptr_a = a;
	ptr_b = malloc(sizeof(stack_b));
	ptr_b->v = ptr_a->v;
	ptr_b->next = *b;
	*b = ptr_b;
	ft_memdel(&ptr_b);
	ft_memdel(&ptr_a);
}

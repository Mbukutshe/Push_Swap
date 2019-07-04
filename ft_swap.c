/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 08:11:38 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/04 08:46:05 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_swap_a(stack_a *a)
{
	stack_a *ptr;
	int		temp;

	ptr = a;
	temp = ptr->next->v;
	ptr->next->v = ptr->next->next->v;
	ptr->next->next->v = temp;
	free(ptr);
}

void		ft_swap_b(stack_b *b)
{
	stack_b *ptr;
	int		temp;

	ptr = b;
	temp = ptr->next->v;
	ptr->next->v = ptr->next->next->v;
	ptr->next->next->v = temp;
	free(ptr);
}

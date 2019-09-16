/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 08:11:38 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:26:23 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_swap_a(t_stack **a, int s)
{
	t_stack		*ptr;
	int			temp;

	ptr = *a;
	if (s > 1)
	{
		temp = ptr->v;
		ptr->v = ptr->next->v;
		ptr->next->v = temp;
	}
	return ;
}

void		ft_swap_b(t_stack **b)
{
	t_stack		*ptr;
	int			temp;

	if (stack_b_size("") > 1)
	{
		ptr = *b;
		temp = ptr->v;
		ptr->v = ptr->next->v;
		ptr->next->v = temp;
	}
	return ;
}

void		ft_swap_both(t_stack **a, t_stack **b, int s)
{
	ft_swap_a(a, s);
	ft_swap_b(b);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_segments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:06:02 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 11:47:03 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_first_seg(t_stack *a, int **r, int *min, int *max)
{
	int		s;

	s = ft_list_size(a);
	*min = ft_get_min(a);
	*max = ft_get_max(a);
	if (s <= 100)
		*r = ft_create_range(*min, *max, s);
	else
		*r = ft_range_500(*min, *max, s);
}

void		ft_exec_ra_seg(t_stack **a, int s, int i)
{
	while (i-- > 1)
	{
		ft_shift_a(a, s);
		ft_putendl("ra");
	}
}

void		ft_exec_rra_seg(t_stack **a, int s, int i)
{
	while (i-- > 0)
	{
		ft_reverse_a(a, s);
		ft_putendl("rra");
	}
}

int			ft_put_at_top(t_stack **a, int s, int i)
{
	if (ft_get_mid(s) >= i)
	{
		ft_exec_ra_seg(a, s, i);
		i = 0;
	}
	else
	{
		ft_exec_rra_seg(a, s, i);
		i = 0;
	}
	return (i);
}

t_stack		*ft_put_to_b_seg(t_stack **a, t_stack **b, int *s)
{
	ft_get_biggest(b);
	ft_push_b(a, b, s);
	ft_putendl("pb");
	return (*a);
}

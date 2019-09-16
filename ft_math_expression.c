/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_expression.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:48:30 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/13 15:36:31 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_get_max(t_stack *a)
{
	t_stack		*ptr;
	int			v;

	ptr = a;
	v = ptr->v;
	while (ptr)
	{
		if (v < ptr->v)
			v = ptr->v;
		ptr = ptr->next;
	}
	return (v);
}

int		ft_get_min(t_stack *a)
{
	t_stack	*ptr;
	int		v;

	ptr = a;
	v = ptr->v;
	while (ptr)
	{
		if (v > ptr->v)
			v = ptr->v;
		ptr = ptr->next;
	}
	return (v);
}

int		*ft_create_range(int min, int max, int size)
{
	int		i;
	int		r;
	int		max_f;
	int		*range;

	range = NULL;
	if (size >= 50 && size <= 100)
	{
		i = 0;
		range = (int *)malloc(sizeof(int) * 5);
		r = (max - min) / 5;
		r += ((max - min) % 5 == 0) ? 0 : 1;
		max_f = r + (min - 1);
		range[i] = max_f;
		if (max_f < 0)
			max_f = 19;
		while (++i < 4)
			range[i] = range[i - 1] + max_f;
		range[i] = max;
	}
	return (range);
}

int		*ft_range_500(int min, int max, int size)
{
	int		i;
	int		r;
	int		max_f;
	int		*range;

	range = NULL;
	if (size > 100)
	{
		i = 0;
		range = (int *)malloc(sizeof(int) * 11);
		r = (max - min) / 11;
		r += ((max - min) % 5 == 0) ? 0 : 1;
		max_f = r + (min - 1);
		range[i] = max_f;
		if (max_f < 0)
			max_f = 45;
		while (++i < 10)
			range[i] = range[i - 1] + max_f;
		range[i] = max;
	}
	return (range);
}

void	ft_sort_100(t_stack **a, t_stack **b, int *size)
{
	int		max;
	int		min;
	int		*range;
	int		i;
	t_stack	*ptr;

	ft_first_seg(*a, &range, &min, &max);
	while (*size > 1)
	{
		ptr = *a;
		i = 0;
		while (ptr && ++i)
		{
			if (ptr->v >= min && ptr->v < *range)
			{
				i = ft_put_at_top(a, *size, i);
				ptr = ft_put_to_b_seg(a, b, size);
			}
			else
				ptr = ptr->next;
		}
		min = *range;
		range++;
	}
	ft_put_all_back(a, b, size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:05:35 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/29 15:55:47 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_sorted(stack_a **head, int s)
{
	stack_a	*ptr;
	stack_a	*c;
	int		size;
	int		count;
	int		val;

	count = s;
	ptr = *head;
	val = ptr->v;
	if (ptr)
	{
		while (s-- > 0)
		{
			c = ptr;
			size = s;
			while (size-- > 0)
			{
				if (c->next->v < val)
				{
					return (0);
				}
				c = c->next;
			}
			ptr = ptr->next;
			val = ptr->v;
		}
	}
	return (1);
}

int			ft_sorted_desc(stack_b **head)
{
	stack_b *ptr;
	stack_b *c;
	int		v;
	int		size;
	int		i;

	ptr = *head;
	size = stack_b_size("");
	if (size > 1)
	{
		v = ptr->v;
		while (size-- > 1)
		{
			c = ptr->next;
			i = size;
			while (i-- > 1)
			{
				if (c->next->v > v)
					return (0);
				c = c->next;
			}
			ptr = ptr->next;
			v = ptr->v;
		}
	}
	return (1);
}

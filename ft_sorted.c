/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:05:35 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/17 09:23:37 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_sorted(stack_a *head)
{
	stack_a	*ptr;
	stack_a *c;
	int		size;

	size = 0;
	ptr = head;
	size = ft_list_size(head);
	if (size > 0)
	{
		while (ptr->next != NULL)
		{
			c = ptr;
			while (c->next != NULL)
			{
				if (c->next->v < ptr->v)
					return (0);
				c = c->next;
			}
			ptr = ptr->next;
		}
	}
	else
		return (0);
	return (1);
}

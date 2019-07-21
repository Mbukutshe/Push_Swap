/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:09:14 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/21 14:27:40 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_generate_a(stack_a *a, stack_b * b, int *size)
{
	while (ft_sorted(a) == 0)
	{
		if (ft_is_less(a))
			ft_putendl("rra");
		if (ft_is_less(a) && !ft_sorted(a))
		{
			ft_putendl("pb");
			ft_push_b(&a, &b, size);
		}
		if (ft_is_bigger(a))
			ft_putendl("ra");
		else if (ft_first_state(a))
			ft_putendl("sa");
	}
	ft_pu
	ft_generate_b(a, b, size);
}

int			ft_is_less(struct node *head)
{
	struct node *ptr;
	struct node *c;
	int			size;
	int			v;

	ptr = head;
	size = ft_list_size(head);
	if (size > 1)
	{
		while (ptr->next->next != NULL)
			ptr = ptr->next;
		v = ptr->v;
		c = head;
		while (c->next != NULL)
		{
			if (c->v < v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

int			ft_first_state(struct node *head)
{
	struct node *ptr;
	int			size;

	ptr = head;
	size = ft_list_size(head);
	if (size > 1)
	{
		if (ptr->v > ptr->next->v)
			return (1);
	}
	return (0);
}

int			ft_is_bigger(struct node *head)
{
	struct node *ptr;
	struct node *c;
	int			size;
	int			v;

	ptr = head;
	size = ft_list_size(head);
	if (size > 1)
	{
		v = ptr->v;
		c = ptr->next;
		while (c->next != NULL)
		{
			if (c->v > v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:09:14 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/08/02 13:42:17 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_generate_a(stack_a *a, stack_b *b, int *size)
{
	while (ft_sorted(&a, *size) == 0)
	{
		if (ft_is_less(&a, *size))
		{
			if (ft_sorted(&a, *size))
                break;
			ft_putendl("rra");
			ft_reverse_a(&a, *size);
		}
		if ((ft_is_less(&a, *size) || ft_must_push(&a, *size)) && *size > 3)
		{
			if (ft_sorted(&a, *size))
                break;
			ft_putendl("pb");
			ft_push_b(&a, &b, size);
		}
		if (ft_is_bigger(&a, *size))
		{
			if (ft_sorted(&a, *size))
                break;
			ft_putendl("ra");
			ft_shift_a(&a, *size);
		}
		if (ft_first_state(&a, *size) && !ft_must_push(&a, *size))
		{
			if (ft_sorted(&a, *size))
                break;
			ft_swap_a(&a, *size);
			ft_putendl("sa");
		}
	}
	ft_generate_b(a, b, size);
}

int			ft_is_less(struct node **head, int s)
{
	struct node *ptr;
	struct node *c;
//	int			s;
	int			v;
	int			i;

	ptr = *head;
//	s = ft_list_size(*head);
	i = s;
	if (s > 1)
	{
		while (s-- > 1)
			ptr = ptr->next;
		v = ptr->v;
		c = (*head)->next;
		while (i-- > 1)
		{
			if (c->v < v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

int			ft_last_less(stack_a **head)
{
	stack_a *ptr;
	stack_a *c;
	int		size;
	int		v;

	ptr = *head;
	size = ft_list_size(*head);
	if (size > 1)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		v = ptr->v;
		c = *head;
		if (c->v > v)
			return (1);
	}
	return (0);
}

int			ft_must_push(stack_a **head, int s)
{
	stack_a *ptr;

	ptr = *head;
	
	if (s > 1)
	{
		if (ptr->v < ptr->next->v)
			return (1);
	}
	return (0);
}

int			ft_first_state(struct node **head, int size)
{
	struct node **ptr;

	ptr = head;
	if (*ptr && size > 1)
	{
		if ((*ptr)->v > (*ptr)->next->v)
			return (1);
	}
	return (0);
}

int			ft_is_bigger(struct node **head, int s)
{
	struct node *ptr;
	struct node *c;
	int			v;

	ptr = *head;
	if (ptr)
	{
		v = ptr->v;
		c = ptr;
		while (s-- > 0)
		{
			if (c->v > v)
				return (0);
			c = c->next;
		}
	}
	return (1);
}

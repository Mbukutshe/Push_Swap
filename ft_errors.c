/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:40:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/11 09:40:54 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_check(char **stack)
{
	int		i;

	i = 0;
	while (stack[i])
	{
		if (ft_range(stack[i]) == 0 || ft_parse_int(stack[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int			ft_parse_int(char *value)
{
	if (ft_atoi(value))
		return (1);
	return (0);
}

int			ft_range(char *value)
{
	int		num;

	num = ft_atoi(value);
	if (ft_strequ(value, ft_itoa(num)))
		return (1);
	return (0);
}

int			ft_dup(stack_a *head)
{
	stack_a *c;
	stack_a	*ptr;
	int		i;
	int		size;
	int		val;

	i = 0;
	ptr = head;
	val = ptr->v;
	size = ft_list_size(ptr);
	while (i < size)
	{
		c = head;
		while (c->next != NULL)
		{
			if ((c->v == val) && !(c->p == ptr->p))
				return (1);
			c = c->next;
		}
		ptr = ptr->next;
		val = ptr->v;
		i++;
	}
	return (0);
}

int			ft_exist(char *str)
{
	if (ft_strequ(str, "sa"))
		return (1);
	else if (ft_strequ(str, "sb"))
		return (1);
	else if (ft_strequ(str, "ss"))
		return (1);
	else if (ft_strequ(str, "pa"))
		return (1);
	else if (ft_strequ(str, "pb"))
		return (1);
	else if (ft_strequ(str, "ra"))
		return (1);
	else if (ft_strequ(str, "rb"))
		return (1);
	else if (ft_strequ(str, "rr"))
		return (1);
	else if (ft_strequ(str, "rra"))
		return (1);
	else if (ft_strequ(str, "rrb"))
		return (1);
	else if (ft_strequ(str, "rrr"))
		return (1);
	return (0);
}

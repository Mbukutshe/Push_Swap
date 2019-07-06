/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:40:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/06 07:03:51 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_check(char **stack)
{
	int		i;

	i = 0;
	while (stack[i])
		if (ft_range(stack[i]) == 0 || ft_parse_int(stack[i]) == 0)
			return (1);
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
	stack_a *current;
	stack_a	*ptr;
	int		i;
	int		size;
	int		val;

	i = 1;
	ptr = head;
	val = ptr->v;
	size = ft_list_size(current);
	while (i < size)
	{
		current = head;
		while (current->next != NULL)
		{
			if (current->next->v == val)
				return (1);
			current = current->next;
		}
		val = ptr->next->v;
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

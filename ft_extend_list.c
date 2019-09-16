/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extend_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:05:09 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 15:17:19 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_remove_first(t_stack **head)
{
	t_stack	*ptr;

	ptr = NULL;
	ptr = (*head)->next;
	*head = ptr;
	return ;
}

void		ft_remove_last(t_stack *head, int s)
{
	t_stack		*ptr;

	ptr = head;
	if (s > 2)
	{
		while (ptr->next->next != NULL)
			ptr = ptr->next;
		free(ptr->next);
		ptr->next = NULL;
	}
	return ;
}

void		ft_populate(t_stack *head, char **stack, int *size)
{
	t_stack	*ptr;
	int		i;

	i = 0;
	ptr = head;
	while (stack[i])
	{
		if (i == 0)
		{
			ptr->v = ft_atoi(stack[i]);
			ptr->next = NULL;
		}
		else
			ft_assign(ft_atoi(stack[i]), ptr);
		i++;
	}
	*size = i;
	return ;
}

void		ft_assign(int v, t_stack *list)
{
	t_stack		*current;

	current = list;
	while (current->next != NULL)
		current = current->next;
	if ((current->next = malloc(sizeof(t_stack))) == NULL)
		return ;
	current->next->v = v;
	current->next->next = NULL;
}

int			ft_is_right(char **av)
{
	int		i;

	i = 1;
	if (ft_strequ(av[1], ""))
		i = 0;
	if (ft_strequ(av[1], " "))
		i = 0;
	if (av[1][0] == ' ' && av[1][1] == ' ')
		i = 0;
	return (i);
}

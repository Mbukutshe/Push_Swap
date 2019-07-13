/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:30:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/13 16:39:56 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_list_size(struct node *head)
{
	struct node	*ptr;
	int			len;

	len = 0;
	ptr = head;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			len++;
			ptr = ptr->next;
		}
		free(ptr);
	}
	return (len);
}

void		ft_populate(stack_a *head, char **stack)
{
	stack_a	*ptr;
	int		i;

	i = 0;
	ptr = head;
	if (ptr != NULL)
	{
		ptr->v = ft_atoi(stack[i]);
		ptr->p = i;
		ptr->next = NULL;
		i++;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	if ((ptr->next = malloc(sizeof(stack_a))) == NULL)
		return ;
	while (stack[i])
	{
		ptr->next->v = ft_atoi(stack[i]);
		ptr->next->p = i;
		ptr->next->next = malloc(sizeof(stack_a));
		ptr = ptr->next;
		i++;
	}
	ft_null_terminate(&ptr);
}

void		ft_null_terminate(stack_a **head)
{
	(*head)->next->v = 0;
	(*head)->next->p = 9999;
	(*head)->next->next = NULL;
	*head = (*head)->next;
	(*head)->next = NULL;
}

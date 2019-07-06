/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:30:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/05 23:26:59 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_list_size(node *head)
{
	node	*ptr;
	int		len;

	len = 0;
	ptr = head;
	if (ptr != NULL)
	{
		len = 1;
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
	if (ptr == NULL)
	{
		ptr->v = ft_atoi(stack[0]);
		ptr->next = NULL;
		return ;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	if((ptr->next = malloc(sizeof(stack_a)) == NULL))
		return ;
	while (stack[i])
	{
		ptr->next->v = value;
		ptr->next->next = malloc(sizeof(stack_a));
		ptr = ptr->next;
	}
	ptr->next = NULL;
}

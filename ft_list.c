/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:30:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/10 17:20:00 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_list_size(struct node *head)
{
	struct node	*ptr;
	int				len;

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
		ptr->next = NULL;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	if((ptr->next = malloc(sizeof(stack_a))) == NULL)
		return ;
	while (stack[i])
	{
		ptr->next->v = ft_atoi(stack[i]);
		ptr->next->p = i;
		ptr->next->next = malloc(sizeof(stack_a));
		ptr = ptr->next;
		i++;
	}
	ptr->next->v = 0;
	ptr->next->p = i;
	ptr->next->next = malloc(sizeof(stack_a));
	ptr = ptr->next;
	ptr->next = NULL;
}

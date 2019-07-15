/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:30:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/15 13:13:11 by kmbukuts         ###   ########.fr       */
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
		while (ptr != NULL)
		{
			len++;
			ptr = ptr->next;
		}
	}
	return (len);
}

int			stack_b_size(char *oper)
{
	static int num = 1;

	if (ft_strequ(oper, "add"))
		num++;
	else if (ft_strequ(oper, "minus"))
		num--;
	return (num);
}

void		stack_a_size(int *size, char *oper)
{
	if (ft_strequ(oper, "add"))
		*size = *size + 1;
	else if (ft_strequ(oper, "minus"))
		*size = *size - 1;
}

void		ft_add_first(struct node **head, int value)
{
	struct node *item;

	item = malloc(sizeof(struct node));
	item->v = value;
	item->p = 0;
	item->next = *head;
	*head = item;
	return ;
}

void		ft_remove_first(struct node **head)
{
	struct node	*ptr;

	ptr = NULL;
	ptr = (*head)->next;
	*head = ptr;
	return ;
}

void		ft_remove_last(struct node **head, int s)
{
	struct node *ptr;

	ptr = *head;
	while (--s > 1)
		ptr = ptr->next;
	free(ptr->next);
	ptr->next = NULL;
	return ;
}

void		ft_populate(stack_a *head, char **stack, int *size)
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
	ptr->next = malloc(sizeof(stack_a));
	while (stack[i])
	{
		ptr->next->v = ft_atoi(stack[i]);
		ptr->next->p = i;
		ptr->next->next = malloc(sizeof(stack_a));
		ptr = ptr->next;
		i++;
	}
	ptr->next = NULL;
	*size = i;
}

void		ft_null_terminate(stack_a **head)
{
	(*head)->next->v = 0;
	(*head)->next->p = 9999;
	(*head)->next->next = NULL;
	*head = (*head)->next;
	(*head)->next = NULL;
}

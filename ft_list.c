/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:30:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 15:00:05 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_list_size(t_stack *head)
{
	t_stack		*ptr;
	int			len;

	len = 0;
	ptr = head;
	if (ptr != NULL)
	{
		while (head != NULL)
		{
			len++;
			head = head->next;
		}
	}
	return (len);
}

int			stack_b_size(char *oper)
{
	static int num = 0;

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

void		ft_add_first(t_stack **head, int value)
{
	t_stack *item;

	item = malloc(sizeof(t_stack));
	item->v = value;
	item->next = *head;
	*head = item;
	return ;
}

void		ft_add_last(t_stack **head, int value)
{
	t_stack *item;

	item = *head;
	while (item->next != NULL)
		item = item->next;
	if ((item->next = malloc(sizeof(t_stack))) == NULL)
		return ;
	item->next->v = value;
	item->next->next = NULL;
}

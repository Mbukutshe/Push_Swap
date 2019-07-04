/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:40:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/04 17:02:49 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_list_size(node *head);
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
	}
	return (len);
}

int			ft_range(int c, char *argv)
{
	char	*av;
}

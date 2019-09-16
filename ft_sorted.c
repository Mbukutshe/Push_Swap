/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:05:35 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 13:28:00 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_sorted(t_stack **head, int s)
{
	t_stack		*ptr;
	t_stack		*c;

	ptr = *head;
	if (s > 1)
	{
		while (ptr->next != NULL)
		{
			c = ptr;
			while (c != NULL)
			{
				if (c->v < ptr->v)
					return (0);
				c = c->next;
			}
			ptr = ptr->next;
		}
	}
	return (1);
}

int			ft_sorted_desc(t_stack *head)
{
	t_stack		*ptr;
	t_stack		*c;
	int			size;

	ptr = head;
	size = stack_b_size("");
	if (size > 1)
	{
		while (ptr->next != NULL)
		{
			c = ptr;
			while (c->next != NULL)
			{
				if (c->v > ptr->v)
					return (1);
				c = c->next;
			}
			ptr = ptr->next;
		}
	}
	return (0);
}

char		*ft_set(char **av, int c)
{
	char	*str;
	int		i;

	i = 1;
	str = ft_strdup(av[i]);
	while (++i < c)
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
	}
	return (str);
}

char		**ft_core_process(int c, char **res, char **av)
{
	if (c > 2)
	{
		res = ft_strsplit(ft_set(av, c), ' ');
	}
	else
	{
		res = ft_strsplit(av[1], ' ');
	}
	return (res);
}

void		ft_exec(t_stack **a, t_stack **b, char **instr, int s)
{
	while (get_next_line(0, instr) == 1)
	{
		ft_get_process(a, b, s, *instr);
	}
	ft_is_ok(a, s);
}

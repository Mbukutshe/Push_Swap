/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_instr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:05:04 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 14:57:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_get_process(t_stack **a, t_stack **b, int s, char *l)
{
	static int		i;
	static int		size;

	i = 1;
	size = s;
	if (i++ == 1 && ft_strlen(l) > 2)
	{
		ft_instr_one(l);
	}
	else
	{
		ft_instr_two(l);
	}
	ft_putendl(l);
	ft_follow(a, b, l, &size);
}

void		ft_instr_one(char *instr)
{
	if (ft_handle_instr(ft_instr(instr)))
		ft_putendl_fd("Error", 2);
	return ;
}

void		ft_instr_two(char *instr)
{
	if (ft_handle_instr(instr))
		ft_putendl_fd("Error", 2);
	return ;
}

void		ft_is_ok(t_stack **a, int size)
{
	if (ft_sorted(a, size))
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return ;
}

void		ft_free(t_stack **a, t_stack **b)
{
	free(*a);
	free(*b);
}

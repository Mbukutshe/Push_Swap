/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:10:37 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/11 11:06:40 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_handle(stack_a *head, char **stack)
{
	if (ft_check(stack))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	ft_populate(head, stack);
	if (ft_dup(head))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	return (0);
}

int			ft_handle_instr(char *instr)
{
	if (ft_exist(instr))
		return (1);
	return (0);
}

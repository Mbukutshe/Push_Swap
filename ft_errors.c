/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:40:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/05 19:33:12 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_range(int c, char **argv)
{
}

int			ft_exist(char *str)
{
	if (ft_strequ(str, "sa"))
		return (1);
	else if (ft_strequ(str, "sb"))
		return (1);
	else if (ft_strequ(str, "ss"))
		return (1);
	else if (ft_strequ(str, "pa"))
		return (1);
	else if (ft_strequ(str, "pb"))
		return (1);
	else if (ft_strequ(str, "ra"))
		return (1);
	else if (ft_strequ(str, "rb"))
		return (1);
	else if (ft_strequ(str, "rr"))
		return (1);
	else if (ft_strequ(str, "rra"))
		return (1);
	else if (ft_strequ(str, "rrb"))
		return (1);
	else if (ft_strequ(str, "rrr"))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:03:57 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/10 12:55:21 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	unsigned long	sign;
	unsigned long	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > LONG_MAX && str[i] - '0' > 7)
			return (ft_max(sign));
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}

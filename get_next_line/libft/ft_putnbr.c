/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:37:40 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/10 16:03:30 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_array(char *s)
{
	int	i;

	i = ft_strlen(s);
	while (--i > -1)
		ft_putchar(s[i]);
	return ;
}

static void	ft_nbr(char *s, int n)
{
	int		i;
	int		mod;

	i = -1;
	if (n == 0)
		s[++i] = '0';
	while (n != 0)
	{
		mod = n % 10;
		if (mod > 9)
			n = n / 10;
		else
		{
			s[++i] = mod + '0';
			n = n / 10;
		}
	}
	s[++i] = '\0';
}

void		ft_putnbr(int n)
{
	char	s[20];

	if (n <= -2147483647)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n >= 2147483647)
	{
		ft_putstr("2147483647");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	ft_nbr(s, n);
	ft_print_array(s);
}

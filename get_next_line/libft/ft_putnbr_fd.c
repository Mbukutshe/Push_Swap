/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:06:08 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/10 16:06:39 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_output(char *s, int fd)
{
	int i;

	i = ft_strlen(s);
	while (--i > -1)
		ft_putchar_fd(s[i], fd);
	return ;
}

static void	ft_nbrs(char *s, int n)
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
			n /= 10;
		else
		{
			s[++i] = mod + '0';
			n /= 10;
		}
	}
	s[++i] = '\0';
}

void		ft_putnbr_fd(int n, int fd)
{
	char	s[10];

	if (n <= -2147483647)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n >= 2147483647)
	{
		ft_putstr_fd("2147483647", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	ft_nbrs(s, n);
	ft_output(s, fd);
}

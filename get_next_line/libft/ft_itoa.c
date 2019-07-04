/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:37:40 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/10 16:37:32 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int c;

	c = 0;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c + 1);
}

static char	*ft_change_order(char *s)
{
	char	*str;
	char	*sr;
	char	*temp;
	int		len;

	sr = (char *)s;
	len = ft_strlen(sr);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	temp = str;
	while (len--)
	{
		*temp = sr[len];
		temp++;
	}
	*temp = '\0';
	return (str);
}

static char	*ft_aray(char *s, int sign, long n)
{
	char	*temp;
	int		mod;

	temp = s;
	while (n != 0)
	{
		mod = (long)n % 10;
		if (mod > 9)
			*temp = (mod - 10) + 'a';
		else
			*temp = mod + '0';
		temp++;
		n = n / 10;
	}
	if (sign < 0)
	{
		*temp = '-';
		temp++;
	}
	*temp = '\0';
	return (s);
}

static char	*ft_one(char *s, int sign, int nbr)
{
	if (sign < 0)
	{
		s[0] = '-';
		s[1] = nbr + '0';
		s[2] = '\0';
	}
	else
	{
		s[0] = nbr + '0';
		s[1] = '\0';
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*str;
	char	*temp;
	int		sign;
	long	nbr;

	sign = 1;
	nbr = (long)n;
	if (nbr < 0)
	{
		sign = -1;
		nbr = 0 - nbr;
	}
	str = (char *)malloc((ft_size(nbr) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	temp = str;
	if (nbr >= 0 && nbr < 10)
		return (ft_one(temp, sign, nbr));
	temp = ft_aray(str, sign, nbr);
	return (ft_change_order(str));
}

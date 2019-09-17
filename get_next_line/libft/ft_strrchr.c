/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:40:02 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:12:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*

char		*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;
	int		occur;

	i = 0;
	occur = 0;
	s = (char *)str;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			occur = i;
		i++;
	}
	i = ft_strlen(s) - 1;
	while (s[i] != '\0' && i > -1)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	if (c == '\0')
		return (s + ft_strlen(s));
	return (NULL);
}

*/

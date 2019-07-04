/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:51:21 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 14:35:52 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*s;
	size_t	i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	s = (char *)haystack;
	str = (char *)needle;
	if (*str == '\0')
		return (s);
	while (s[i] != '\0' && i < len)
	{
		j = -1;
		while (str[++j] != '\0' && (i + j) < len)
			if (str[j] == s[i + j])
				c++;
		if (c == (int)ft_strlen(str))
			return (s + i);
		i++;
		c = 0;
	}
	return (NULL);
}

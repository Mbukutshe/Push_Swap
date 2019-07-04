/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:12:50 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:11:21 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		pos;
	char	*dst;
	char	*src;

	i = 1;
	pos = 0;
	dst = s1;
	src = (char *)s2;
	pos = ft_strlen(dst);
	while (*src != '\0' && i <= n)
	{
		dst[pos] = *src;
		pos++;
		src++;
		i++;
	}
	dst[pos] = '\0';
	return (dst);
}

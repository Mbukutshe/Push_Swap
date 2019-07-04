/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:34:46 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:11:03 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int		pos;
	char	*dst;
	char	*src;

	pos = 0;
	dst = s1;
	src = (char *)s2;
	pos = ft_strlen(dst);
	while (*src)
	{
		dst[pos] = *src;
		pos++;
		src++;
	}
	dst[pos] = '\0';
	return (dst);
}

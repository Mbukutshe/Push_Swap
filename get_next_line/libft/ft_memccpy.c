/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:20:18 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:09:07 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*src;
	size_t			i;

	i = -1;
	str = (unsigned char *)d;
	src = (unsigned char *)s;
	if (str == NULL && src == NULL)
		return (NULL);
	if (n > 0)
	{
		while (++i < n)
		{
			*str = *src;
			if (*src == (unsigned char)c)
				return ((unsigned char *)d + i + 1);
			str++;
			src++;
		}
	}
	return (NULL);
}

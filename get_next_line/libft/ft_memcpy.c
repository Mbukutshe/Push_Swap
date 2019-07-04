/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:31:56 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:08:56 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*str;
	unsigned char	*sr;
	size_t			i;

	i = -1;
	sr = (unsigned char *)src;
	str = (unsigned char *)dst;
	if (sr == NULL && str == NULL)
		return (NULL);
	while (++i < n)
	{
		*str = *sr;
		str++;
		sr++;
	}
	return (dst);
}

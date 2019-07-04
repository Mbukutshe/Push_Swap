/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:41:36 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:11:51 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, char *restrict src, size_t dstsize)
{
	char	*dest;
	char	*sr;
	size_t	len;
	size_t	size;
	size_t	i;

	dest = (char *)dst;
	sr = (char *)src;
	len = ft_strlen(dst);
	size = ft_strlen(src);
	if (dstsize < len)
		return (dstsize + size);
	i = 0;
	while (sr[i] != '\0' && (len + i + 1) < dstsize)
	{
		dest[len + i] = sr[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + size);
}

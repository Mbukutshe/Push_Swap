/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:57:42 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/30 11:51:14 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*str;
	char	*dst;

	if (s == NULL || f == NULL)
		return (NULL);
	ptr = (char *)s;
	dst = (char *)malloc((ft_strlen(ptr) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	str = dst;
	while (*ptr)
	{
		*str = f(*ptr);
		str++;
		ptr++;
	}
	*str = '\0';
	return (dst);
}

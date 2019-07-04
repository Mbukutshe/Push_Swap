/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:15:20 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/06/06 10:20:27 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;
	char	*temp;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)s + start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (str[i] != '\0' && i < len)
	{
		*temp = str[i];
		temp++;
		i++;
	}
	*temp = '\0';
	return (ptr);
}

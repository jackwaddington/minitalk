/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:26:21 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:32:00 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while ((haystack[i + j] == needle[j] && haystack [i + j] != 0 && \
					(j + i) < len))
		{
			if (needle [j + 1] == 0)
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

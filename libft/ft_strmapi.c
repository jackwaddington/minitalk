/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:25:21 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:31:06 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*array;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (!array)
		return (0);
	i = 0;
	while (i < len)
	{
		array [i] = f(i, s[i]);
		i++;
	}
	array[len] = '\0';
	return (array);
}

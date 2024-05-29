/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:06:43 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/11 11:48:53 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
/*
#include<stdio.h>
int	main(void)
{
	char src[6]="Hello";
	char dst[6];

	printf("Function return is %zd\n", ft_strlcpy(dst, src, ft_strlen(src)+1));
	printf("src is %s\n", src);
	printf("dst is %s\n", dst);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:56:35 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 20:06:04 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
		n--;
	}
	return (dst);
}
/*
#include<stdio.h>
int	main(void)
{
	char src[6]="Hello";
	char dst[6];

	ft_memcpy(dst, src, (ft_strlen(src))+1);
	printf("ft_strlen says %zd\n", ft_strlen(src));
	printf("Source %s\n", src);
	printf("Dest %s\n", dst);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:42:56 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/12 18:36:04 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (!dstsize)
		return (ft_strlen(src));
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	dst = &dst[dst_len];
	ft_strlcpy(dst, src, dstsize - dst_len);
	return (src_len + dst_len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[6]="World";
	char dst[14]="Hello ";

	printf("return value is %zd\n", strlcat(dst, src, sizeof(dst)));
	printf("src is %s\n", src);
	printf("dst is %s\n\n", dst);
	
	char ft_src[6]="World";
	char ft_dst[14]="Hello ";

	printf("return value is %zd\n", strlcat(ft_dst, ft_src, sizeof(ft_dst)));
	printf("ft_src is %s\n", ft_src);
	printf("ft_dst is %s\n\n", ft_dst);

}
*/

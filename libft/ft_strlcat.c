/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:42:56 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:28:24 by jwadding         ###   ########.fr       */
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

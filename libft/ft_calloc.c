/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:34:08 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:10:02 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		total_size;
	void		*ptr;

	total_size = count * size;
	if (total_size < count && total_size < size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}

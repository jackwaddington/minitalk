/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:34:08 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/29 16:40:39 by jwadding         ###   ########.fr       */
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

/*
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;

//	if (count != 0 && size != 0)
//		if ((SIZE_MAX / count >= size) || (SIZE_MAX / size >= count))
//			return (0);

	ptr = malloc(count * size);

	while(i < (size*count))
	{
		ptr[size] = 0;
		i++;
	}
	return ((void *) ptr);
}
*/

/*
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
void	*ft_show_null(void *b, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;

	while (len)
	{
//		len--;
//		if (ptr[i] == 0)
			ptr[i++] = (unsigned char)'X';
//		else
//			i++;
		len--;
	}
	return (b);
}

int	main(void)
{
	size_t count;
	size_t size;
	char *rtn;
	char *ft_rtn;
	size_t total;

	count = 1;
	size = sizeof(size_t);
	rtn = calloc(count, size);
	ft_rtn = ft_calloc(count, size);
	total = count * size;

	printf("   calloc ft_show_null says %s\n", ft_show_null(rtn, total));
	printf("ft_calloc ft_show_null says %s\n", ft_show_null(ft_rtn, total));
}
*/

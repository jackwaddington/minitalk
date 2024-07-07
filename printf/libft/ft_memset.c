/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:21:08 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/25 13:57:49 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (len)
	{
		ptr[i++] = (unsigned char)c;
		len--;
	}
	return (b);
}
/*
#include<string.h>
#include<unistd.h>
int	main(void)
{
	int i;
	
	char buffer[]="abcdefghij";
	
	i = 0;
	
memset(buffer, 65, sizeof(char) * 4);

	while (i < 10)
	{
		write(1, &buffer[i], 1);
		i++;
	}

i = 0;

ft_memset(buffer+1, 66, sizeof(char) * 3);
	while (i < 10)
	{
		write(1, &buffer[i], 1);
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:12:30 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/13 13:02:59 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *) s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main(void)
{	
	char string[]="String";
	char c = 'r';
	size_t n = 5;
	char *r = NULL;

	printf("Funciton returns %s\n", memchr(string, c, n));	
	printf("ft_  returns %s\n", ft_memchr(string, c, n));	
	r = ft_memchr(string, c, n);
	printf("ft_  returns %s\n", r);	

}
*/

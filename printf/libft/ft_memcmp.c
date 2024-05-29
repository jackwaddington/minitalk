/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:03:26 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/13 13:38:18 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char string1[]="String1";
	char string2[]="String2";
	size_t n = 8;
	int r = 0;


	printf("function return is %d\n", memcmp(string1, string2, n));
	printf("ft return is %d\n", ft_memcmp(string1, string2, n));

	r = ft_memcmp(string1, string2, n);
	printf("r value is %d\n", r);

}
*/

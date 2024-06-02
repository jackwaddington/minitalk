/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:31:48 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/12 18:36:58 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
#include<string.h>
#include<unistd.h>
#include<stdio.h>
int	main(void)
{
	char string1[]="This is a string";
	char string2[]="This is a strinh";
	size_t n = 14;

	printf("The return value is %d\n", strncmp(string1, string2, n));
	printf("The ft_return value is %d\n", ft_strncmp(string1, string2, n));
}
*/

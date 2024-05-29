/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:14:55 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 19:21:06 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s != 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main(void)
{
	char *r = NULL;



	char string[]="abcdefghij";
	printf("the return value is %s\n",  strchr(string, 'h'));
	r = ft_strchr(string, 'h');
	printf("the ft_return value is %s\n",  r);
	write(1, r, 1); 
}
*/

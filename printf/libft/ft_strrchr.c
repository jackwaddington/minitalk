/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:19:20 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 20:19:43 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
	}
	return (0);
}
/*
	int			i;
	const char	*start;

	start = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *start && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (NULL);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char string[]="abchdefghijkl";
	int character = 104; // h
	char *r = NULL;

	printf("function return is %s\n", strrchr(string, character));
	r = ft_strrchr(string, character);
	write (1, r, 1);
	write (1, "\n", 1);
	printf("ft return is %s\n", r);
}
*/

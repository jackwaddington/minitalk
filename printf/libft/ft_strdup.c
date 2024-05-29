/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:44:22 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 20:51:18 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1)+1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[]="String coin\0tents";

	printf("string one is %s\n", s1);
	printf("New string is %s\n", strdup(s1)); 
	printf("ft_ string is %s\n", ft_strdup(s1));
}
*/

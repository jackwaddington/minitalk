/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:51:07 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 21:01:05 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		length;

	if (!s1 || !s2)
		return (NULL);
	length = 0;
	length += ft_strlen(s1);
	length += ft_strlen(s2);
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_strcpy(ptr, s1);
	ptr = ft_strcat(ptr, s2);
	return (ptr);
}
/*
#include<stdio.h>
int	main(void)
{
	char prefix[]="Prefix ";
	char suffix[]="Suffix";

	printf("We expect the %s to be followed by the %s\n", prefix, suffix);
	printf("%s\n", ft_strjoin(prefix, suffix));
}
*/

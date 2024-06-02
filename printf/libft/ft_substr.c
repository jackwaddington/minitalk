/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:43:59 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 20:52:57 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	amount;

	if (!s)
		return (NULL);
	amount = ft_strlen(s);
	if (start >= amount || len == 0)
		return (ft_strdup(""));
	if (start + len > amount)
		len = amount - start;
	ptr = (char *) malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

//	s - the sttring from which to create the substring.

//	start - the start index of the substring in the string 's'.

//	len the maximum length of the substring.
/*
#include <stdio.h>
int	main(void)
{
	char string[]="Hello";
	printf("Return value is %s\n", ft_substr(string, 2, 4));
}
*/

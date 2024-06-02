/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:25:21 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/19 13:26:20 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*array;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (!array)
		return (0);
	i = 0;
	while (i < len)
	{
		array [i] = f(i, s[i]);
		i++;
	}
	array[len] = '\0';
	return (array);
}
/*
static char ft_f(unsigned int i, char si)
{
	return (si + i);
}


#include <stdio.h>
int	main(void)
{
	char string[]="ababababababcdefghijkl";
	
	printf("The string is %s\n", string);
	printf("The function returns %s\n", ft_strmapi(string, ft_f));
}


	s - the string on which to iterate
	f - the function to apply to each character

	the string created froom the successive applications of f


	returns nul if the allocation fail.
*/

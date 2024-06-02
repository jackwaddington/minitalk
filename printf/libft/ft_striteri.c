/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:27:01 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/29 16:57:04 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_f(unsigned int i, char *c)
{
	*c = *c + i;
}
#include <stdio.h>
int	main(void)
{
	char string[]="abcdefghijkl";
	printf("String is %s\n", string);
	ft_striteri(string, ft_f);
	printf("String is %s\n", string);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:19:13 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/11 16:43:36 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
/*
#include <unistd.h>
#include <ctype.h>
int	main(void)
{
	char c = 'c';
	c = ft_toupper(c);
	write(1, &c, 1);

	char test1[]="a  D abcdefghijklmnoopqrs1234567tuvwxyzsdf";
	int	i;

	i = 0;
	while (test1[i] != 0)
	{
		test1[i] = ft_toupper(test1[i]);
		write(1, &test1[i], 1);
		i++;
	}
}
*/

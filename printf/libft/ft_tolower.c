/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:37:25 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/11 17:14:31 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
/*
#include <ctype.h>
#include <unistd.h>
int	main(void)
{
	char string[]="1234ABCDEF5678GHIJKLM 9 0  NOPQRSTUVWXYZ";	
	int	i = 0;
	while (string[i] != 0)
	{
		string[i] = ft_tolower(string[i]);
		write(1, &string[i], 1);
		i++;
	}
}
*/

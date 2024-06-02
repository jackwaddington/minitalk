/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:10:16 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:13:00 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_numlen(int num)
{
	long	n;
	int		len;

	len = 0;
	n = (long)num;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	number;
	int		len;

	number = (long)n;
	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(number);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	if (number < 0)
	{
		string[0] = '-';
		number = -number;
	}
	string[len--] = '\0';
	string[len--] = (number % 10) + '0';
	while (number >= 10)
	{
		number = number / 10;
		string[len--] = (number % 10) + '0';
	}
	return (string);
}

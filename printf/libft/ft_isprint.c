/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:24:21 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/28 17:34:38 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
#include<stdio.h>
int	main(void)
{
	int i;
	int tests [4];

	i = 0;
	tests [0] = 3;
	tests [1] = 'a';
	tests [2] = 'Z';
	tests [3] = 150;

	while (i < 4)
	{
	if (ft_isprint(tests[i]) == 1)
	{
		printf("Test %d is True\n", i);
		i++;
	}
	else
	{
		printf("Test %d is False \n", i);
		i++;
	}
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:48:02 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/28 16:58:52 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include<stdio.h>
int main(void)
{
	int i;
	int tests [8];

	i = 0;
	tests [0] = 1;
	tests [1] = 130;
	tests [2] = 'a';
	tests [3] = ' ';
	tests [4] = 1;
	tests [5] = 1;
	tests [6] = 1;
	tests [7] = 1;

	while (i < 8)
	{
		if (ft_isascii(tests[i]) == 1)
		{
			printf("Test %d is True\n", i);
			i++;
		}
		else
		{
			printf("Test %d is False\n", i);
			i++;
		}
	}		
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:19:11 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/28 16:17:22 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	int i;
	int test_values[8];
	char p;

	i = 0;
	test_values[0] = 10;
	test_values[1] = 20;
	test_values[2] = 30;
	test_values[3] = 40;
	test_values[4] = 50;
	test_values[5] = 60;
	test_values[6] = 70;
	test_values[7] = 80;

	while (i < 8)
		{
			if (ft_isdigit(test_values[i]) == 1)
			{
				printf("Value: %d \n", test_values[i]);
				i++;
			}
			else if (ft_isdigit(test_values[i]) == 0)
			{
				printf("False\n");
				i++;
			}
		}	
}
*/

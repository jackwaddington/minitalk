/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:18:05 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/28 16:44:46 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
#include<unistd.h>
int	main(void)
{
	int i;
	int test [8];

	i = 0;
	test [0] = 'a';
	test [1] = '1';
	test [2] = 'x';
	test [3] = 40;
	test [4] = 50;
	test [5] = 60;
	test [6] = 70;
	test [7] = 80;

	while (i < 7)
	{
		if (ft_isalnum(test[i])	== 1)
		{
			write (1, "Yes\n", 4);
			i++;
		}
		else
		{
			write (1, "No\n", 3);
			i++;
		}
	}
}
*/	

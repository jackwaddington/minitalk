/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:25:08 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/28 16:42:11 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
#include<unistd.h>
int	main(void)
{
	int i;
	int test_count;
	int test_values[] = {5, 65, 70, 90, 91, 97, 100, 122, 123, 70};
//	int	expected[] = {0, 1, 1, 1, 0, 1, 1, 1, 0};
	int expected[] = {48, 49, 49, 49, 48, 49, 49, 49, 48};
//	int test_values[] = {5, 25, 45, 65, 85, 105, 125, 145, 165, 185, 205, 225};

	i = 0;
	test_count = 8;

// print characters from test values


	while (i <= test_count)
//	while (test_values[i] != '\0')
//	while (expected[i] != '\0')
	{
		write(1, &test_values[i], 1);
		i++;
	}

	i = 0;
	write(1, "\n", 1);

//	Write test result
	while (i <= test_count)
	{
		if (ft_isalpha(test_values[i]) == 1)
		{
			write(1, "1", 1);
			i++;
		}	
		else
		{
			write(1, "0", 1);
			i++;
		}
	}

	i = 0;
	write(1, "\n", 1);

//	Print expected result

	while (expected[i] != '\0')
	{
		write(1, &expected[i], 1);
		i++;
	}

	i = 0;
	write(1, "\n", 1);
}
*/

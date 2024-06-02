/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:14:32 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/29 16:39:19 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	if (n == 0)
		return ;
	ft_memset (s, 0, n);
}
/*
#include<stdio.h>
#include<strings.h>
#include<unistd.h>
int	main(void)
{

	int i;

	i = 0;


	char string[] = "Hello";

	printf("The string says %s\n", string);
	
	ft_memset(string+1, 66, sizeof(char) * 2);
		
	printf("The string says %s\n", string);

	ft_bzero(string+2, sizeof(char) * 1);

	printf("The string says %s\n", string);

	while(i < 8)
	{
		write(1, &string[i++], 1);
	}


}
*/

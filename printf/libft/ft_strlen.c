/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:07:48 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/11 14:38:42 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*

#include<stdio.h>
#include<string.h>
int	main(void)
{
	int len_my;
	int len_control;
	
	char string[] = "Hello test string";

	len_my = ft_strlen(string);
	len_control = strlen(string);

	printf("My length is %d\n", len_my);
	printf("Control length is %d\n", len_control);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:37:24 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/29 16:54:11 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*

int	main(void)
{
	char s1[]="asdfasdf";
	char s2[]="jkl;jkl;";

	ft_putendl_fd(s1, 1);
	ft_putendl_fd(s2, 2);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:17:11 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/30 19:38:03 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\12');
}

int	ft_atoi(const char *str)
{
	int			i;
	int long	rtn;
	int			sign;

	i = 0;
	rtn = 0;
	sign = 1;
	while (str[i] && (ft_isspace(str[i])))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		rtn = 10 * rtn + str[i++] - '0';
		if (rtn < 0 && sign < 0)
			return (0);
		else if (rtn < 0 && sign > 0)
			return (-1);
	}
	return (rtn * sign);
}

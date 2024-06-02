/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:10:43 by jwadding          #+#    #+#             */
/*   Updated: 2024/01/11 12:55:22 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_int(long long n, t_rtn *rtn)
{
	if (n < 0)
	{
		ft_print_char('-', rtn);
		n *= -1;
	}
	if (n > 9)
	{
		ft_print_int(n / 10, rtn);
		ft_print_int(n % 10, rtn);
	}
	else
		ft_print_char(n + '0', rtn);
}

void	ft_print_uint(unsigned int n, t_rtn *rtn)
{
	if (n > 9)
	{
		ft_print_uint(n / 10, rtn);
		ft_print_uint(n % 10, rtn);
	}
	else
		ft_print_char(n + '0', rtn);
}

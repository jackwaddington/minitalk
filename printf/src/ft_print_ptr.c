/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:14:40 by jwadding          #+#    #+#             */
/*   Updated: 2024/01/11 12:56:42 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(unsigned long p, t_rtn *rtn)
{
	ft_print_string("0x", rtn);
	if (p == 0)
		ft_print_char('0', rtn);
	else
		ft_print_hex_lowercase(p, rtn);
}

void	ft_print_hex_lowercase(unsigned long long n, t_rtn *rtn)
{
	if (n > 15)
	{
		ft_print_hex_lowercase(n / 16, rtn);
		ft_print_hex_lowercase(n % 16, rtn);
	}
	else
	{
		if (n < 10)
			ft_print_char(n + '0', rtn);
		else
			ft_print_char(n - 10 + 'a', rtn);
	}
}

void	ft_print_hex_uppercase(unsigned long long n, t_rtn *rtn)
{
	if (n > 15)
	{
		ft_print_hex_uppercase(n / 16, rtn);
		ft_print_hex_uppercase(n % 16, rtn);
	}
	else
	{
		if (n < 10)
			ft_print_char(n + '0', rtn);
		else
			ft_print_char(n - 10 + 'A', rtn);
	}
}

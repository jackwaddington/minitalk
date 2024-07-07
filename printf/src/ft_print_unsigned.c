/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:18:55 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/21 23:47:16 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, t_rtn *rtn)
{
	if (n > 9)
	{
		ft_print_unsigned(n / 10, rtn);
		ft_print_unsigned(n % 10, rtn);
	}
	else
		ft_print_char(n + '0', rtn);
}

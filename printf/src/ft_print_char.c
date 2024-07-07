/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:05:58 by jwadding          #+#    #+#             */
/*   Updated: 2024/03/01 14:06:49 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_char(char c, t_rtn *rtn)
{
	if (rtn->error_return < 0)
		return ;
	if (write(1, &c, 1) < 0)
		rtn->error_return = -1;
	else
		rtn->output_count++;
}

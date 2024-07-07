/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:17:08 by jwadding          #+#    #+#             */
/*   Updated: 2024/03/01 14:09:41 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_string(char *s, t_rtn *rtn)
{
	if (!s)
		ft_print_string("(null)", rtn);
	else
	{
		while (*s)
		{
			ft_print_char(*s, rtn);
			s++;
		}
	}
}

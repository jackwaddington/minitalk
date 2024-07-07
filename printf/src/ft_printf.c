/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:23:51 by jwadding          #+#    #+#             */
/*   Updated: 2024/03/01 14:52:09 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_type(char type, va_list *ap, t_rtn *rtn)
{
	if (type == 'c')
		ft_print_char(va_arg(*ap, int), rtn);
	else if (type == 's')
		ft_print_string(va_arg(*ap, char *), rtn);
	else if (type == 'p')
		ft_print_pointer(va_arg(*ap, unsigned long), rtn);
	else if (type == 'd' || type == 'i')
		ft_print_int(va_arg(*ap, int), rtn);
	else if (type == 'u')
		ft_print_unsigned(va_arg(*ap, unsigned int), rtn);
	else if (type == 'x')
		ft_print_hex_lowercase(va_arg(*ap, unsigned int), rtn);
	else if (type == 'X')
		ft_print_hex_uppercase(va_arg(*ap, unsigned int), rtn);
	else if (type == '%')
		ft_print_char('%', rtn);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;
	t_rtn	rtn;

	rtn.output_count = 0;
	rtn.error_return = 0;
	i = 0;
	va_start(ap, s);
	while (s[i] && rtn.error_return == 0)
	{
		if (s[i] == '%' && s[i + 1])
		{
			ft_handle_type(s[i + 1], &ap, &rtn);
			i++;
		}
		else
			ft_print_char(s[i], & rtn);
		i++;
	}
	va_end(ap);
	if (rtn.error_return < 0)
		return (-1);
	return (rtn.output_count);
}

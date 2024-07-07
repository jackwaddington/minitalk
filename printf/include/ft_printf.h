/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:07:18 by jwadding          #+#    #+#             */
/*   Updated: 2024/01/11 12:37:42 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_rtn
{
	int	output_count;
	int	error_return;
}	t_rtn;

int		ft_printf(const char *format, ...);
void	ft_print_char(char c, t_rtn *rtn);
void	ft_print_string(char *s, t_rtn *rtn);
void	ft_print_int(long long n, t_rtn *rtn);
void	ft_print_unsigned(unsigned int n, t_rtn *rtn);
void	ft_print_hex_char(char n, int lowercase, t_rtn *rtn);
void	ft_print_hex(unsigned int n, int lowercase, t_rtn *rtn);
void	ft_print_pointer(unsigned long p, t_rtn *rtn);
void	ft_print_hex_lowercase(unsigned long long n, t_rtn *rtn);
void	ft_print_hex_uppercase(unsigned long long n, t_rtn *rtn);
void	ft_print_uint(unsigned int n, t_rtn *rtn);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:58:10 by jwadding          #+#    #+#             */
/*   Updated: 2024/05/31 23:27:36 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_bin(unsigned char octet)
{
	int	div;
	int	oct;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:46:56 by jwadding          #+#    #+#             */
/*   Updated: 2024/05/20 19:03:17 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_signals(int pid, char *string)
{
	int				pos;
	int				i;

	pos = 0;
	while (string[pos])
	{
		i = -1;
		while (++i < 8)
		{
			if (((unsigned char)(string[pos] >> (7 - i)) & 1) == 0)
				kill(pid, SIGUSR1);
			else if (((unsigned char)(string[pos] >> (7 - i)) & 1) == 1)
				kill(pid, SIGUSR2);
			usleep(50);
		}
		pos++;
	}
	i = 0;
	while (i++ < 8)
	{
		kill(pid, SIGUSR1);
		usleep(50);
	}
}

int	main(int argc, char **argv)
{
	char				*string;
	int					server_id;

	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		if (!server_id)
		{
			ft_printf("[ERROR]. No server_id");
			return (0);
		}
		string = argv[2];
		if (string[0] == 0)
		{
			ft_printf("There is no text entered \n");
			return (0);
		}
		send_signals(server_id, string);
	}
	else
	{
		ft_printf("Use format: ./client PID_SERVER STRING_TO_PASS");
	}
	return (0);
}

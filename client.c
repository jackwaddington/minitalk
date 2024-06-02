/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:46:56 by jwadding          #+#    #+#             */
/*   Updated: 2024/06/01 01:07:31 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error_and_exit(int err)
{
	if (err == 1)
		ft_printf("[+] Error: \033[31mNo server_id\n\033[0m \n");
	if (err == 2)
		ft_printf("[+] Error: \033[31mNo string provided\n\033[0m \n");
	if (err == 3)
		ft_printf("[+] Error: \033[31mIncorrect PID\n\033[0m \n");
	if (err == 4)
		ft_printf("[+] Error: \033[31mMessage was not recieved\n\033[0m \n");
	if (err == 5)
		ft_printf("[+] Error: \033[31mUse format:\n\
			   	./client <PID_SERVER> <\"STRING\">\n\033[0m \n");
	if (err == 6)
		ft_printf("[+] Error: \033[31mKill fail\n\033[0m \n");
	exit (0);
}

void	send_signals(int pid, char *string)
{
	int				string_pos;
	int				bit_pos;

	string_pos = 0;
	while (string[string_pos])
	{
		bit_pos = -1;
		while (++bit_pos < 8)
		{
			if (((unsigned char)(string[string_pos] >> (7 - bit_pos)) & 1) == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(200);
		}
		string_pos++;
	}
	bit_pos = 0;
	while (bit_pos++ < 8)
	{
		kill(pid, SIGUSR1);
		usleep(200);
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
			error_and_exit(1);
		if (kill(server_id, 0) == -1)
			error_and_exit(3);
		string = argv[2];
		if (string[0] == 0)
			error_and_exit(2);
		send_signals(server_id, string);
	}
	else
		error_and_exit(5);
	return (EXIT_SUCCESS);
}

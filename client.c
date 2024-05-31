/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:46:56 by jwadding          #+#    #+#             */
/*   Updated: 2024/05/28 18:38:10 by jwadding         ###   ########.fr       */
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
			usleep(200);
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

void	signal_handler(int sig, siginfo_t *info, void *context)
{
	(void)context;
	(void)info;
	if (sig == SIGUSR1)
	{
		ft_printf("Kill confirmed\n");
		exit(EXIT_SUCCESS);
	}
}

void	error_and_exit(int leo)
{
	if (leo == 1)
		ft_printf("[ERROR]. No server_id\n");
	if (leo == 2)
		ft_printf("There is no text entered \n");
	exit (0);
}

int	main(int argc, char **argv)
{
	char				*string;
	int					server_id;
	struct sigaction	signal_received;

	signal_received.sa_sigaction = signal_handler;
	signal_received.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &signal_received, NULL);
	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		if (!server_id)
			error_and_exit(1);
		string = argv[2];
		if (string[0] == 0)
			error_and_exit(2);
		send_signals(server_id, string);
	}
	else
		ft_printf("Use format: ./client PID_SERVER \"STRING\"\n");
	sleep(2);
	printf("Message not confirmed\n");
	exit(EXIT_FAILURE);
}

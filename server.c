/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:47:54 by jwadding          #+#    #+#             */
/*   Updated: 2024/05/28 18:20:49 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_recursive_power(int power)
{
	int	res;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		res = 2 * ft_recursive_power(power - 1);
		return (res);
	}
}

char	*add_to_string(char const *s1, char const letter)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = malloc((ft_strlen(s1) + 2) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s1[i])
		tab[j++] = s1[i++];
	i = 0;
	tab[j++] = letter;
	tab[j] = 0;
	free ((void *)(s1));
	return (tab);
}

void	line_saver(char **string)
{
	ft_printf("%s\n", *string);
	free (*string);
	*string = NULL;
}

void	signal_handler(int sig, siginfo_t *info, void *context)
{
	static int	counter = 0;
	static int	result = 0;
	static int	len = 0;
	static char	*string;
	pid_t		sender_id;

	(void)context;
	sender_id = info->si_pid;
	if (!string)
		string = ft_strdup("");
	if (sig == SIGUSR2)
		result = result + (1 * ft_recursive_power(7 - counter));
	counter++;
	if (counter == 8)
	{
		string = add_to_string(string, result);
		if (result == '\0')
		{
			line_saver(&string);
			kill(sender_id, SIGUSR1);
		}
		counter = 0;
		result = 0;
		len += 1;
	}
}

int	main(void)
{
	struct sigaction	signal_received;

	ft_printf("Server is online with PID: %d\n", getpid());
	signal_received.sa_sigaction = signal_handler;
	signal_received.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &signal_received, NULL);
	sigaction(SIGUSR2, &signal_received, NULL);
	while (1)
		pause();
}

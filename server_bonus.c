/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:47:54 by jwadding          #+#    #+#             */
/*   Updated: 2024/06/01 12:09:19 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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

void	print_and_free(char **string)
{
	ft_printf("%s\n", *string);
	free (*string);
	*string = NULL;
}

void	signal_handler(int sig, siginfo_t *info, void *context)
{
	static int	bit_pos = 0;
	static int	char_val = 0;
	static int	len = 0;
	static char	*string;

	(void)context;
	if (!string)
		string = ft_strdup("");
	if (sig == SIGUSR2)
		char_val = ((char_val << 1) | 1);
	else if (sig == SIGUSR1)
		char_val = (char_val << 1);
	bit_pos++;
	if (bit_pos == 8)
	{
		string = add_to_string(string, char_val);
		if (char_val == '\0')
		{
			print_and_free(&string);
			kill(info->si_pid, SIGUSR1);
		}
		bit_pos = 0;
		char_val = 0;
		len += 1;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	sa.sa_sigaction = signal_handler;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}

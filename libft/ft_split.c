/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:29:29 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:22:33 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_c_in(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_count_strings(char const *s, char c)
{
	size_t	strings;

	strings = 0;
	while (*s)
	{
		if (*s != c)
		{
			s += ft_count_c_in (s, c);
			strings++;
		}
		else
			s++;
	}
	return (strings);
}

static char	**ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**ft_write_strings(char **rtn, size_t strings, \
		char const *s, char c)
{
	size_t	string_len;
	size_t	i;

	i = 0;
	while (*s && i < strings)
	{
		if (*s == c)
			s++;
		else
		{
			string_len = ft_count_c_in(s, c);
			rtn[i] = ft_substr(s, 0, string_len);
			if (rtn[i] == NULL)
				return (ft_free_array(rtn));
			s += string_len;
			i++;
		}
	}
	rtn[i] = NULL;
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	size_t	strings;
	char	**rtn;

	if (!s)
		return (NULL);
	strings = ft_count_strings(s, c);
	rtn = (char **)malloc((strings + 1) * sizeof(*rtn));
	if (!rtn)
		return (NULL);
	return (ft_write_strings(rtn, strings, s, c));
}

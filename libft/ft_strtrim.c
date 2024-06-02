/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:40 by jwadding          #+#    #+#             */
/*   Updated: 2023/12/04 14:32:42 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_in(char const c, char const*set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_pos;
	size_t	string_length;
	size_t	end_pos;
	char	*rtn;

	if (!s1 || !set)
		return (NULL);
	start_pos = 0;
	while (s1[start_pos] && ft_is_in(s1[start_pos], set))
		start_pos++;
	string_length = ft_strlen(s1);
	while (string_length > start_pos && ft_is_in(s1[string_length - 1], set))
		string_length--;
	end_pos = string_length - start_pos;
	rtn = malloc(sizeof(char) * (end_pos + 1));
	if (!rtn)
		return (NULL);
	ft_memcpy(rtn, s1 + start_pos, end_pos);
	rtn[end_pos] = '\0';
	return (rtn);
}

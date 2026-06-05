/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:45:19 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/05 19:57:47 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && is_set(s1[end], set))
		end--;
	new_str = malloc(end - start + 2);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}

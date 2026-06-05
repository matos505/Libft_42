/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 19:29:22 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/05 19:42:29 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	total;
	size_t	i;
	char	*new_str;

	if (s == NULL)
		return (NULL);
	total = ft_strlen(s);
	if (start >= total)
		return (ft_strdup(""));
	if (len > total - start)
		len = total - start;
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

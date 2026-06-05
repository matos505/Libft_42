/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:42:49 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/05 18:22:55 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s, len + 1);
	return (new_str);
}

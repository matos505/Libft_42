/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:41:44 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/05 14:48:02 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*one;
	const unsigned char	*two;

	i = 0;
	one = (const unsigned char *)s1;
	two = (const unsigned char *)s2;
	while (i < n)
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
	}
	return (0);
}

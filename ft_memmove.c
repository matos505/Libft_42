/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:42:16 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/05 20:28:09 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	if (dest_ptr < src_ptr)
		return (ft_memcpy(dest, src, n));
	else
	{
		i = n;
		while (i-- > 0)
		{
			dest_ptr[i] = src_ptr[i];
		}
	}
	return (dest);
}

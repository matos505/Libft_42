/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:11:56 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/05 14:26:38 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(int n)
{
	int		len;
	long	num;

	num = n;
	len = 1;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num / 10 != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		start;
	long	num;
	char	*str;

	len = ft_count_len(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = n;
	start = 0;
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
		start = 1;
	}
	while (len > start)
	{
		len--;
		str[len] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}

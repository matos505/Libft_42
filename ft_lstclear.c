/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:47:56 by mmatos-d          #+#    #+#             */
/*   Updated: 2026/06/08 17:48:50 by mmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*nxt;

	if (!lst)
		return ;
	temp = *lst;
	while (temp)
	{
		nxt = temp->next;
		ft_lstdelone(temp, del);
		temp = nxt;
	}
	*lst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:54:23 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/23 20:23:44 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		i = *lst;
		ft_lstdelone((*lst), del);
		*lst = i -> next;
	}
	lst = NULL;
}

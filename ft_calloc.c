/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:36:07 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/26 14:03:20 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ans;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	else if (SIZE_MAX / size < count)
		return (NULL);
	ans = (void *)malloc(size * count);
	if (ans == NULL)
	{
		free(ans);
		return (NULL);
	}
	ft_memset(ans, 0, size * count);
	return (ans);
}

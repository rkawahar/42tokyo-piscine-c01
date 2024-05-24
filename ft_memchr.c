/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:16:31 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/17 15:25:02 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str_s;

	str_s = (const char *) s;
	while (0 < n)
	{
		if (*str_s == (char) c)
			return ((void *)str_s);
		str_s++;
		n--;
	}
	return (NULL);
}

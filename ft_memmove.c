/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:31 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/24 17:12:03 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_re_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;

	str_dst = (unsigned char *) dst;
	str_src = (unsigned char *) src;
	while (0 < n)
	{
		n--;
		str_dst[n] = str_src[n];
	}
	str_dst[0] = str_src[0];
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	if (src <= dst)
		dst = ft_re_memcpy(dst, src, len);
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}

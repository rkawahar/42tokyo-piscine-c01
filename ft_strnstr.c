/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:41:49 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/24 17:35:58 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;
	char	crash;

	if (*needle == '\0')
		return ((char *)haystack);
	n_len = strlen(needle);
	i = 0;
	if (haystack == NULL && len != 0)
		crash = *haystack;
	while (n_len + i <= len)
	{
		if (ft_strncmp(needle, haystack + i, n_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

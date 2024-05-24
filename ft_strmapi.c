/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:48:48 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/23 20:21:34 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	size_t	index;
	size_t	s_len;

	if (s == NULL || f == NULL)
		return (NULL);
	index = 0;
	s_len = ft_strlen(s);
	ans = (char *)malloc(sizeof(char) * (s_len + 1));
	if (ans == NULL)
		return (NULL);
	while (s[index])
	{
		ans[index] = f(index, s[index]);
		index++;
	}
	ans[index] = '\0';
	return (ans);
}

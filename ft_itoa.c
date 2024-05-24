/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:53:35 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/24 18:22:07 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(long n)
{
	int		num_flg;
	size_t	ans;

	num_flg = 0;
	if (n < 0)
	{
		n *= -1;
		num_flg = 1;
	}
	ans = 0;
	while (1 <= n)
	{
		ans += 1;
		n /= 10;
	}
	if (num_flg)
		return (ans + 1);
	return (ans);
}

long	ft_negative(char *ans)
{
	ans[0] = '-';
	return (-1);
}

char	*ft_itoa(int n)
{
	char	*ans;
	size_t	len;
	int		i;
	long	lon_n;

	if (n == 0)
		return (ft_strdup("0"));
	lon_n = (long) n;
	len = ft_numlen(lon_n);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (ans == NULL)
		return (NULL);
	i = len - 1;
	if (lon_n < 0)
		lon_n *= ft_negative(ans);
	while (1 <= lon_n)
	{
		if (lon_n < 10)
			ans[i--] = '0' + lon_n;
		else
			ans[i--] = '0' + lon_n % 10;
		lon_n /= 10;
	}
	ans[len] = '\0';
	return (ans);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:14:41 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 00:58:57 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count_size(long long_n)
{
	int		res;

	res = 0;
	if (long_n < 0)
		res++;
	while (long_n != 0)
	{
		long_n /= 10;
		res += 1;
	}
	return (res);
}

static char	*extract_numbers(long long_n, char *res, int size)
{
	if (long_n < 0)
	{
		res[0] = '-';
		long_n *= -1;
	}
	res[size--] = '\0';
	while (size >= 0 && long_n > 0)
	{
		res[size] = (long_n % 10) + '0';
		size--;
		long_n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	long_n;
	int		size;

	long_n = n;
	if (long_n > 2147483647 || long_n < -2147483648)
		return (0);
	if (long_n == 0)
	{
		res = (char *)malloc(sizeof(char) * 2);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	size = count_size(long_n);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
	extract_numbers(long_n, res, size);
	return (res);
}
/*
int	main()
{
	char	*res = ft_itoa(-1);
	// char	*res1 = itoa(2147483647);
	printf("%s\n", res);
	// printf("%s\n", res1);
	return (0);
}
*/
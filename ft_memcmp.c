/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:32 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/05 02:35:45 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n && p1[i] == p2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (p1[i] - p2[i]);
}
/*
int main(void)
{
    const char *s1 = "abc";
    const char *s2 = "abd";
    size_t n = 3;

    int result = ft_memcmp(s1, s2, n);
    if (result == 0)
    {
        printf("Memory blocks are equal.\n");
    }
    else if (result < 0)
    {
        printf("Memory block in s1 is less than s2.\n");
    }
    else
    {
        printf("Memory block in s1 is greater than s2.\n");
    }
    return 0;
}
*/

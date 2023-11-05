/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:52:26 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/05 02:34:27 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*((char *)s) == (char)c)
		{
			return ((void *)s);
		}
		s++;
		n--;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s = "Hello, World!";
    char c = 'W';

    void *result = ft_memchr(s, c, 13);

    if (result != NULL)
    {
        printf("%s\n", (char *)result);
    }
    else
	{
		printf("'%c' not found\n", c);
    }
    return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:05:21 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/05 01:49:14 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return ((void *)b);
}
/*
int	main(void)
{
	int	c;
	c = 42;
	printf("before : %d\n", c);
	ft_memset(&c, 0, 4);
	printf("set all to 0 : %d\n", c);
	ft_memset(&c, 5, 2);
	printf("set first 2 bits to 101 -> 5 : %d\n", c);
	ft_memset(&c, 57, 1);
	printf("set first bit to 111001 -> 57 : %d\n", c);
	printf("after : %d\n", c);
	return (0);
}*/

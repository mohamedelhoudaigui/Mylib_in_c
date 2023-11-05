/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:28:06 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/05 02:07:21 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	u_c;

	i = ft_strlen(s);
	if (!s)
	{
		return (NULL);
	}
	if (s[i] == '\0' && c == 0)
	{
		return ((char *)s + i);
	}
	u_c = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == u_c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "hello world";

	printf("%p\n", ft_strrchr(s, 'h'));
	printf("%p\n", *s);
	return (0);
}
*/

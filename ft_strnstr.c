/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:52:54 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/05 03:25:28 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == needle || ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j] && (j + i) < len)
			{
				j++;
				if (!needle[j] || !haystack[i + j])
					break ;
			}
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 13;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
    {
        printf("Substring found: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}
*/

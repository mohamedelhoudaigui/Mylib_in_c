/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:44:41 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/02 18:42:04 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
    char dest[20];

    // Test Case 1: Normal case
    char src1[] = "Hello, ";
    size_t result1 = ft_strlcpy(dest, src1, sizeof(dest));
    printf("Test Case 1: Result: %zu, Destination: %s\n", result1, dest);

    // Test Case 2: Destination size is 0
    char src2[] = "World!";
    size_t result2 = ft_strlcpy(dest, src2, 0);
    printf("Test Case 2: Result: %zu, Destination: %s\n", result2, dest);

    // Test Case 3: Null destination
    char src3[] = "Null destination";
    size_t result3 = ft_strlcpy(NULL, src3, sizeof(dest));
    printf("Test Case 3: Result: %zu\n", result3);

    // Test Case 4: Null source
    size_t result4 = ft_strlcpy(dest, NULL, sizeof(dest));
    printf("Test Case 4: Result: %zu, Destination: %s\n", result4, dest);

    // Test Case 5: Both null destination and source
    size_t result5 = ft_strlcpy(NULL, NULL, sizeof(dest));
    printf("Test Case 5: Result: %zu\n", result5);

    // Test Case 6: Partial copy
    char src6[] = "Partial Copy";
    size_t result6 = ft_strlcpy(dest, src6, 5);
    printf("Test Case 6: Result: %zu, Destination: %s\n", result6, dest);

    return 0;
}
*/

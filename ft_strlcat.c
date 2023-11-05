/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:12:10 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/03 23:27:02 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
		dst[len_dst++] = s[i++];
	dst[len_dst] = '\0';
	return (res);
}
/*
int main(void)
{
    // Test case 1: Basic test with enough space
    char dest1[20] = "Hello";
    const char *src1 = " World!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("Test Case 1:\n");
    printf("Original destination: %s\n", dest1);
    printf("Source: %s\n", src1);
    printf("Result: %s\n", dest1);
    printf("Return value: %zu\n\n", result1);

    // Test case 2: Insufficient space
    char dest2[10] = "Hello";
    const char *src2 = " World!";
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("Test Case 2:\n");
    printf("Original destination: %s\n", dest2);
    printf("Source: %s\n", src2);
    printf("Result: %s\n", dest2);
    printf("Return value: %zu\n\n", result2);

    // Test case 3: Empty destination
    char dest3[10] = "";
    const char *src3 = "Hello";
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    printf("Test Case 3:\n");
    printf("Original destination: %s\n", dest3);
    printf("Source: %s\n", src3);
    printf("Result: %s\n", dest3);
    printf("Return value: %zu\n\n", result3);

    // Test case 4: Empty source
    char dest4[10] = "Hello";
    const char *src4 = "";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    printf("Test Case 4:\n");
    printf("Original destination: %s\n", dest4);
    printf("Source: %s\n", src4);
    printf("Result: %s\n", dest4);
    printf("Return value: %zu\n\n", result4);

	// Test case 5: Seg fault
    char dest5[10] = "Hello";
    const char *src5 = NULL;
    size_t result5 = ft_strlcat(dest5, src5, sizeof(dest5));
    printf("Test Case 4:\n");
    printf("Original destination: %s\n", dest5);
    printf("Source: %s\n", src5);
    printf("Result: %s\n", dest5);
    printf("Return value: %zu\n\n", result5);

    return 0;
}*/

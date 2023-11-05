/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:04:52 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/02 16:28:18 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;
	size_t	size;

	i = 0;
	size = 0;
	if (!s1)
	{
		return (NULL);
	}
	size = ft_strlen(s1);
	res = (char *)malloc(size * sizeof(char) + 1);
	if (!res)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main() {
    const char *original = "1000";

    // Test ft_strdup
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);

        // Free the duplicated string
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/

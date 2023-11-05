/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:39:11 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 00:25:25 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count != 0 && size != 0)
	{
		res = malloc(count * size);
		if (!res)
			return (NULL);
		ft_bzero(res, count * size);
	}
	else
	{
		res = malloc(0);
		if (!res)
			return (NULL);
	}
	return (res);
}
/*
int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(char);

    // Testing your calloc implementation
    char *arr = (char *)calloc(num_elements, element_size);

    if (arr != NULL) {
        // Print the initialized array
        printf("Initialized array: ");
        for (size_t i = 0; i < num_elements; i++) {
            printf("%d ", arr[i]);
        }
        // Free the allocated memory
        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/

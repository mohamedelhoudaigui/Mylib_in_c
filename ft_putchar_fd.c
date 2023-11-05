/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 03:27:52 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 03:58:50 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
int main(void)
{
    char c1 = 'A';
    int fd1 = 0;  // Standard output

    ft_putchar_fd(c1, fd1);  // Should print 'A' to the console

    char c2 = 'B';
    int fd2 = 1;

    ft_putchar_fd(c2, fd2);  // Should print a newline character

    char c3 = 'C';
    int fd3 = 2;  // Standard error

    ft_putchar_fd(c3, fd3);  // Should print '!' to the error stream
	
	int	new_fd;

	new_fd = open("test.txt", O_RDONLY);
	printf("%d", new_fd);

	int new_f = open("test1.txt", O_RDONLY);
	printf("%d\n", new_f);
    return (0);
}
*/

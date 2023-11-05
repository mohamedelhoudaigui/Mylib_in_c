/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:15:39 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 04:30:55 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;

	if (n > 2147483647 || n < -2147483648)
		return ;
	if (fd < 0)
		return ;
	long_n = n;
	if (long_n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = -long_n;
	}
	if (long_n < 10)
		ft_putchar_fd((long_n + '0'), fd);
	if (long_n > 9)
	{
		ft_putnbr_fd((long_n / 10), fd);
		ft_putnbr_fd((long_n % 10), fd);
	}
}
/*
int	main(void)
{
	int	fd;
	int	c;

	fd = open("test.txt", O_RDWR);
	c= 2147483647;
	ft_putnbr_fd(c, fd);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:07:59 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 04:14:41 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main(int ac, char **av)
{
	int	fd;

	if (ac == 2)
	{
		fd = open("test.txt", O_RDWR);
		if (fd == -1)
		{
			printf("files description failed");
		}
		ft_putendl_fd(av[1], fd);
	}
	return (0);
}
*/

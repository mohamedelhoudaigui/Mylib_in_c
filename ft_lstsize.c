/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 05:25:10 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 05:34:31 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*p;

	if (!lst)
		return (0);
	i = 0;
	p = lst;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*lst1;
	int		i;

	i = 0;
	lst1 = NULL;
	i = ft_lstsize(lst1);
	printf("%d\n", i);
	return (0);
}
*/

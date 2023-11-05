/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:00:09 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 06:32:59 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_lstlast(*lst);
			tmp->next = new;
		}
	}
}
/*
int	main(int ac, char **av)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	**p;

	if (ac > 1)
	{
		p = NULL;
		lst1 = ft_lstnew(av[1]);
		lst2 = ft_lstnew(av[2]);
		lst3 = ft_lstnew(av[3]);
		lst1->next = lst2;
		p = &lst1;
		ft_lstadd_back(p, lst3);
		while (*p != NULL)
		{
			printf("%s\n", (*p)->content);
			*p = (*p)->next;
		}
	}
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:55:27 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 15:05:33 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*root;

	if (!*lst ||!del)
		return ;
	root = *lst;
	while (root)
	{
		next = root->next;
		ft_lstdelone(root, del);
		root = next;
	}
	*lst = 0;
}
/*
int main(int ac, char **av)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	char	*lst1_con;
	char	*lst2_con;
	char	*lst3_con;

	if (ac > 2)
	{
		// Creating a linked list with three nodes
		lst1_con = (char *)malloc(7);
		if (!lst1_con)
			return (-1);
		lst2_con = (char *)malloc(7);
		if (!lst2_con)
			return (-1);
		lst3_con = (char *)malloc(7);
		if (!lst3_con)
			return (-1);
		lst1_con = av[1];
		lst2_con = av[2];
		lst3_con = av[3];
		lst1 = ft_lstnew(lst1_con);
		lst2 = ft_lstnew(lst2_con);
		lst3 = ft_lstnew(lst3_con);

		lst1->next = lst2;
		lst2->next = lst3;

		// Displaying the original linked list
		t_list *p = lst1;
		while (p->next)
		{
			printf("%s\n", p->content);
			p = p->next;
		}

		// Clearing the linked list
		ft_lstclear(&lst1, free);

		// Displaying the cleared linked list (should be empty)
		p = lst1;
		while (p)
		{
			printf("%s\n", p->content);
			p = p->next;
		}
	}
	return (0);
}
*/

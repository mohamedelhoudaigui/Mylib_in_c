/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:12:36 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 15:20:31 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_root;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new_root = ft_lstnew(f(lst->content));
	if (!new_root)
		return (NULL);
	head = new_root;
	lst = lst->next;
	while (lst)
	{
		new_root->next = ft_lstnew(f(lst->content));
		if (!new_root->next)
		{
			ft_lstclear(&new_root, del);
			return (NULL);
		}
		new_root = new_root->next;
		lst = lst->next;
	}
	return (head);
}

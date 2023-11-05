/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 05:49:50 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 05:58:04 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return (p);
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*res;

	lst1 = ft_lstnew("lst1");
	lst2 = ft_lstnew("lst2");
	lst3 = ft_lstnew("lst3");
	lst1->next = lst2;
	lst2->next = lst3;
	res = ft_lstlast(lst1);
	printf("%s\n", lst3->content);
	printf("%s\n", res->content);
	return (0);
}
*/

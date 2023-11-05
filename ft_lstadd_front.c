/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 05:07:41 by mel-houd          #+#    #+#             */
/*   Updated: 2023/11/04 05:23:27 by mel-houd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*root;
	t_list	**l = NULL;

	root = ft_lstnew("hi my name is mohaem");
	ft_lstadd_front(l, root);
	printf("%s\n", root->content);
	printf("%p\n", root->next);
	return (0);
}*/

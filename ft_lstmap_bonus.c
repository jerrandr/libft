/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:27:51 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/14 11:30:57 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_element;

	new_lst = NULL;
	while (lst)
	{
		tmp_element = ft_lstnew(f(lst->content));
		ft_lstadd_back(&new_lst, tmp_element);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (new_lst);
}

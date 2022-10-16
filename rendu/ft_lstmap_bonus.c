/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <skoulen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:03:50 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/16 17:38:27 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_iter;
	t_list	*old_iter;
	t_list	*new_elt;
	void	*new_content;

	new_list = 0;
	new_iter = new_list;
	old_iter = lst;
	while (old_iter)
	{
		new_content = f(old_iter->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
		}
		new_elt = ft_lstnew(new_content);
		if (!new_elt)
		{
			ft_lstclear(&new_list, del);
		}
		ft_lstadd_back(&new_iter, new_elt);
		old_iter = old_iter->next;
		new_iter = new_iter->next;
	}
	return (new_list);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:58:51 by ipetruni          #+#    #+#             */
/*   Updated: 2023/05/30 18:33:07 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*cnt;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		cnt = f(lst->content);
		new_node = ft_lstnew(cnt);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(cnt);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

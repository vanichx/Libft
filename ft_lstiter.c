/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:06:27 by ipetruni          #+#    #+#             */
/*   Updated: 2023/05/26 18:29:29 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_list;

	current_list = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (current_list != NULL)
	{
		f(current_list->content);
		current_list = current_list->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:41:58 by ipetruni          #+#    #+#             */
/*   Updated: 2023/05/23 11:46:38 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		buf_size;

	buf_size = ft_strlen(src) + 1;
	new = malloc(buf_size);
	if (NULL == new)
		return (NULL);
	ft_strlcpy(new, src, buf_size);
	return (new);
}

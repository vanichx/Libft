/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:35:47 by ipetruni          #+#    #+#             */
/*   Updated: 2023/05/26 16:43:43 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	bytes_needed;
	size_t	i;
	char	*ptr;

	i = 0;
	if (NULL == s1 || NULL == s2)
		return (NULL);
	bytes_needed = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(bytes_needed);
	if (NULL == ptr)
		return (NULL);
	while (*s1)
		*(ptr + i++) = *s1++;
	while (*s2)
		*(ptr + i++) = *s2++;
	*(ptr + i) = '\0';
	return (ptr);
}

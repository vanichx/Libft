/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:51:21 by ipetruni          #+#    #+#             */
/*   Updated: 2023/05/22 16:25:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hi;
	size_t	ni;

	hi = 0;
	if (!*needle || (haystack == NULL && !len))
		return ((char *)haystack);
	while (haystack[hi] != '\0' && hi < len)
	{
		ni = 0;
		while (*(haystack + hi + ni) == *(needle + ni) && hi + ni < len)
		{
			if (needle[ni + 1] == '\0')
			{
				return ((char *)haystack + hi);
			}
			ni++;
		}
		hi++;
	}
	return (NULL);
}

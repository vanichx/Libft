/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:04:49 by ipetruni          #+#    #+#             */
/*   Updated: 2023/05/24 18:16:34 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	size_t	index;

	index = 0;
	if (n <= 0)
		index++;
	while (n)
	{
		index++;
		n = n / 10;
	}
	return (index);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_len(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	else if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		if (n < 0)
			ptr[--len] = (~(n % 10) + 1) + 48;
		else
			ptr[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
//   char *str = ft_itoa(-2134);
//   printf(":%s:\n", str);
//   str = ft_itoa(42);
//   printf(":%s:\n", str);
//   str = ft_itoa(707);
//   printf(":%s:\n", str);
//   str = ft_itoa(INT32_MIN);
//   printf(":%s:\n", str);
//   str = ft_itoa(INT32_MAX);
//   printf(":%s:\n", str);
//   str = ft_itoa(0);
//   printf(":%s:\n", str);
//   return 0;
// }
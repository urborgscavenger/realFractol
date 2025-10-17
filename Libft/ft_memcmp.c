/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:47:19 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:05:58 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char str1[] = "Hello, World!";
// 	const char str2[] = "Hello, World!";
// 	const char str3[] = "Hello, Universe!";
// 	size_t n = 5;

// 	int result1 = ft_memcmp(str1, str2, n);
// 	int result2 = ft_memcmp(str1, str3, n);

// 	printf("Comparison of '%s' and '%s' for first %zu bytes: %d\n", str1, str2,
		// n, result1);
// 	printf("Comparison of '%s' and '%s' for first %zu bytes: %d\n", str1, str3,
		// n, result2);

// 	return (0);
// }
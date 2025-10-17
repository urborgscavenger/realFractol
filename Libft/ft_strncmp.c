/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:45:40 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 14:37:59 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	const char *str1 = "Hello, World!";
// 	const char *str2 = "Hello, World!";
// 	const char *str3 = "Hello, Universe!";
// 	size_t n = 5;

// 	int result1 = ft_strncmp(str1, str2, n);
// 	int result2 = ft_strncmp(str1, str3, n);

// 	printf("Comparison of '%s' and '%s' for first %zu characters: %d\n", str1,
// 		str2, n, result1);
// 	printf("Comparison of '%s' and '%s' for first %zu characters: %d\n", str1,
// 		str3, n, result2);

// 	return (0);
// }
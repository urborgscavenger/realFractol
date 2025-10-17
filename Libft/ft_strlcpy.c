/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:31:08 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/21 09:43:33 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Recursive helper function to copy characters
static size_t	ft_strlcpy_recursiv(char *dst, const char *src, size_t size,
		size_t i)
{
	if (src[i] == '\0')
	{
		if (i < size)
			dst[i] = '\0';
		return (i);
	}
	if (i < size - 1 && size > 0)
	{
		dst[i] = src[i];
		return (ft_strlcpy_recursiv(dst, src, size, i + 1));
	}
	if (i == size - 1 && size > 0)
		dst[i] = '\0';
	return (ft_strlcpy_recursiv(dst, src, size, i + 1));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	return (ft_strlcpy_recursiv(dst, src, size, 0));
}

// int	main(void)
// {
// 	char dest[20];
// 	char dest2[20];
// 	const char *src = "Hello, World!";
// 	const char *src2 = "Hello, World!";
// 	size_t copied;

// 	copied = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: %s\n", dest);
// 	printf("Number of characters copied: %zu\n", copied);
// 	copied = strlcpy(dest2, src2, sizeof(dest2));
// 	printf("OG Copied string: %s\n", dest2);
// 	printf("OG Number of characters copied: %zu\n", copied);
// 	return (0);
// }
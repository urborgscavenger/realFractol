/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:42:19 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 14:43:29 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len >= size)
		return (size + src_len);
	if (size > 0 && dst_len < size - 1)
	{
		while (i < src_len && dst_len + i < size - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char dest[20] = "Hello, ";
// 	char dest2[20] = "Hello, ";
// 	const char *src = "World!";
// 	const char *src2 = "World!";
// 	size_t result;
// 	size_t result2;

// 	result = ft_strlcat(dest, src, sizeof(dest));
// 	printf("Resulting string: %s\n", dest);
// 	printf("Total length after concatenation: %zu\n", result);

// 	result2 = strlcat(dest2, src2, sizeof(dest2));
// 	printf("OG Resulting string: %s\n", dest2);
// 	printf("OG Total length after concatenation: %zu\n", result2);

// 	return (0);
// }
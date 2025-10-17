/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:56:19 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/17 10:10:40 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memcpy_recursiv(void *dest, const void *src, unsigned long n,
		unsigned long i)
{
	if (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		ft_memcpy_recursiv(dest, src, n, i + 1);
	}
}

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned long		i;

	if (!dest && !src)
		return (0);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	ft_memcpy_recursiv(dest_ptr, src_ptr, n, i);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <stddef.h>
// #include <stdint.h>
// int	main(void)
// {
// 	char src[] = "42";
// 	char dest[50] = "kick-off";
// 	char src2[] = "42";
// 	char dest2[50] = "kick-off";

// 	ft_memcpy(dest, src, 13);
// 	memcpy(dest2, src2, 13);
// 	dest[13] = '\0';
// 	for (int i = 0; i < 14; i++)
// 	{
// 		if (dest[i] == '\0')
// 			break ;
// 		putchar(dest[i]);
// 	}
// 	putchar('\n');
// 	printf("%s\n", dest);
// 	printf("%s -->> OG\n", dest2);
// 	return (0);
// }
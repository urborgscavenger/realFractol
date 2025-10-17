/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:05:25 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/17 10:10:44 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmove_recursiv(void *dest, const void *src, unsigned long n,
		unsigned long i)
{
	if (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		ft_memmove_recursiv(dest, src, n, i + 1);
	}
}

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned long		i;

	if (!dest && !src)
		return (0);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	if (dest_ptr < src_ptr)
	{
		ft_memmove_recursiv(dest_ptr, src_ptr, n, i);
	}
	else
	{
		while (n-- > 0)
			dest_ptr[n] = src_ptr[n];
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "42";
// 	char dest[50] = "kick-off";
// 	char src2[] = "42";
// 	char dest2[50] = "kick-off";

// 	ft_memmove(dest, src, 13);
// 	memmove(dest2, src2, 13);
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
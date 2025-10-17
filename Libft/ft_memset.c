/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:00:59 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/21 09:42:09 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	mset_recursiv(unsigned char *ptr, unsigned char c, size_t n)
// {
// 	if (n == 0)
// 		return;
// 	*ptr = c;
// 	mset_recursiv(ptr + 1, c, n - 1);
// }

void	*ft_memset(void *dist, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)dist;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dist);
}

// int	main(void)
// {
// 	char str[50] = "";
// 	char str2[50] = "";
// 	printf("Before memset: %s\n", str);
// 	printf("Before OGmemset: %s\n", str2);
// 	ft_memset(str, 'X', 5);
// 	memset(str2, 'X', 5);
// 	printf("After memset: %s\n", str);
// 	printf("After OGmemset: %s\n", str2);
// 	return (0);
// }

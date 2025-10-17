/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:46:31 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:04:59 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "Hello, World!";
// 	char *result;
// 	char *result2;

// 	result = ft_memchr(str, 'W', sizeof(str));
// 	result2 = memchr(str, 'W', sizeof(str));
// 	if (result)
// 		printf("Found character 'W': %s\n", result);
// 	else
// 		printf("Character 'W' not found.\n");
// 	printf("OG\n");
// 	if (result2)
// 		printf("Found character 'W': %s\n", result2);
// 	else
// 		printf("Character 'W' not found.\n");
// 	return (0);
// }
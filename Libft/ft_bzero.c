/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:40:03 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/17 10:10:47 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bzero_recursiv(void *s, unsigned long n, unsigned long i)
{
	if (i < n)
	{
		((unsigned char *)s)[i] = 0;
		ft_bzero_recursiv(s, n, i + 1);
	}
}

void	ft_bzero(void *s, unsigned long n)
{
	unsigned char	*ptr;
	unsigned long	i;

	ptr = (unsigned char *)s;
	i = 0;
	ft_bzero_recursiv(ptr, n, i);
}

// int	main(void)
// {
// 	char str[50] = "Hello, World!";
// 	char str2[50] = "Hello, World!";
// 	printf("Before bzero: %s\n", str);
// 	printf("Before OGbzero: %s\n", str2);
// 	ft_bzero(str, 10);
// 	bzero(str2, 10);

// 	printf("After bzero (byte by byte): ");
// 	for (size_t i = 0; i < 42; i++)
// 		printf("%c", str[i] ? str[i] : '.');
// 	printf("\n");

// 	printf("After bzero (byte by byte): ");
// 	for (size_t i = 0; i < 42; i++)
// 		printf("%c", str2[i] ? str2[i] : '.');
// 	printf("%s", "OG");
// 	printf("\n");

// 	return (0);
// }

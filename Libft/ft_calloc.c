/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:51:56 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/21 09:41:00 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calloc_recursiv(unsigned char *ptr, size_t total_size, size_t i)
{
	if (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		ft_calloc_recursiv(ptr, total_size, i + 1);
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t	i;

	i = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_calloc_recursiv((unsigned char *)ptr, total_size, i);
	return (ptr);
}

// int	main(void)
// {
// 	size_t count = 5;
// 	size_t size = sizeof(int);
// 	int *arr = ft_calloc(count, size);
// 	if (arr == NULL)
// 	{
// 		return 1; // Allocation failed
// 	}

// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("%d ", arr[i]); // Should print 0 for all elements
// 	}
// 	printf("\n");

// 	free(arr); // Don't forget to free the allocated memory
// 	return 0;
// }
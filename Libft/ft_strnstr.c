/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:49:32 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/10 17:00:07 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	const char *haystack = "Hello, World!";
// 	const char *needle = "World";
// 	size_t len = 20;

// 	char *result = ft_strnstr(haystack, needle, len);
// 	if (result)
// 		printf("Found substring '%s' in '%s': %s\n", needle, haystack, result);
// 	else
// 		printf("Substring '%s' not found in '%s'.\n", needle, haystack);

// 	return 0;
// }
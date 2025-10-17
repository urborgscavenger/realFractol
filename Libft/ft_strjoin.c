/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:27:49 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 14:34:38 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_recursive(const char *s1, const char *s2, char *result)
{
	if (*s1)
	{
		*result = *s1;
		copy_recursive(s1 + 1, s2, result + 1);
	}
	else if (*s2)
	{
		*result = *s2;
		copy_recursive(s1, s2 + 1, result + 1);
	}
	else
	{
		*result = '\0';
	}
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	copy_recursive(s1, s2, result);
	return (result);
}

// int	main(void)
// {
// 	const char *str1 = "Hello, ";
// 	const char *str2 = "World!";
// 	char *joined_str;

// 	joined_str = ft_strjoin(str1, str2);
// 	if (joined_str)
// 	{
// 		printf("Joined string: %s\n", joined_str);
// 		free(joined_str); // Don't forget to free the allocated memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:28:01 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/10 17:00:48 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	return (ft_substr(s1, start, len));
}

// int	main(void)
// {
// 	const char *str = "   Hello, World!   ";
// 	const char *set = " ";
// 	char *trimmed_str;

// 	trimmed_str = ft_strtrim(str, set);
// 	if (trimmed_str)
// 	{
// 		printf("Original string: '%s'\n", str);
// 		printf("Trimmed string: '%s'\n", trimmed_str);
// 		free(trimmed_str); // Don't forget to free the allocated memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:34:22 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/21 09:40:55 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_recursiv(const char *s, int c, int ct)
{
	if (s[ct] == (char)c)
		return ((char *)&s[ct]);
	if (s[ct] == '\0')
		return (NULL);
	return (ft_strchr_recursiv(s, c, ct + 1));
}

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	return (ft_strchr_recursiv(s, c, 0));
}

// int	main()
// {
// 	char str[] = "Hello, World!";
// 	char *result;
// 	char *result2;

// 	result2 = strchr(str, 'z');
// 	result = ft_strchr(str, 'W');
// 	if (result)
// 		printf("Found character 'W': %s\n", result);
// 	else
// 		printf("Character 'W' not found.\n");
// 	printf("OG\n");
// 	if (result2)
// 		printf("Found character 'z': %s\n", result2);
// 	else
// 		printf("Character 'z' not found.\n");
// 	return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:44:23 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/21 09:36:04 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr_recursiv(const char *s, int c, int ct)
{
	char	*res;

	if (s[ct] == '\0')
	{
		if ((unsigned char)c == '\0')
			return ((char *)&s[ct]);
		return (NULL);
	}
	res = ft_strrchr_recursiv(s, c, ct + 1);
	if (res)
		return (res);
	if (s[ct] == (unsigned char)c)
		return ((char *)&s[ct]);
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	return (ft_strrchr_recursiv(s, c, 0));
}

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *result;
// 	char *result2;

// 	result2 = strrchr(str, 'z');
// 	result = ft_strrchr(str, 'W');
// 	if (result)
// 		printf("Found character 'W': %s\n", result);
// 	else
// 		printf("Character 'W' not found.\n");
// 	printf("OG\n");
// 	if (result2)
// 		printf("Found character 'z': %s\n", result2);
// 	else
// 		printf("Character 'z' not found.\n");
// 	return (0);
// }